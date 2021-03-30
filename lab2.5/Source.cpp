#include <iostream>
#pragma pack(1)
#include "Rational.h"

int main()
{
    Pair a, b, c;
    Rational f;
    int result;

    cout << "__________________________" << endl;
    cout << "\nPair a " << endl;
    cout << "(x/y)" << endl;
    cin >> a;
    cout << a;

    cout << "__________________________" << endl;
    cout << "\nPair b " << endl;
    cout << "(x/y)" << endl;
    cin >> b;
    cout << b;

   cout << "____________________________" << endl;
    cout << "\nPair c " << endl;
    cout << "(x/y)" << endl;
    cin >> c;
    cout << c;

    cout << "\na and b" << endl;
    result = f.ComparePairs(a, b);
    f.ComparePairsResult(result);

    cout << "\na and c" << endl;
    result = f.ComparePairs(a, c);
    f.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = f.ComparePairs(b, c);
    f.ComparePairsResult(result);

    cout << "a++" << endl;
    cout << a++ << endl;

    cout << "a--" << endl;
    cout << a-- << endl;

    cout << "++a" << endl;
    cout << ++a << endl;

    cout << "--a" << endl;
    cout << --a << endl;

    cout << "Size of class is equal to " << sizeof(Rational) << endl;

    return 0;
}