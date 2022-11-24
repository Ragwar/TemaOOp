// 5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class A: public B
{
public:
    void testA() {
        // set the attributes in class A
    }
    int aa;
protected:
    int ab;
private:
    int ac;
    
};
class B : private C
{
public:
    int ba;
    void testB() {
        // set values for the attributes in classes B and A
    }
protected:
    int bb;
private:
    int bc;
   
};
class C
{
public:
    int ca;
    void testC() {
        // set values for the attributes in classes C, B and A
    }
protected:
    int cb;
private:
    int cc;
    
};
int main()
{
    std::cout << "Hello World!\n";
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
