#include "subwindow.h"
#include "ui_subwindow.h"
#include"solution.h"
#include<string>
#include<regex>
subWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    perform.clear();
}

subWindow::~subWindow()
{
    delete ui;
}


void subWindow::on_compute_clicked()
{
    std::string s=inputlist.toStdString();
    if (inputlist.size()==0){
        ui->output->setText("");}
    //验证首位合法性，-、数字、（、为合法。
    else if(std::regex_match(s,regex("^[\\*\\/\\)\\&\\^\\#].*$"))){
        ui->output->setText("None");
    }
    else{
        Solution s1;
        s1.excute(inputlist);
        ui->output->setText(inputlist);
    }
    inputlist.clear();
    perform.clear();
}

void subWindow::on_one_clicked()
{
    inputlist+="1";
    perform+="1";
    ui->output->setText(perform);

}

void subWindow::on_two_clicked()
{
    inputlist+="2";
    perform+="2";
    ui->output->setText(perform);
}

void subWindow::on_three_clicked()
{
    inputlist+="3";
    perform+="3";
    ui->output->setText(perform);
}

void subWindow::on_four_clicked()
{
    inputlist+="4";
    perform+="4";
    ui->output->setText(perform);
}

void subWindow::on_five_clicked()
{
    inputlist+="5";
    perform+="5";
    ui->output->setText(perform);
}

void subWindow::on_six_clicked()
{
    inputlist+="6";
    perform+="6";
    ui->output->setText(perform);
}

void subWindow::on_seven_clicked()
{
    inputlist+="7";
    perform+="7";
    ui->output->setText(perform);
}

void subWindow::on_eight_clicked()
{
    inputlist+="8";
    perform+="8";
    ui->output->setText(perform);
}

void subWindow::on_nine_clicked()
{
    inputlist+="9";
    perform+="9";
    ui->output->setText(perform);
}

void subWindow::on_zero_2_clicked()
{
    inputlist+="0";
    perform+="0";
    ui->output->setText(perform);
}

void subWindow::on_add_clicked()
{
    inputlist+="+";
    perform+="+";
    ui->output->setText(perform);
}
void subWindow::on_sub_clicked()
{
    inputlist+="-";
    perform+="-";
    ui->output->setText(perform);
}
void subWindow::on_pro_clicked()
{
    inputlist+="*";
    perform+="*";
    ui->output->setText(perform);
}
void subWindow::on_divi_clicked()
{
    inputlist+="/";
    perform+=0x00F7;
    ui->output->setText(perform);
}

void subWindow::on_clear_clicked()
{
   inputlist.clear();
   perform.clear();
   ui->output->setText(perform);
}

void subWindow::on_kuohao1_clicked()
{
    inputlist+="(";
    perform+="(";
    ui->output->setText(perform);
}

void subWindow::on_kuohao2_clicked()
{
    inputlist+=")";
    perform+=")";
    ui->output->setText(perform);
}

void subWindow::on_Backspace_clicked()
{
    inputlist=inputlist.left(inputlist.length()-1);
    perform=perform.left(perform.length()-1);
    ui->output->setText(perform);
}

//~代表开方
void subWindow::on_radical_clicked()
{
    inputlist+="&";
    std:string s="√";
    perform+=QString::fromStdString(s);
    ui->output->setText(perform);
}
//^代表指数运算
void subWindow::on_Power_clicked()
{
    inputlist+="^";
    perform+="^";
    ui->output->setText(perform);
}
//log代表对数运算
void subWindow::on_log_clicked()
{
    inputlist+="#";
    std:string s="㏒";
    perform+=QString::fromStdString(s);
    ui->output->setText(perform);
}

void subWindow::on_decimal_clicked()
{
    inputlist+=".";
    perform+=".";
    ui->output->setText(perform);
}
