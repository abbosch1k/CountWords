#include <iostream>
using namespace std;

int main() {
    double temp;
    char scale;
    cout << "Введите температуру и шкалу (C или F): ";
    cin >> temp >> scale;

    if (scale == 'C' || scale == 'c')
        cout << "В Фаренгейтах: " << (temp * 9 / 5) + 32;
    else if (scale == 'F' || scale == 'f')
        cout << "В Цельсиях: " << (temp - 32) * 5 / 9;
    else
        cout << "Неверная шкала!";
    return 0;
}
