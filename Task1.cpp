// Лабораторна робота №10 — Задача 1 (двовимірний масив 4x3: парні у рядках)
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
    const int m = 4, n = 3;
    int a[m][n];

    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Matrix 4x3:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 20;
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        int evenCount = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) evenCount++;
        }
        cout << "Row " << i << ": even count = " << evenCount << endl;
    }
    return 0;
}
