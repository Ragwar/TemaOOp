// 3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Student {
    string nume;
    double medie;
public:

    void getter(string nume, double medie) {
        this->nume = nume;
        this->medie = medie;
    }
    string getName() {
        return nume;
    }
    double getMedie() {
        return medie;
    }
    int checkMedie(double Medie) {
        if (Medie>medie)
            return 1;
        if (Medie == medie)
            return 2;
        return 0;
    }
};

int main()
{

    vector<Student> v;
    Student s;
    int n;
    string nume;
    double medie;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nume >> medie;
        s.getter(nume, medie);
        v.push_back(s);
    }
    double Max=0;
    list<string> lista;
    for (int i = 0; i < n; i++) {
        if (v[i].checkMedie(Max) == 0) {
            Max = v[i].getMedie();
            lista.clear();
            lista.push_back(v[i].getName());
        }
        else
            if (v[i].checkMedie(Max) == 2)
                lista.push_back(v[i].getName());
    }
    
    for (auto it = lista.begin(); it != lista.end(); it++) {
        cout << *it;
    }
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
