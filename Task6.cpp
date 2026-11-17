// Лабораторна робота №10 — Задача 6 (двовимірний масив 4x7: мінімум та індекси)
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
    const int m = 4, n = 7;
    int a[m][n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Matrix 4x7:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100 - 30;
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    int minR = 0, minC = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < a[minR][minC]) {
                minR = i;
                minC = j;
            }
        }
    }

    cout << "Min element = " << a[minR][minC]
         << " at [" << minR << "][" << minC << "]" << endl;
    return 0;
}
