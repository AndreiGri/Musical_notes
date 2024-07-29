#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum Note                                       // Перечисление нот
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main()
{
    system("color 70");
    system("chcp 1251>nul");

    string notes;                               // Строка для записи номеров нот аккорда
    cout << " Введите номера нот от 1 до 7: ";  // Запрашиваем ноты аккорда
    cin >> notes;                               // Записываем номера нот
    int n{ stoi(notes) };                       // Преобразуем строку в число
    int mask = 0;                               // Побитовая маска аккорда
        for (int i = 0; i < notes.size(); i++)  // Используя длину строки в цикле for
        {                                       // собираем маску аккорда
            mask |= 1 << ((n % 10) - 1);
            n /= 10;
        }

        cout << " Аккорд: ";                    // Выводим ноты аккорда в консоль
        if (mask & Note::DO)
        {
            cout << " DO";
        }

        if (mask & Note::RE)
        {
            cout << " RE";
        }

        if (mask & Note::MI)
        {
            cout << " MI";
        }

        if (mask & Note::FA)
        {
            cout << " FA";
        }

        if (mask & Note::SOL)
        {
            cout << " SOL";
        }

        if (mask & Note::LA)
        {
            cout << " LA";
        }

        if (mask & Note::SI)
        {
            cout << " SI";
        }

        cout << endl;

    system("pause>nul");
    return 0;
}