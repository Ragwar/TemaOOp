// 2.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
template<typename T>
void interschimbare(T& first, T& second)
{
    T temp{ first };
    first = second;
    second = temp;
}

template<size_t maxSize>
void interschimbare(char(&first)[maxSize], char(&second)[maxSize]) {
    for (size_t i = 0; i != maxSize; i++)
        swap(first[i], second[i]);
}
int main()
{
    int IntSwapNr1 = 15, IntSwapNr2 = 4;
    float FloatSwapNr1 = 12.1, FloatSwapNr2 = 6.6;
    char StringSwapNr1[] = "aBC", StringSwapNr2[] = "Abc";

    interschimbare(IntSwapNr1, IntSwapNr2);
    interschimbare(FloatSwapNr1, FloatSwapNr2);
    interschimbare(StringSwapNr1, StringSwapNr2);

    cout << IntSwapNr1 << " " << IntSwapNr2 << '\n';
    cout << FloatSwapNr1 << " " << FloatSwapNr2 << '\n';
    cout << StringSwapNr1 << " " << StringSwapNr2 << '\n';
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
