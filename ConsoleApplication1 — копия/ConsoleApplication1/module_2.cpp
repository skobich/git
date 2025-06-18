#include "module_2.h"
#include <fstream>
#include <string>

struct Data
{
    string surname;
    string instrument;
    int years;
    string contest;
};

void find()
{
    ifstream fin("Assort.txt");
    ofstream fout("intermediate.txt");

    int count = 0;
    string line;
    // ������� ���������� ����� (�������)
    while (getline(fin, line))
        count++;

    fin.clear();
    fin.seekg(0);

    Data* arr = new Data[count];
    for (int i = 0; i < count; i++)
    {
        fin >> arr[i].surname >> arr[i].instrument >> arr[i].years >> arr[i].contest;
    }

    cout << "�������, �������� �� �������:\n";
    fout << "�������, �������� �� �������:\n";

    for (int i = 0; i < count; i++)
    {
        if (arr[i].instrument == "�������" || arr[i].instrument == "�������")
        {
            cout << arr[i].surname << " " << arr[i].years << " ���, ������� � ���������: " << arr[i].contest << endl;
            fout << arr[i].surname << " " << arr[i].years << " ���, ������� � ���������: " << arr[i].contest << endl;
        }
    }

    fin.close();
    fout.close();
    delete[] arr;
}