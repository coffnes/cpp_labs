#include <iostream>
#include "Keyboard.h"
#include "Scanner.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Keyboard key1("Ryzen", 3, 120, "usb");
    Keyboard key2("Logitech", 3, 112, "bluetooth");
    Scanner sc1("Canon", 4, 400);
    Scanner sc2("Samsung", 5, 600);
    
    Periphery* prArray[4];
    const int count = 4;
    prArray[0] = &key1;
    prArray[1] = &key2;
    prArray[2] = &sc1;
    prArray[3] = &sc2;

    int choice = -1;

    while (true) {
        cout << "1.Просмотр\n2.Вычислить\n3.Редактировать\n0.Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;
        switch (choice) {
        case 0:
            return 0;
            break;
        case 1:
            for (int i = 0; i != count; i++) {
                prArray[i]->output();
                cout << endl;
            }
            break;
        case 2:
        {
            float averageLifetime = 0.0;
            for (int i = 0; i != count; i++) {
                averageLifetime += prArray[i]->getLifetime();
            }
            averageLifetime /= 4.0;
            cout << "Средний срок эксплуатации: " << averageLifetime << endl;
            break;
        }
        case 3:
            int index;
            cout << "Номер элемента(от 1 до 4): ";
            cin >> index;
            prArray[index - 1]->edit();
            break;
        }
    }

}