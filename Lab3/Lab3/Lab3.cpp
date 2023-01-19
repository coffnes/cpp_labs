#include <iostream>
#include "MetroTrain.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice = -1;
    MetroTrain train;
    while (true) {
        cout << "0.Выход\n1.Вывод состояния вагона\n2.Начать движение\n";
        cout << "Ваш выбор: ";
        cin >> choice;
        switch (choice) {
        case 0:
            return 0;
            break;
        case 1:
            train.screenOutput();
            break;
        case 2:
            string startPoint = "";
            string endPoint = "";
            int speed = 0;
            int numOfPassengers = 0;
            int numOfOutPassengers = 0;
            cout << "Введите станцию отправления: ";
            cin >> startPoint;
            train.setStartPoint(startPoint);
            cout << "Введите станцию назначения: ";
            cin >> endPoint;
            train.setEndPoint(endPoint);
            cout << "Введите кол-во пассажиров вошедших в вагон: ";
            cin >> numOfPassengers;
            train.addPassenger(numOfPassengers);
            cout << "Введите скорость: ";
            cin >> speed;
            train.setSpeed(speed);
            cout << "Отправляемся..." << endl;
            train.changeMovement();
            cout << "...................................." << endl;
            cout << "Прибыли на станцию: " << train.getEndPoint() << endl;
            train.changeMovement();
            train.setSpeed(0);
            cout << "Введите сколько пассажиров вышло на станции: ";
            cin >> numOfOutPassengers;
            train.removePassenger(numOfOutPassengers);
        }
    }
}