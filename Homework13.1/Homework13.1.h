// Homework13.1.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include <string>
#include <iostream>

class Animal
{
private:
    std::string name;
    double weight;

public:
    Animal(std::string name = " ", double weight = 0.0);
    
    // Метод для вычисления среднего веса и возврата нового объекта
    Animal middle(const Animal &other) const;
    
    // Метод для установки веса
    void setWeight(double newWeight);
    
    // Метод для получения веса
    double getWeight() const;
    
    void show() const;
};