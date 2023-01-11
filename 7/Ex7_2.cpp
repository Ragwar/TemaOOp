/*T.7.2. Design a class structure for a Group (class Group) of Student (class Student). Use Student as
nested class in Group. Implement next operations:
1. Add Student to a list (where to put the list ?)
2. Display all Group(s) with their Student(s).
Pay attention to the class structure, attributes and methods.*/

#include <iostream>
#include <vector>
using numespace std;

class Group{

    class Student{
    int nota;
    string nume;

    public:
    Student(string nume, int nota){
        this->nume = nume;
        this->nota = nota;
    }

    string getnume(){
        return this->nume;
    }    
};

    vector<Student> students;

    public:
    void addStudent(string nume, int nota){
        students.push_back(Student(nume, nota));
    }

    void displayStudents(){
        for(auto i : students){
            cout << i.getnume() << " ";
        }
    cout << endl;
    }
};

int main(){
    Group group;
    group.addStudent("Emi", 7);
    group.addStudent("Alex", 4);
    group.addStudent("Emillow", 9);

    group.displayStudents();
}