// 2.14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
double axb(double& a, double& b) {
    try {
        if (a == 0.0)
            throw "Nu se poate imparti la 0!";
        return -b / a;
    }
    catch (char* exception) {
        cout << exception;
        exit(EXIT_FAILURE);
    }
}
int main()
{
    double a = 4.0, b = 8.0;
    cout << axb(a, b);
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
