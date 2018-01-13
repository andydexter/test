#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int presses=0;
int sizecounter=10;
//QSize size=10;

void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked==true){
        ui->label->setText("ticked!");
    }
    else if(checked==false){
        ui->label->setText("not tickedddddd!");
    }
}

void MainWindow::on_pushButton_clicked()
{
    presses++;
//    ui->label->size(size);
    if(presses==1){
        ui->label->setText("why you poke");
    }
    if(presses>2 && presses<5){
        ui->label->setText("stop");
    }
    if(presses>=5 && presses<8){
        ui->label->setText("this is not funny");
    }
    if(presses>=8 && presses<12){
        ui->label->setText("this is annoying");
    }
    if(presses>=12){
        ui->label->setText("£#@&^*!:@??/!!!");
    }
}
