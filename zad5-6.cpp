#include <iostream>

using namespace std;

void write (double *pArr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "[" << i << "]= ";
        cin >> pArr[i];
    }
}

double minn(const double *pArr, int n) {
    double min = pArr[0];
    for (int i = 1; i < n; ++i) {
        if (pArr[i] < min) {
            min = pArr[i];
        }
    }
    return min;
}

void print (double *pArr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "[" << i << "]= " << pArr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Въведете размер на масива: ";
    cin >> n;
    auto *pArr = new double[n];

    double *pA = pArr;

    write(pA, n);
    print(pA, n);

    cout << "Най-малкият елемент на масива е: ";
    cout << minn(pA, n) << endl;

    delete[] pArr;

    return 0;
}