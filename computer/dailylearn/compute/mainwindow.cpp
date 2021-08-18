#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"solution.h"
#include<string>
#include<regex>
#include<QShortcut>
#include<help.h>
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
    ui->compute->setShortcut(tr("return"));
    //ui->compute->setShortcut(tr("return"));
    ui->one->setShortcut(tr("1"));
    ui->two->setShortcut(tr("2"));
    ui->three->setShortcut(tr("3"));
    ui->four->setShortcut(tr("4"));
    ui->five->setShortcut(tr("5"));
    ui->six->setShortcut(tr("6"));
    ui->seven->setShortcut(tr("7"));
    ui->eight->setShortcut(tr("8"));
    ui->nine->setShortcut(tr("9"));
    ui->zero_2->setShortcut(tr("0"));
    ui->add->setShortcut(tr("+"));
    ui->sub->setShortcut(tr("-"));
    ui->pro->setShortcut(tr("*"));
    ui->divi->setShortcut(tr("/"));
    ui->clear->setShortcut(tr(" "));
    ui->kuohao1->setShortcut(tr("("));
    ui->Backspace->setShortcut(tr("Backspace"));
    ui->kuohao2->setShortcut(tr(")"));
    ui->decimal->setShortcut(tr("."));
    connect(ui->actionhelp,SIGNAL(triggered()),this,SLOT(slotopen()),Qt::UniqueConnection);
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
        inputlist.clear();
        perform.clear();
        return;
    }
    //验证首位合法性，-、数字、（、为合法。
    else if(std::regex_match(s,regex("^[\\*\\/\\)\\&\\^\\#].*$"))){
        ui->output->setText("None");
        inputlist.clear();
        perform.clear();
        return;
    }
    else{
        Solution s1;
        s1.excute(inputlist);
        ui->output->setText(inputlist);
        inputlist.clear();
        perform.clear();
        return;
    }
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

void MainWindow::on_actionhelp_triggered()
{
    connect(ui->actionhelp,SIGNAL(triggered()),this,SLOT(slotopen()),Qt::UniqueConnection);
}

void MainWindow::slotopen(){
    help *s=new help();
    s->show();
}
