#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum Note
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

    string notes;
    cout << " Введите номера нот: ";
    cin >> notes;
    int n{ stoi(notes) };
    int mask = 0;
        for (int i = 0; i < notes.size(); i++)
        {
            mask += n % 10;
            n /= 10;
        }

        if (mask & DO)
        {
            cout << " DO";
        }

        if (mask & RE)
        {
            cout << " RE";
        }

        if (mask & MI)
        {
            cout << " MI";
        }

        if (mask & FA)
        {
            cout << " FA";
        }

        if (mask & SOL)
        {
            cout << " SOL";
        }
        
        if (mask & LA)
        {
            cout << " LA";
        }

        if (mask & SI)
        {
            cout << " SI";
        }

    system("pause>nul");
    return 0;
}