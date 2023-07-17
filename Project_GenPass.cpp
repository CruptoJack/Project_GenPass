#include <iostream>
#include <string>
#include <ctime>

using namespace std;
// Генератор паролей
string generatePassword(int length) {
    string password;
    // Допустимые символы
    const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+{}[]|:;<>,.?/~`";

    // Инициализируем генератор случайных чисел
    srand(time(NULL));

    // Генерируем пароль длиной length
    for (int i = 0; i < length; i++) {
        int index = rand() % characters.length();
        password += characters[index];
    }

    return password;
}

int main() {
    setlocale(LC_ALL,"RU");
    int length;
    cout << "Введите длину пароля: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "Сгенерированный пароль: " << password << std::endl;

    return 0;
}