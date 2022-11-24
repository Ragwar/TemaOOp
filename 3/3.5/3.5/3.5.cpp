// 3.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class ComplexNumber{
    int rational;
    int irational;
public:
    ComplexNumber(int rational, int irational) {
        this->rational = rational;
        this->irational = irational;
    }
    int addition1(ComplexNumber x) {
        return this->rational + x.rational;
    }
    int addition2(ComplexNumber x) {
        return this->irational + x.irational;
    }
    int multiplication1(ComplexNumber x) {
        return this->rational* x.rational- this->irational*x.irational;
    }
    int multiplication2(ComplexNumber x) {
        return this->rational * x.irational + this->irational * x.rational;
    }
};
int main()
{
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    ComplexNumber ab(a, b);
    ComplexNumber cd(c, d);
    cout << ab.addition1(cd) << "+" << ab.addition2(cd) << "*i" << endl;
    cout << ab.multiplication1(cd) << "+" << ab.multiplication2(cd) << "*i";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
