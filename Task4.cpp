// Лабораторна робота №10 — Задача 4 (двовимірний масив 4x6: сума стовпчиків)
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
    const int m = 4, n = 6;
    int a[m][n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Matrix 4x6:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20 - 5;
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += a[i][j];
        }
        cout << "Col " << j << ": sum = " << sum << endl;
    }
    return 0;
}
