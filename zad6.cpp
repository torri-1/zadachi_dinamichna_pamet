#include <iostream>

using namespace std;

void write (double *pArr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "A[" << i << "]= ";
        cin >> pArr[i];
    }
}

double minn(const double *pArr, int n, int &num) {
    double min = pArr[0];
    for (int i = 1; i < n; ++i) {
        if (pArr[i] < min) {
            min = pArr[i];
            num = i;
        }
    }
    return min;
}

void print (double *pArr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "A[" << i << "]= " << pArr[i] << endl;
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

    int num = 0;
    double min = minn(pA, n, num);
    cout << "Най-малкият елемент на масива е A[" << num << "]= " << min;

    delete[] pArr;

    return 0;
}