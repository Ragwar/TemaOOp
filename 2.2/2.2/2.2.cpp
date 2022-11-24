// 2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int f(const float& n, const bool& isRoundedTo100 = false)
{
    if (isRoundedTo100)
    {
        int no;
        no = n;
        if (no % 100 < 50)
            return no - (no % 100);
        else
            return no + 100 - (no % 100);
    }
    return n;
}

int main()
{
    float x = 49.05;
    cout << f(x) << '\n';
    cout << f(x, true) << '\n';
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
