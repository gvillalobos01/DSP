/*
 * DSP Example is part of the DSP Lecture at TEC-Costa Rica
 * Copyright (C) 2010  Pablo Alvarado
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file   mainwindow.cpp
 *         Implements the equalizer H(w) computation
 * \author Pablo Alvarado
 * \date   2010.12.12
 *
 * $Id: equalizer.cpp $
 */


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "jack.h"
#include <string>
#include <QDebug>


#undef _DSP_DEBUG
#define _DSP_DEBUG

#ifdef _DSP_DEBUG
#define _debug(x) std::cerr << x
#include <iostream>
#else
#define _debug(x)
#endif

int labelNumber;
int registro_i = 0;
bool descolgado;
int registro[8];

/**
 * Precision used by trimming
 */
const float MainWindow::Epsilon = 0.001;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    verbose_(false),
    dspChanged_(true)
{
    ui->setupUi(this);


    /*
     * Set up a timer 4 times in a second to check if the user
     * changed the equalizer values, and if so, then create a new
     * filter response
     */


    //Subir y bajar el volumen
    connect(ui->C, SIGNAL(clicked()), this, SLOT(on_C_clicked()));
    connect(ui->D, SIGNAL(clicked()), this, SLOT(on_D_clicked()));




    //Almacenar los números:
    connect(ui->num_0, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_1, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_2, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_3, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_4, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_5, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_6, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_7, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_8, SIGNAL(clicked()), this, SLOT(digit_pressed()));
    connect(ui->num_9, SIGNAL(clicked()), this, SLOT(digit_pressed()));


    timer_ = new QTimer(this);
    connect(timer_, SIGNAL(timeout()), this, SLOT(update()));
    timer_->start(250);

    dsp_ = new dspSystem;
    jack::init(dsp_);

    // parse some command line arguments
    QStringList argv(QCoreApplication::arguments());

//    QStringList::const_iterator it(argv.begin());
//    while(it!=argv.end()) {
//      if ((*it)=="-v" || (*it)=="--verbose") {
//        verbose_=true;
//      } else if ((*it).indexOf(".wav",0,Qt::CaseInsensitive)>0) {
//        ui->fileEdit->setText(*it);
//        std::string tmp(qPrintable(*it));
//        jack::playAlso(tmp.c_str());
//      }
//      ++it;
//    }

}


MainWindow::~MainWindow()
{
    jack::close();
    delete timer_;
    delete ui;
    delete dsp_;
}

void MainWindow::update() {
    if(dspChanged_){
        _debug("Updating" << std::endl);

        dspChanged_=false;
    }
    
}


void MainWindow::on_volumeSlider_valueChanged(int value){
    if (!dspChanged_){
        dspChanged_=true;
    }
    dsp_->updateVolume(value);
    ;
}


//void MainWindow::on_fileButton_clicked() {
//  selectedFiles_ =
//      QFileDialog::getOpenFileNames(this,
//                                   "Select one or more audio files to open",
//                                   ui->fileEdit->text(),
//                                   "WAV Files (*.wav)");

//  if (!selectedFiles_.empty()) {
//    ui->fileEdit->setText(*selectedFiles_.begin());

//    jack::stopFiles();
//    QStringList::iterator it;
//    for (it=selectedFiles_.begin();it!=selectedFiles_.end();++it) {
//      std::string tmp(qPrintable(*it));
//      jack::playAlso(tmp.c_str());
//    }
//  }
//}

//void MainWindow::on_fileEdit_returnPressed() {
//  jack::stopFiles();on_num_9_clicked
//  std::string tmp(qPrintable(ui->fileEdit->text()));
//  if (!tmp.empty()) {
//    jack::playAlso(tmp.c_str());
//  }
//}

// SUBIR VOLUMEN

void MainWindow::on_C_clicked()
{
//    player->setMedia(QUrl::fromLocalFile("/home/fabimarin/Desktop/Llave/diag/C.wav"));
//    player->play();
            jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/C.wav");
    int value;
    value = ui->progressBar->value();
    value = ui->volumeSlider->value();
    ui->progressBar->setValue(value+1);
    ui->volumeSlider->setValue(value+1);
    if (!dspChanged_){
        dspChanged_=true;
    }
    dsp_->updateVolume(value);
}

// BAJAR VOLUMEN

void MainWindow::on_D_clicked()
{
                jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/D.wav");
    int value;
    value = ui->progressBar->value();
    value = ui->volumeSlider->value();
    ui->volumeSlider->setValue(value-1);
    ui->progressBar->setValue(value-1);
    if (!dspChanged_){
        dspChanged_=true;
    }
    dsp_->updateVolume(value);

}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    QString newLabel;

    labelNumber = (ui->label->text() + button->text()).toDouble();

    if(descolgado == true){
    newLabel = QString::number(labelNumber,'g',15);
    }

    ui->label->setText(newLabel);

    qDebug() << labelNumber;
}


void MainWindow::on_num_1_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/1.wav");
}

void MainWindow::on_num_2_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/2.wav");
}

void MainWindow::on_num_3_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/3.wav");

}

void MainWindow::on_num_4_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/4.wav");

}

void MainWindow::on_num_5_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/5.wav");

}

void MainWindow::on_num_6_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/6.wav");

}

void MainWindow::on_num_7_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/7.wav");

}

void MainWindow::on_num_8_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/8.wav");

}

void MainWindow::on_num_9_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/9.wav");

}

void MainWindow::on_num_0_clicked()
{
    jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/0.wav");

}

void MainWindow::on_numeral_clicked()
{
    registro[registro_i]=labelNumber;

    qDebug() << registro[registro_i];
    registro_i++;
    int array[8];
    for (int i = 7; i>=0; i--){
        array[i] = labelNumber % 10;
        labelNumber /= 10;

    }


    if(descolgado == true){


    for (int i = 0; i<=7; i++){
        if (array[i]==0){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/0.wav");
        }
        else if (array[i]==1){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/1.wav");
        }
        else if (array[i]==2){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/2.wav");
        }
        else if (array[i]==3){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/3.wav");
        }
        else if (array[i]==4){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/4.wav");
        }
        else if (array[i]==5){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/5.wav");
        }
        else if (array[i]==6){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/6.wav");
        }
        else if (array[i]==7){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/7.wav");
        }
        else if (array[i]==8){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/8.wav");
        }
        else if (array[i]==9){
            jack::playAlso("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/9.wav");
        }
    }

    }
   //clear()::labelNumber;
}

void MainWindow::on_Descolgar_clicked()
{
    descolgado = true;
}

void MainWindow::on_Colgar_clicked()
{
    descolgado = false;
    labelNumber = 0;
}

void MainWindow::on_A_clicked()
{
        jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/A.wav");
}

void MainWindow::on_B_clicked()
{
        jack::play("/home/tviguz/Desktop/Prueba_02/MediaPlayer_v1/B.wav");
}

void MainWindow::on_star_clicked()
{

}
