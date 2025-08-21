// Homework13.cpp: определяет точку входа для приложения.
//

#include "Homework13.h"

using namespace std;
 /*На прием к ветеринару пришли Барсик, Алекс и Глория. 
     Но не все указали свое имя + у системы есть некоторые критерии, которым нужно следовать.
     Задача: Посчитайте средний вес, сделайте проверку, что он не меньше 20 (иначе прибавьте 5) + если не указано имя,
     то сообщите об этом (переприсвойте поле имени).*/
// Конструктор
Animal::Animal(const string& n, double w) : name(n), weight(w) {}

// Метод для проверки веса и добавления 5 если меньше 20
Animal& Animal::check()
{
    if (weight < 20.0)
    {
        weight += 5.0;
        cout << "Вес увеличен на 5: теперь " << weight << " кг" << "\n";
    }
    return *this;
}

// Метод для проверки пустого имени
Animal& Animal::empty()
{
    if (name.empty() || name == " ")
    {
        name = "Неизвестно";
        cout << "Имя не указано! Установлено значение 'Неизвестно'" << "\n";
    }
    return *this;
}

// Метод для показа информации о животном
Animal& Animal::show()
{
    cout << "Животное: " << name << ", вес: " << weight << " кг" << "\n";
    return *this;
}

// Статический метод для вычисления среднего веса
Animal Animal::middle(const Animal& a1, const Animal& a2)
{
    double avgweight = (a1.weight + a2.weight) / 2.0;
    return Animal("Средний_вес", avgweight);
}
int main()
{
    setlocale(LC_ALL, "Rus");
	 Animal Cat("Barsik", 10.2), Lion("Alex", 8), Hippo(" ", 0.45);
    
    // Цепочка вызовов методов
    Hippo.middle(Cat, Lion).check().empty().show();
    Hippo.empty().check().show();
	return 0;
}
