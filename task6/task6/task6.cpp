#include <iostream>
using namespace std;


// Два варианта: вуз и школа
struct Student
{
    char Case;
    union
    {
        struct { char Surname[10], Name[10]; float Mark; } School;
        struct { char Surname[40], Name[10]; int Age;  } University;
    };
};

// Ввод информаци:
Student InpStudentInfo(char cs)
{
    Student scb;
    if (scb.Case = cs)
    {
        cout << "Имя ученика: "; cin >> scb.School.Name;
        cout << "Фамилия ученика: "; cin >> scb.School.Surname;
        cout << "Средний балл: "; cin >> scb.School.Mark;
    }
    else
    {
        cout << "Фамилия студента: "; cin >> scb.University.Surname;
        cout << "Имя студента: "; cin >> scb.University.Name;
        cout << "Возраст студента: "; cin >> scb.University.Age;
    }
    return scb;
}

// Вывод информации
void OutStudentInfo(Student student)
{
    if (student.Case)
    {
        cout << "Name: " << student.School.Name << endl;
        cout << "Age: " << student.School.Surname << endl;
        cout << "Mark: " << student.School.Mark << endl;
    }
    else cout << "\n" << student.University.Surname << ' ' << student.University.Name << " | "
        << student.University.Age << "\n";
}

void main()
{
    Student DataBase[10],//   База данных.
        scb = { 0, {"", "", 0.0}}; // Пустая структура.
    int i, j;                                  // Очистка базы данных.
    setlocale(LC_ALL, "rus");
    for (i = 0; i < sizeof(DataBase) / sizeof(Student); i++)
        DataBase[i] = scb;
    while (1)
    {
        cout << "    Меню СУБД:" << endl
            << "1. Ввод данных." << endl
            << "2. Вывод информации." << endl
            << "3. Вывод всей информации." << endl
            << "4. Закончить работу." << endl
            << ">";
        cin >> i;
        switch (i)
        {
        case 1: 
            cout << "Student's number: ";
            cin >> i;
            
            cout << "Вариант (0-школа, 1-университет): "; cin >> j;
            DataBase[i] = InpStudentInfo(j); break;
        case 2: 
            cout << "Student's number: "; 
            cin >> i;
            OutStudentInfo(DataBase[i]); break;

        case 3: 
              for (i = 0; i < sizeof(DataBase) / sizeof(Student); i++)
              {
                  cout << "Student _" << i << ':' << endl;
                  OutStudentInfo(DataBase[i]);

              }
        case 4: 
            return;
        default: cout << "Поторите ввод!" << endl;
        }
    }
}

