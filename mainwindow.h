//
// Created by 许灿辉 on 2022/3/31.
//

#ifndef INC_360DRIVINGSYSTEM_CLIENT_MAINWINDOW_H
#define INC_360DRIVINGSYSTEM_CLIENT_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //INC_360DRIVINGSYSTEM_CLIENT_MAINWINDOW_H
