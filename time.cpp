#include <iostream>
using namespace std;
int main() {
    int hour;
    cout << "Введите час (0-23): ";
    cin >> hour;

    if (hour >= 0 && hour <= 23) {
        if (hour >= 5 && hour < 12) {
            cout << "Утро\n";
        } else if (hour >= 12 && hour < 18) {
            cout << "День\n";
        } else if (hour >= 18 && hour < 22) {
            cout << "Вечер\n";
        } else {
            cout << "Ночь\n";
        }
    } else {
        cout << "Некорректный ввод.\n";
    }

    return 0;
}
