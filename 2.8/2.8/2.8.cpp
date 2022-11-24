// 2.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

template<typename T>
T getNrMax(T nr1, T nr2, T nr3) {
    if (nr1 >= nr2 && nr1 >= nr3)
        return nr1;
    else if (nr2 >= nr1 && nr2 >= nr3)
        return nr2;
    else
        return nr3;
}
int main() {
    int IntItemnr1 = 12, IntItemnr2 = 11, IntItemnr3 = 6;
    float FloatItemnr1 = 7.15, FloatItemnr2 = -12.1, FloatItemnr3 = 4.6;
    char CStringItemnr1[] = "abd", CStringItemnr2[] = "A0A", CStringItemnr3[] = "aBc";

    cout << getNrMax(IntItemnr1, IntItemnr2, IntItemnr3) << endl;
    cout << getNrMax(FloatItemnr1, FloatItemnr2, FloatItemnr3) << endl;
    cout << getNrMax(CStringItemnr1, CStringItemnr2, CStringItemnr3) << endl;
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
