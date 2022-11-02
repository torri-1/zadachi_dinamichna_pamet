#include <iostream>

using namespace std;

int main()
{
    auto *a = new int;
    auto *c = new double;
    auto *p = new string;

    cout << "Въведете цяло число - реално число - символен низ" << endl;
    cin >> *a >> *c >> *p;
    cout << *a << " - " << *c << " - " << *p << endl;

    delete a;
    delete c;
    delete p;

    return 0;
}
