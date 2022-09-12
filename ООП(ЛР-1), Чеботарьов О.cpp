// метод ініціалізації Init(); метод повинен контролювати значення аргументів на коректність;
//• метод введення з клавіатури Read();
//• метод виведення на екран Display()

//Реалізувати метод ipart()

#include <iostream>
#include "Divider.h"
using namespace std;

int main()
{
	Divider one;
	one = one.Init(10, 4);
	one.Display();
	cout << "Needed result = " << one.IPart() << endl;

	system("PAUSE");

}