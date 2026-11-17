// Лабораторна робота №10 — Задача 3 (двовимірний масив 5x7: сума рядків)
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
    const int m = 5, n = 7;
    int a[m][n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Matrix 5x7:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20 - 5;
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        cout << "Row " << i << ": sum = " << sum << endl;
    }
    return 0;
}
