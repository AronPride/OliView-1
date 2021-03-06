/***************************************************************************
**                                                                        **
**  QCustomPlot, an easy to use, modern plotting widget for Qt            **
**  Copyright (C) 2011, 2012, 2013, 2014 Emanuel Eichhammer               **
**                                                                        **
**  This program is free software: you can redistribute it and/or modify  **
**  it under the terms of the GNU General Public License as published by  **
**  the Free Software Foundation, either version 3 of the License, or     **
**  (at your option) any later version.                                   **
**                                                                        **
**  This program is distributed in the hope that it will be useful,       **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of        **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         **
**  GNU General Public License for more details.                          **
**                                                                        **
**  You should have received a copy of the GNU General Public License     **
**  along with this program.  If not, see http://www.gnu.org/licenses/.   **
**                                                                        **
****************************************************************************
**           Author: Emanuel Eichhammer                                   **
**  Website/Contact: http://www.qcustomplot.com/                          **
**             Date: 07.04.14                                             **
**          Version: 1.2.1                                                **
****************************************************************************/


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "qcustomplot.h" // the header file of QCustomPlot
#include "Biquad.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    

    QTimer *timer;

private slots:
    void setupWaveTypes();
    void setupAldeSensGraph(QCustomPlot *customPlot);

    void setUpComPort();
    void legendDoubleClick(QCPLegend* legend, QCPAbstractLegendItem* item);
    void waveType();
    void fillPortsInfo();
    void preParse();
    void pointPlot();
    void readEverything();

    void parseAndPlot();
    void CVparseAndPlot();
    void mouseWheel();
    void mousePress();
    void removeSelectedGraph();
    void exportSelectedGraph();
    void exportAll();
    void filterSelectedGraph();
    void removeAllGraphs();
    void contextMenuRequest(QPoint pos);
    void selectionChanged();
    void sampASPressed();
    void sampPAPressed();
    void sampCVPressed();
    void resetAxis();
    void clearAllSelected();
    void closeSelected();
    void disconnectSelected();
    void graphClicked(QCPAbstractPlottable *plottable);

    void res10ASelected();
    void res10nASelected();
    void res100nASelected();
    void res1000nASelected();

    void rate2000Selected();
    void rate5000Selected();
    void rate10000Selected();

private:
    Ui::MainWindow *ui;
    QString teensyPort;
    QStringList everythingAvail;
    quint32 samples;

    int sampleRate;
    float gain;
    float voltDiv;
    int graphMemory;
    double timeValue;
    QElapsedTimer elapsedTimer;
    quint32 flipSample;

    int readEverything_count;
    QString readEverything_containerStart;
    QString readEverything_container;

    int waveNum;
    int count;


};

#endif // MAINWINDOW_H

