#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    int target = 1 + rand() % 100;
    int guess;

    cout << "Игра: Угадай число от 1 до 100!\n";

    do {
        cout << "Введите ваше предположение: ";
        cin >> guess;

        if (guess > target) {
            cout << "Меньше!\n";
        } else if (guess < target) {
            cout << "Больше!\n";
        } else {
            cout << "Поздравляем! Вы угадали число: " << target << "\n";
        }
    } while (guess != target);

    return 0;
}
