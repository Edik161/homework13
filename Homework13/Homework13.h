// Homework13.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include <string>
#include <iostream>

class Animal
{
public:
    // Конструктор
    Animal(const std::string& n, double w);

    // Методы для цепочки вызовов
    Animal& check();
    Animal& empty();
    Animal& show();

    // Статический метод для вычисления среднего веса
    static Animal middle(const Animal& a1, const Animal& a2);

    private:
    std::string name;
    double weight;

};