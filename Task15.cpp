// Лабораторна робота №10 — Задача 15 (двовимірний масив 3x3: сума по діагоналях)
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
    const int m = 3, n = 3;
    int a[m][n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Matrix 3x3:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20;
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    int mainDiag = 0, secDiag = 0;
    for (int i = 0; i < m; i++) {
        mainDiag += a[i][i];
        secDiag += a[i][n - 1 - i];
    }

    cout << "Main diagonal sum = " << mainDiag << endl;
    cout << "Secondary diagonal sum = " << secDiag << endl;
    return 0;
}
