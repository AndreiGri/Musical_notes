#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum Note
{
    DO = 1,
    RE = 2,
    MI = 3,
    FA = 4,
    SOL = 5,
    LA = 6,
    SI = 7
};

int main()
{
    system("color 70");
    system("chcp 1251>nul");

    string notes;
    cout << " Введите номера нот: ";
    cin >> notes;

    system("pause>nul");
    return 0;
}