#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введите предложение: ";
    getline(cin, s);

    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word) count++;

    cout << "Количество слов: " << count << "\n";
    return 0;
}
