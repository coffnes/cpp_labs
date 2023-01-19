#include <iostream>

using namespace std;

class TableString {
public:
    TableString() {
        groupeName = "0000";
        facultyName = "faculty_default";
        studentsCount = 1;
        successStudensCount = 1;
    }

    TableString(string groupeName, string facultyName, int studentsCount, int successStudentsCount) {
        this->groupeName = groupeName;
        this->facultyName = facultyName;
        this->studentsCount = studentsCount;
        this->successStudensCount = successStudentsCount;
    }
    
    string getGroupeName() {
        return groupeName;
    }

    string getFacultyName() {
        return facultyName;
    }

    int getStudentsCount() {
        return studentsCount;
    }

    int getSuccessStudentsCount() {
        return successStudensCount;
    }

    void setGroupeName(string groupeName) {
        this->groupeName = groupeName;
    }

    void setFacultyName(string facultyName) {
        this->facultyName = facultyName;
    }

    void setStudentsCount(int studentsCount) {
        this->studentsCount = studentsCount;
    }

    void setSuccessStudentsCount(int successStudensCount) {
        this->successStudensCount = successStudensCount;
    }

private:
    string groupeName;
    string facultyName;
    int studentsCount;
    int successStudensCount;
};

void screenOutput(TableString ts);
void editObj(TableString& ts);

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Объект по умолчанию:" << endl;
    TableString ts1;
    screenOutput(ts1);
    
    cout << "Объект с задаными параметрами:" << endl;
    TableString ts2("0001", "faculty1", 20, 4);
    screenOutput(ts2);
    
    cout << "Массив объектов:" << endl;
    TableString ts[2];
    for (int i = 0; i != 2; i++) {
        screenOutput(ts[i]);
    }

    cout << "Редактирование объекта:" << endl;
    editObj(ts1);
    screenOutput(ts1);

    cout << "Вычисления:\n";
    int numOfStudents = 0;
    int successStudents = 0;
    for (int i = 0; i != 2; i++) {
        numOfStudents += ts[i].getStudentsCount();
        successStudents += ts[i].getSuccessStudentsCount();
    }
    cout << "Процент успевающих студентов по всем факультетам: " << float(successStudents) / float(numOfStudents) * 100 << endl;
}

void screenOutput(TableString ts) {
    cout << ts.getGroupeName() << " | " << ts.getFacultyName() << " | " << ts.getStudentsCount() << " | " << ts.getSuccessStudentsCount() << endl;
}

void editObj(TableString& ts) {
    string tempGroupeName = "";
    string tempFacultyName = "";
    int tempStudentsCount = 0;
    int tempSuccessStudentsCount = 0;

    cout << "Введите название группы: ";
    cin >> tempGroupeName;
    ts.setGroupeName(tempGroupeName);

    cout << "Введите название факультета: ";
    cin >> tempFacultyName;
    ts.setFacultyName(tempFacultyName);

    cout << "Введите количество учеников:";
    cin >> tempStudentsCount;
    ts.setStudentsCount(tempStudentsCount);

    cout << "Введите количество успевающих учеников: ";
    cin >> tempSuccessStudentsCount;
    ts.setSuccessStudentsCount(tempSuccessStudentsCount);
}

