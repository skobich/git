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
    cout << "������� ���������� ��������: ";
    cin >> n;
    Data* arr = new Data[n];
    for (int i = 0; i < n; i++)
    {
        cout << "������ " << i + 1 << endl;
        cout << " �������: ";
        cin >> arr[i].surname;
        cout << " ����������: ";
        cin >> arr[i].instrument;
        cout << " ������� ��� ����������: ";
        cin >> arr[i].years;
        cout << " ������� � ��������� (��/���): ";
        cin >> arr[i].contest;

        fout << arr[i].surname << " " << arr[i].instrument << " " << arr[i].years << " " << arr[i].contest << endl;
    }
    fout.close();
    delete[] arr;
}