// Лабораторна робота №10 — Задача 5 (двовимірний масив 3x4: максимум та індекси)
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
    const int m = 3, n = 4;
    int a[m][n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Matrix 3x4:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100 - 20;
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    int maxR = 0, maxC = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > a[maxR][maxC]) {
                maxR = i;
                maxC = j;
            }
        }
    }

    cout << "Max element = " << a[maxR][maxC]
         << " at [" << maxR << "][" << maxC << "]" << endl;
    return 0;
}
