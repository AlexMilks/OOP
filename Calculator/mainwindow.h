#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

//Добавляю название, слот
//Описываем метод
private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    //Прописываем метод операций
    void operations();
    void on_pushButton_AC_clicked();
    void on_pushButton_equally_clicked();
    //Математические операции
    void math_operations();
};
#endif // MAINWINDOW_H
