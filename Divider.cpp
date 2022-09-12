#include "Divider.h"
#include <iostream>
using namespace std;

Divider Divider::Init(int f, int s)
{
	Divider tmp;
	tmp.first = f;
	tmp.second = s;
	return tmp;

}

Divider Divider::Read()
{
	Divider tmp;
	cout << "Imput First" << endl;
	cin >> tmp.first;
	cout << "Imput Second" << endl;
	cin >> tmp.second;
	return tmp;
}

void Divider::Display()
{
	cout << "First=" << first << endl;
	cout << endl;
	cout << "Second=" << second << endl;
}

int Divider::IPart()
{ 
	int result = first / second;
	if (second==0)
	{

		cout << "ERROR" << endl;
		return 1;
	}
	else{
		return result;
	}
	
}
