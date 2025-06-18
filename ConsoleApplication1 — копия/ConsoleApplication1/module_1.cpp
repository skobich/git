#include "module_1.h"
#include <fstream>
#include <string>

struct Data
{
    string surname;
    string instrument;
    int years;
    string contest;
};

void enter()
{
    ofstream fout("Assort.txt");
    int n;
    cout << "Введите количество учеников: ";
    cin >> n;
    Data* arr = new Data[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ученик " << i + 1 << endl;
        cout << " Фамилия: ";
        cin >> arr[i].surname;
        cout << " Инструмент: ";
        cin >> arr[i].instrument;
        cout << " Сколько лет занимается: ";
        cin >> arr[i].years;
        cout << " Участие в конкурсах (да/нет): ";
        cin >> arr[i].contest;

        fout << arr[i].surname << " " << arr[i].instrument << " " << arr[i].years << " " << arr[i].contest << endl;
    }
    fout.close();
    delete[] arr;
}