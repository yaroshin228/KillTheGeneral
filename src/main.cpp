#include <iostream>
#include <random>

//using namespace std;

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 2);

    int general_choice = dist(gen);
    int guess;

    std::cout << "Привет! Ты в игре 'Убей генерала'.\n";
    std::cout << "Твоя задача подсыпать яд в кружку которую выпьет генерал и убить его!\n";
    std::cout << "Но если он выберет не отравленную кружку ты проиграешь!\n";
    std::cout << "Нажми Enter для продолжения...\n";

    std::cin.get();

    std::cout << "Генерал скоро будет!\n";
    std::cout << "Выбери кружку для отравления (1 или 2).\n";

    std::cin >> guess;

    if (guess == general_choice) {
        std::cout << "Генерал отравлен, \033[32mты победил!\033[0m";
    }

    else {
        std::cout << "\033[31mТы проиграл!\033[0m Генерал выбрал не отравленную кружку...";
    }
    return 0;
}
