﻿#include <iostream>
#include <string>
#include "Class_Counter.h"
    using namespace std;

    /*
    * В этом задании вы вынесете класс в отдельный файл. Возьмите класс счётчика из предыдущего домашнего задания.
    Вынесите этот класс в отдельный файл, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.

    Прошлое задание, демонстрирующее работу класса Counter. Спросите у пользователя, хочет ли он указать начальное значение для счётчика.
    Если хочет, дайте ему возможность это сделать. Затем предоставьте пользователю возможность вводить команды:

    +: увеличьте счётчик на 1
    -: уменьшите счётчик на 1
    =: выведите текущее значение счётчика
    x: завершите работу программы
    */


    int main()
    {
        setlocale(LC_ALL, "Ru");

        bool userValueInitialization = true;
        int user_input = 0;
        char command = {};


        cout << "Вы хотите указать начальное значение счётчика? Введите \"1\" - (Да) или \"0\" - (Нет): ";
        cin >> userValueInitialization;
        if (userValueInitialization == true)
        {
            cout << "Введите свое число: ";
            cin >> user_input;
        }
        auto command_counter = userValueInitialization ? Counter(user_input) : Counter(); // экземпляр счётчика с 2-мя параметрами
        /*if (answer == "yes") // вариант с переменной string
        {
            cout << "Введите свое число: ";
            cin >> user_input;
            command_counter = { user_input };
            //command_counter.Set_by_user(user_input);
        }
        if (answer == "no")
        {
            command_counter;
            //command_counter.Set_by1();
        }*/

        do
        {
            cout << "Введите команду ('+', '-', '=' или 'x') : ";
            cin >> command;

            switch (static_cast<Commands>(command))
            {
            case Commands::Increment:
            {
                command_counter.Increment();
                break;
            }
            case Commands::Decrement:
            {
                command_counter.Decrement();
                break;
            }
            case Commands::Get_value:
            {
                cout << command_counter.Get_value() << endl;
                break;
            }
            case Commands::Exit:
            {
                cout << "До свидания! ";
                return 0;
            }
            default:
            {
                cout << "Неправильная команда!\t";
                break;
            }
            }
        } while (static_cast<Commands>(command) != Commands::Exit);

        /* ВАРИАНТ С ЦИКЛОМ DO WHILE
        do
        {
            cout << "Введите команду('+', '-', '=' или 'x') : ";
            cin >> command;
            if (command == '+')
            {
                command_counter.Increment(user_input);
            }
            if (command == '-')
            {
                command_counter.Decrement(user_input);
            }
            if (command == '=')
            {
                cout << command_counter.Get_value(user_input) << endl;
            }
            if (command == 'x')
            {
                cout << "До свидания!" << endl;
                break;
            }

        } while (command != 'x');*/

        /* ВАРИАНТ С WHILE
        cout << "Введите команду('+', '-', '=' или 'x') : ";
        cin >> command;

        while (command != 'x')
        {
            cout << endl << "Введите команду('+', '-', '=' или 'x') : ";
            cin >> command;
            if (command == '+')
            {
                command_counter.Increment(user_input);
            }
            if (command == '-')
            {
                command_counter.Decrement(user_input);
            }
            if (command == '=')
            {
                cout << command_counter.Get_value(user_input);
            }
            if (command == 'x')
            {
                cout << "До свидания!" << endl;
                break;
            }
        }*/

        return 0;
    }