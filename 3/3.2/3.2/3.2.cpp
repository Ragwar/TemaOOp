// 3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include <iostream>
#include <vector>
using namespace std;

class Student{
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
    void display() {
        cout << nume << " " << medie << endl;
    }
};

int main() {
    vector<Student> v;
    Student s;
    int n;
    string nume;
    double medie;
    cout << "citeste numarul de studenti";
    cin >> n;
    cout << endl << "citeste numele studentului, iar apoi media lui";
    for (int i = 0; i < n; i++) {
        cin >> nume >> medie;
        s.getter(nume, medie);
        v.push_back(s);
    }
    for (int i = 0; i < n-1; i++) {
        if (v[i].getMedie() > v[i + 1].getMedie()) {
            Student aux;
            aux.getter(v[i].getName(), v[i].getMedie());
            v[i].getter(v[i + 1].getName(), v[i + 1].getMedie());
            v[i+1].getter(aux.getName(), aux.getMedie());
        }
    }
    for (int i = 0; i < n; i++) {
        v[i].display();
    }
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
