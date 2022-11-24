// 4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<list>
using namespace std;
class Student {
private:
    int Grade;
    string name;
public:
    Student(int Grade, string name) {
        this->Grade = Grade;
        this->name = name;
    }
    void setGrade(int n) {
        this->Grade = n;
    }
    int getGrade() {
        return this->Grade;
    }
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
};
class StudentList {
private:
    list<Student*> studentList;
public:
    void addStudent(Student* friendToAdd) {
        this->studentList.push_back(friendToAdd);
    }
    list<Student*> getstudentList() {
        return this->studentList;
    }
    void displayGroup() {
        for (Student* Student : this->studentList) {
            cout << Student->getName() << " " << Student->getGrade() << endl;
        }
    }
    void findGreatest(){
        int Max = 0;
        string nume;
        for (Student* Student : this->studentList) {
            if (Student->getGrade() > Max) {
                nume = Student->getName();
                Max = Student->getGrade();
            }
        }
        cout << nume;
    }
    
    
};
int main()
{
    StudentList* friendsGroup;
    friendsGroup = new StudentList();
    friendsGroup->addStudent(new Student(69, "Emi"));
    friendsGroup->addStudent(new Student(21, "Dante"));
    friendsGroup->addStudent(new Student(19, "Oni"));
    friendsGroup->displayGroup();
    friendsGroup->findGreatest();
   
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manGrade files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messGrades
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
