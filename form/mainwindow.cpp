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

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);
    bool state=0;
    if(ui->radioButton_male->isChecked()==1)
        ui->textBrowser->append("gender:male");
    else if(ui->radioButton_female->isChecked()==1) {
         ui->textBrowser->append("gender:female");
    }
    ui->textBrowser->append("birthdate:"+QString::number(2000-ui->comboBox_year->currentIndex())+"."+QString::number(1+ui->comboBox_month->currentIndex())+"."+QString::number(1+ui->comboBox_day->currentIndex()));
    if(ui->checkBox_sport->isChecked()==1&&state==0){
        ui->textBrowser->append("interest:sport");
        state=1;
    }
    if(ui->checkBox_music->isChecked()==1&&state==0){
        ui->textBrowser->append("interest:music");
        state=1;
    }
    else if (ui->checkBox_music->isChecked()==1&&state==1) {
        ui->textBrowser->append("             music");
    }
    if(ui->checkBox_art->isChecked()==1&&state==0){
        ui->textBrowser->append("interest:art");
        state=1;
    }
    else if (ui->checkBox_art->isChecked()==1&&state==1) {
        ui->textBrowser->append("             art");
    }
    if(ui->checkBox_read->isChecked()==1&&state==0){
        ui->textBrowser->append("interest:read");
        state=1;
    }
    else if (ui->checkBox_read->isChecked()==1&&state==1) {
        ui->textBrowser->append("             read");
    }
    if(ui->checkBox_sleep->isChecked()==1&&state==0){
        ui->textBrowser->append("interest:sleep");
        state=1;
    }
    else if (ui->checkBox_sleep->isChecked()==1&&state==1) {
        ui->textBrowser->append("             sleep");
    }
}
