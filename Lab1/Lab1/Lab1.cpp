#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct TableString {
    string groupName; //Название группы
    string facultyName; //Название факультета
    int studentsCount; //Кол-во студентов
    int successStudentsCount; //Кол-во успевающих студентов
};

TableString* tableArr = new TableString[4];
int stringNum = 0;

void createArray();

void editString();

void outputTable();

void calculateSuccess();

void save();

int main()
{
    setlocale(LC_ALL, "Russian");
    
    createArray();
    int choice = -1;

    while (true) {

        cout << "\n1.Редактирование\n2.Вычисление\n3.Вывод\n4.Сохранение\n\n0.Выход" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Редактирование строки" << endl;
            editString();
            break;
        case 2:
            cout << "Вычисление" << endl;
            calculateSuccess();
            break;
        case 3:
            cout << "Отображение содержимого таблицы" << endl;
            outputTable();
            break;
        case 4:
            cout << "Сохранение данных в фаил" << endl;
            save();
            break;
        case 0:
            cout << "Выход" << endl;
            return 0;
            break;
        default:
            cout << "Неверный параметр" << endl;
            break;
        }
    }
}

void createArray() {
    ifstream fileRead;
    fileRead.open("data.txt");

    string temp;
    string tempArr[4];
    int stopPoint = 0;
    int counter = 0;
    int column = 0;
    stringNum = 0;

    while (getline(fileRead, temp)) {
        temp.push_back(' ');
        for (int i = 0; i != temp.length(); i++) {
            if (temp[i] != ' ') {
                counter++;
            }
            else {
                tempArr[column].append(temp, stopPoint, counter);
                stopPoint += counter + 1;
                counter = 0;
                column++;
            }
        }
        stopPoint = 0;
        counter = 0;
        column = 0;

        tableArr[stringNum].groupName = tempArr[0];
        tableArr[stringNum].facultyName = tempArr[1];
        tableArr[stringNum].studentsCount = stoi(tempArr[2]);
        tableArr[stringNum].successStudentsCount = stoi(tempArr[3]);
        stringNum++;

        for (int i = 0; i != 4; i++) {
            tempArr[i] = "";
        }
    }
    fileRead.close();
}

void outputTable() {
    cout << "Группа "
        << setw(12) << "Факультет "
        << setw(12) << "Кол-во студентов "
        << setw(12) << "Кол-во успевающих студентов" << endl;
    for (int i = 0; i != stringNum; i++) {
        cout << tableArr[i].groupName
            << setw(12) << tableArr[i].facultyName
            << setw(12) << tableArr[i].studentsCount
            << setw(12) << tableArr[i].successStudentsCount << endl;
    }
}

void calculateSuccess() {
    int numOfStudents = 0;
    int successStudents = 0;
    for (int i = 0; i != stringNum; i++) {
        numOfStudents += tableArr[i].studentsCount;
        successStudents += tableArr[i].successStudentsCount;
    }
    cout << "Процент успевающих студентов по всем факультетам: " << float(successStudents) / float(numOfStudents) * 100 << endl;
}

void save() {
    string fileName;
    cout << "Сохранение данных. Введите имя файла: ";
    cin.get();
    getline(cin, fileName);
    ofstream fileWriting;
    fileWriting.open(fileName);
    for (int i = 0; i != stringNum; i++) {
        fileWriting << tableArr[i].groupName << " " << tableArr[i].facultyName << " "
            << tableArr[i].studentsCount << " " << tableArr[i].successStudentsCount << endl;
    }
    fileWriting.close();
    exit(0);
}

void editString() {
    cout << "Введите номер строки для редактирования: ";
    int stringNumber = 0;
    cin >> stringNumber;
    stringNumber--;

    if (stringNumber < 0 || stringNumber > stringNum) {
        cout << "Введен некорректный номер строки." << endl;
        return;
    }

    cout << "Введите название группы: ";
    cin >> tableArr[stringNumber].groupName;
    cout << endl;
    cout << "Введите название факультета: ";
    cin >> tableArr[stringNumber].facultyName;
    cout << endl;
    cout << "Введите кол-во студентов: ";
    cin >> tableArr[stringNumber].studentsCount;
    cout << endl;
    cout << "Введите кол-во успевающих студентов: ";
    cin >> tableArr[stringNumber].successStudentsCount;
    cout << endl;

    cout << "Информация успешно записана." << endl;
}