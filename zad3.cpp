#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Въведете размер на масива: ";
    cin >> n;
    auto *pArr = new double[n];

    double *pA = pArr;

    for (int i = 0; i < n; ++i) {
        cout << "[" << i << "]= ";
        cin >> pA[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << "[" << i << "]= " << pA[i] << endl;
    }

    delete[] pArr;

    return 0;
}
