#include "mainwindow.h"
#include "ui_mainwindow.h"

//Для того чтобы поместить первое число введённое пользователем
double num_first;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Соединяем нажатие на кнопку с методом
    //Отслеживаем сигнал
    //работает с классом this, с этим объектом
    //Какой слот должен выполнится
    //Цифры
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    //Операции
    connect(ui->pushButton_plusminus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_percent, SIGNAL(clicked()), this, SLOT(operations()));
    //Математические операции
    connect(ui->pushButton_division, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_multiply, SIGNAL(clicked()), this, SLOT(math_operations()));
    //Возвёдем в степень
    connect(ui->pushButton_x2, SIGNAL(clicked()), this, SLOT(math_operations()));
    //Для син и т.д.
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_exp, SIGNAL(clicked()), this, SLOT(operations()));

    //Чтобы определить что для математических этих значениие может быть true/false
    //Теперь есть возможность, что она выбрана
    ui->pushButton_division->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    //Для степени
    ui->pushButton_x2->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers(){

    //Отслеживаем текст, чтобы выводился в поле при нажатии
    //Позволяет получить ту кнопку на которую нажмём
    //Наследуется от класса QpushButton
    //Далее указываем, что sender, тоже будет преобразовываться в pushbutton
    QPushButton *button = (QPushButton *)sender();

    //Исправим чтобы при нажатие текста цифры плюсовались
    double all_numbers;

    //Для того чтобы не было ошибки, что вставляем double в текст на 49 строке
    QString new_label;

    //Чтобы не конвертировало когда пише 0.0001 на 0.1
    //Берём текст, и если уже введна точка, И при этом текст в button = 0, тогда
    if (ui->ResultShow->text().contains(".") && button->text() == "0"){
        //Без дабл, чтобы осталась текстом
        new_label = ui->ResultShow->text() + button->text();
    } else {
        //Берём текст у ResultShow, прибавляем текст от button, и в конце ставим чтобы было того же типа
        all_numbers= (ui->ResultShow->text() + button->text()).toDouble();

        //Привращаем в строку
        //Оставим g по умолчанию
        //И потом ставим количество чисел после которых появляется 12312e+7
        new_label = QString::number(all_numbers, 'g', 15);
    }
    //Береём кнопку и берём у неё текст
    ui->ResultShow->setText(new_label);
}

//При нажатие на точку
void MainWindow::on_pushButton_dot_clicked()
{
    //Исправляем чтобы нельзя было много раз ставить точку
    //Если у нас нет точки в строке, то добавляем точку
    if(!(ui->ResultShow->text().contains('.')))
        ui->ResultShow->setText(ui->ResultShow->text() + ".");
    //Сверху идут цифры и потом добавляем точку
}

//Скопировали весь метод сверху, там если что комментарии
void MainWindow::operations(){

    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_label;

    //Если текст на кнопке будет = +/-
    if(button->text() == "+/-"){
        all_numbers = (ui->ResultShow->text()).toDouble();
        //Домнажаем на -1
        all_numbers = all_numbers * -1;
        new_label = QString::number(all_numbers, 'g', 15);
    //Делаем теперь для %
    } else if(button->text() == "%"){
        all_numbers = (ui->ResultShow->text()).toDouble();
        //Домнажаем на -1
        all_numbers = all_numbers * 0.01;
        new_label = QString::number(all_numbers, 'g', 15);
    } else if(button->text() == "sin"){
        all_numbers = (ui->ResultShow->text()).toDouble();
        //Домнажаем на -1
        all_numbers = sin(all_numbers);
        new_label = QString::number(all_numbers, 'g', 15);
    } else if(button->text() == "cos"){
        all_numbers = (ui->ResultShow->text()).toDouble();
        //Домнажаем на -1
        all_numbers = cos(all_numbers);
        new_label = QString::number(all_numbers, 'g', 15);
    } else if(button->text() == "tan"){
        all_numbers = (ui->ResultShow->text()).toDouble();
        //Домнажаем на -1
        all_numbers = tan(all_numbers);
        new_label = QString::number(all_numbers, 'g', 15);
    } else if(button->text() == "exp"){
        all_numbers = (ui->ResultShow->text()).toDouble();
        //Домнажаем на -1
        all_numbers = exp(all_numbers);
        new_label = QString::number(all_numbers, 'g', 15);
    }




    ui->ResultShow->setText(new_label);
}

//Операция деления
void MainWindow::math_operations()
{
    //Чтобы не было залипания
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_division->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    //Для степени
    ui->pushButton_x2->setChecked(false);

    //Отслеживаем нажатие клавиши
    QPushButton *button = (QPushButton *)sender();

    //Берём текст у результата, и потом всё в дабл
    num_first = ui->ResultShow->text().toDouble();

    //Чтобы очищался вывод, когда нажимаю операцию
    ui->ResultShow->setText("");

    //Для проверки когда нажимаем =
    button->setChecked(true);
}


void MainWindow::on_pushButton_AC_clicked()
{
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_division->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    //Для степени
    ui->pushButton_x2->setChecked(false);

    ui->ResultShow->setText("0");
}


void MainWindow::on_pushButton_equally_clicked()
{
    //num_second - для второго значения
    //labelNumber - для действия с двумя переменными
    double labelNumber, num_second;
    QString new_label;

    //Второе значение, берём текст, и в дабл
    num_second = ui->ResultShow->text().toDouble();

    //Если + выбрана, тогда
    if (ui->pushButton_plus->isChecked()){
        labelNumber = num_first + num_second;
        //Превращение числа, обратно в строку, и показывая его для выдачи в информацию
        new_label = QString::number(labelNumber, 'g', 15);

        //Результ
        ui->ResultShow->setText(new_label);

        //Делаем false для pushplus
        ui->pushButton_plus->setChecked(false);
        //Для минуса
    } else if (ui->pushButton_minus->isChecked()){
        labelNumber = num_first - num_second;
        //Превращение числа, обратно в строку, и показывая его для выдачи в информацию
        new_label = QString::number(labelNumber, 'g', 15);

        //Результ
        ui->ResultShow->setText(new_label);

        //Делаем false для pushplus
        ui->pushButton_minus->setChecked(false);
        //Для плюса
    } else if (ui->pushButton_division->isChecked()){
        //Проверка деления на 0
        if (num_second == 0){
            //Результ
            ui->ResultShow->setText("0");
        }else{

            labelNumber = num_first / num_second;
            //Превращение числа, обратно в строку, и показывая его для выдачи в информацию
            new_label = QString::number(labelNumber, 'g', 15);

            //Результ
            ui->ResultShow->setText(new_label);
        }
        //Делаем false для pushplus
        ui->pushButton_division->setChecked(false);
    } else if (ui->pushButton_multiply->isChecked()){
        labelNumber = num_first * num_second;
        //Превращение числа, обратно в строку, и показывая его для выдачи в информацию
        new_label = QString::number(labelNumber, 'g', 15);

        //Результ
        ui->ResultShow->setText(new_label);

        //Делаем false для pushplus
        ui->pushButton_multiply->setChecked(false);

    } else if(ui->pushButton_x2->isChecked()){
        labelNumber = pow(num_first,num_second);
        //Превращение числа, обратно в строку, и показывая его для выдачи в информацию
        new_label = QString::number(labelNumber, 'g', 15);

        //Результ
        ui->ResultShow->setText(new_label);

        //Делаем false для pushplus
        ui->pushButton_x2->setChecked(false);
     }
}
