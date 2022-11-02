#include <iostream>

using namespace std;

void write (double *pArr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "[" << i << "]= ";
        cin >> pArr[i];
    }
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

    delete[] pArr;

    return 0;
}