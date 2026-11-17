// Лабораторна робота №10 — Задача 2 (двовимірний масив 6x4: парні у стовпчиках)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    const int m = 6, n = 4;
    int a[m][n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Matrix 6x4:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20;
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++) {
        int evenCount = 0;
        for (int i = 0; i < m; i++) {
            if (a[i][j] % 2 == 0) evenCount++;
        }
        cout << "Col " << j << ": even count = " << evenCount << endl;
    }
    return 0;
}
