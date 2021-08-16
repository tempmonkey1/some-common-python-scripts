#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"solution.h"
#include<string>
#include<regex>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->decimal->hide();
    ui->radical->hide();
    ui->log->hide();
    ui->Power->hide();
    perform.clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_compute_clicked()
{
    std::string s=inputlist.toStdString();
    if (inputlist.size()==0){
        ui->output->setText("");
    }
    //验证输入字符串合法性，猜想
    else if(!std::regex_match(s,regex("^[0-9|\\+|\\-|\\*|\\/|\\.|\\&|\\^|\\#|\\(|\\)]*$"))){
        ui->output->setText("None");
    }
    //验证首位合法性，-、数字、（、为合法。
    if(std::regex_match(s,regex("^[\\*\\/\\)\\&\\^\\#].*$"))){
        ui->output->setText("None");
    }
    else{
        Solution s1;
        s1.excute(inputlist);
        ui->output->setText(inputlist);
//        ui->input->setText(inputlist);
    }
    inputlist.clear();
    perform.clear();
}

void MainWindow::on_one_clicked()
{
    inputlist+="1";
    perform+="1";
    ui->output->setText(perform);

}

void MainWindow::on_two_clicked()
{
    inputlist+="2";
    perform+="2";
    ui->output->setText(perform);
}

void MainWindow::on_three_clicked()
{
    inputlist+="3";
    perform+="3";
    ui->output->setText(perform);
}

void MainWindow::on_four_clicked()
{
    inputlist+="4";
    perform+="4";
    ui->output->setText(perform);
}

void MainWindow::on_five_clicked()
{
    inputlist+="5";
    perform+="5";
    ui->output->setText(perform);
}

void MainWindow::on_six_clicked()
{
    inputlist+="6";
    perform+="6";
    ui->output->setText(perform);
}

void MainWindow::on_seven_clicked()
{
    inputlist+="7";
    perform+="7";
    ui->output->setText(perform);
}

void MainWindow::on_eight_clicked()
{
    inputlist+="8";
    perform+="8";
    ui->output->setText(perform);
}

void MainWindow::on_nine_clicked()
{
    inputlist+="9";
    perform+="9";
    ui->output->setText(perform);
}

void MainWindow::on_zero_2_clicked()
{
    inputlist+="0";
    perform+="0";
    ui->output->setText(perform);
}

void MainWindow::on_add_clicked()
{
    inputlist+="+";
    perform+="+";
    ui->output->setText(perform);
}
void MainWindow::on_sub_clicked()
{
    inputlist+="-";
    perform+="-";
    ui->output->setText(perform);
}
void MainWindow::on_pro_clicked()
{
    inputlist+="*";
    perform+="*";
    ui->output->setText(perform);
}
void MainWindow::on_divi_clicked()
{
    inputlist+="/";
    std:string s="÷";
    perform+=QString::fromStdString(s);
    ui->output->setText(perform);
}

void MainWindow::on_clear_clicked()
{
   inputlist.clear();
   perform.clear();
   ui->output->setText(perform);
}

void MainWindow::on_kuohao1_clicked()
{
    inputlist+="(";
    perform+="(";
    ui->output->setText(perform);
}

void MainWindow::on_kuohao2_clicked()
{
    inputlist+=")";
    perform+=")";
    ui->output->setText(perform);
}

void MainWindow::on_Backspace_clicked()
{
    inputlist=inputlist.left(inputlist.length()-1);
    perform=perform.left(perform.length()-1);
    ui->output->setText(perform);
}

//~代表开方
void MainWindow::on_radical_clicked()
{
    inputlist+="&";
    std:string s="√";
    perform+=QString::fromStdString(s);
    ui->output->setText(perform);
}
//^代表指数运算
void MainWindow::on_Power_clicked()
{
    inputlist+="^";
    perform+="^";
    ui->output->setText(perform);
}
//log代表对数运算
void MainWindow::on_log_clicked()
{
    inputlist+="#";
    std:string s="㏒";
    perform+=QString::fromStdString(s);
    ui->output->setText(perform);
}

void MainWindow::on_decimal_clicked()
{
    inputlist+=".";
    perform+=".";
    ui->output->setText(perform);
}

//void MainWindow::on_input_textEdited(const QString &arg1)
//{
//    std::string args1=arg1.toStdString();
//    if(args1=="√"){
//        inputlist+="&";
//    }
//    else if(args1=="÷"){
//        inputlist+="/";
//    }
//    else if(args1=="㏒"){
//        inputlist+="#";
//    }
//    else{
//        inputlist+=arg1;
//    }
//    perform+=arg1;
////    ui->output->setText(perform);
////    ui->input->setText(perform);
//}
