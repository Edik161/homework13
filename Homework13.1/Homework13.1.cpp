// Homework13.1.cpp: определяет точку входа для приложения.
//

#include "Homework13.1.h"

using namespace std;


// Конструктор
Animal::Animal(string name, double weight)
{
    this->name = name;
    this->weight = weight;
}

// Метод для вычисления среднего веса
Animal Animal::middle(const Animal &other) const
{
    double avg_weight = (this->weight + other.weight) / 2.0;
    return Animal("Средний_вес", avg_weight);
}

// Метод для установки веса
void Animal::setWeight(double newWeight)
{
    weight = newWeight;
}

// Метод для получения веса
double Animal::getWeight() const
{
    return weight;
}

// Метод для отображения информации
void Animal::show() const
{
    cout << name << " " << weight << " кг" << endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    Animal Cat("Barsik", 12.4), Lion("Alex", 8.1), Hippo("Глория", 34.45);
    
    // Вычисляем средний вес и записываем его Глории
    double avg_weight = Cat.middle(Lion).getWeight();
    Hippo.setWeight(avg_weight);
    
    // Показываем обновленную Глорию
    Hippo.show();
    
    return 0;
}
