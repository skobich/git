#include "module_3.h"
#include <fstream>
#include <string>

void save()
{
    ifstream fin("intermediate.txt");
    ofstream fout("result.txt");
    string buffer;
    while (getline(fin, buffer))
    {
        fout << buffer << endl;
    }
    fin.close();
    fout.close();
    cout << "��������� ������� � ����: result.txt" << endl;
}