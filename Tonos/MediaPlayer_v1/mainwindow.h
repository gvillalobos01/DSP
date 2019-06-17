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
 * \file   mainwindow.h
 *         Implements the equalizer H(w) computation
 * \author Pablo Alvarado/Jose Miguel Barboza
 * \date   2010.12.12/2017.05.26
 *
 * $Id: mainwindow.h $
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QFileDialog>

#include <QDebug>


#include "dspsystem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//  void on_fileEdit_returnPressed();
//  void on_fileButton_clicked();
  void on_volumeSlider_valueChanged(int value);


  void update();



  void on_C_clicked();

  void on_D_clicked();

  void on_num_1_clicked();

  void on_num_2_clicked();

  void on_num_3_clicked();

  void on_num_4_clicked();

  void on_num_5_clicked();

  void on_num_6_clicked();

  void on_num_7_clicked();

  void on_num_8_clicked();

  void on_num_9_clicked();

  void on_num_0_clicked();

  void digit_pressed();

  void on_numeral_clicked();

  void on_Descolgar_clicked();

  void on_Colgar_clicked();

  void on_A_clicked();

  void on_B_clicked();

  void on_star_clicked();

private:
    Ui::MainWindow *ui;


    int volumeGain;
    /**
      *Tolerance value
      */
    static const float Epsilon;

     /**
      * Verbose flag
      */
     bool verbose_;

     /**
      * Timer used to recompute the filter once the user changes the
      * values
      */
     QTimer *timer_;

     /**
      * List of selected files so far
      */
     QStringList selectedFiles_;

     /**
      * Pointer to an inherited class of processor, which does
      * all the real work.
      */
     dspSystem* dsp_;

     /**
      *DSP change
      */
     bool dspChanged_;
     

};




#endif // MAINWINDOW_H
