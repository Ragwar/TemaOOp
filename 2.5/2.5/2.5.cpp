// 2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstring>

using namespace std;

int getSize(int b)
{
    return sizeof(b);
}
int getSize(double b)
{
    return sizeof(b);
}
int getSize(char* b)
{
    int lenght = strlen(b);
    return lenght;
}

int main()
{
    int olint = 9;
    double oldouble = 48.67;
    char olstr[] = "Ana are mere";
    cout << getSize(olint) << '\n' << getSize(oldouble) << '\n' << getSize(olstr);
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
