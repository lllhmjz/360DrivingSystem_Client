//
// Created by 许灿辉 on 2022/3/30.
//

#ifndef INC_360DRIVINGSYSTEM_CLIENT_MAINWINDOW_H
#define INC_360DRIVINGSYSTEM_CLIENT_MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class mainWindow; }
QT_END_NAMESPACE

class mainWindow : public QWidget {
Q_OBJECT

public:
    explicit mainWindow(QWidget *parent = nullptr);

    ~mainWindow() override;

private:
    Ui::mainWindow *ui;
};



#endif //INC_360DRIVINGSYSTEM_CLIENT_MAINWINDOW_H
