#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;

    string text;
    string word;
    cout << " Введите текст: ";
    getline(cin, text);
    cout << " Введите искомое слово: ";
    cin >> word;

    int count = 0;
    bool found = false;
    for (int j = 0; j < text.length(); j++) {
        bool match = true;
        for (int i = 0; i < word.length(); i++) {
            if (i + j > text.length() || word[i] != text[i + j]) {
                match = false;
                break;
            }
        }
        if (match) {
            count++;
            found = true;
        }
    }

    if (found) {
        cout << " Слово \"" << word << "\" найдено " << count << " раз!" << endl;
    }
    else {
        cout << " Нет совпадений!" << endl;
    }
    
    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}