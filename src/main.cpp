#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 2);

    int general_choice = dist(gen);
    int guess;

    cout << "Привет! Ты в игре 'Убей генерала'" << endl;
    cout << "Твоя задача подсыпать яд в кружку которую выпьет генерал и убить его!" << endl;
    cout << "Но если он выберет не отравленную кружку ты проиграешь!" << endl;
    cout << "Нажми Enter для продолжения..." << endl;

    cin.get();

    cout << "Генерал скоро будет!" << endl;
    cout << "Выбери кружку для отравления (1 или 2)." << endl;

    cin >> guess;

    if (guess == general_choice) {
        cout << "Генерал отравлен, \033[32mты победил!\033[0m";
    }

    else {
        cout << "\033[31mТы проиграл!\033[0m Генерал выбрал не отравленную кружку";
    }

    return 0;

    }
