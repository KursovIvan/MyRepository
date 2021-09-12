#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;
    int b;
    
    cout << "Введите два числа: ";
    cin >> a >> b;

    cout << "Сумма: " << a + b << endl << "Разность: " << a - b << endl << "Среднее арифметическое модулей: " << (abs(a) + abs(b)) / 2 << endl << "Произведение: " << a * b << endl << "Частное: " << a / b << endl;

    _getch();
}
