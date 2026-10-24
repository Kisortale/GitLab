

#include <iostream>
#include <clocale>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Hello World!\n";

    int a, b;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;
    
    cout << "Разность: " << a - b << "\n";
}

