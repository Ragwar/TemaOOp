// 4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<list>
using namespace std;
class Person {
private:
    int age;
    string name;
public:
    Person(int age, string name) {
        this->age = age;
        this->name = name;
    }
    void setAge(int n) {
        this->age = n;
    }
    int getAge() {
        return this->age;
    }
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
};
class GroupOfFriends {
private:
    list<Person*> friendsList;
public:
    void addFriend(Person* friendToAdd) {
        this->friendsList.push_back(friendToAdd);
    }
    list<Person*> getFriendsList() {
        return this->friendsList;
    }
    void displayGroup() {
        for (Person * person : this->friendsList) {
            cout << person->getName() <<" " << person->getAge() << endl;
        }
    }
    void updatePerson(string nume) {
        int nr;
        cin >> nr;
        for (Person* person : this->friendsList) {
            if (person->getName() == nume)
                person->setAge(nr);
        }
    }
    void removePerson(string nume) {

        for (Person* person : this->friendsList) {
            if (person->getName() == nume)
                friendsList.remove(person);
        }
    }
};
int main()
{
    GroupOfFriends* friendsGroup;
    friendsGroup = new GroupOfFriends();
    friendsGroup->addFriend(new Person(69,"Emi"));
    friendsGroup->addFriend(new Person(21,"Dante"));
    friendsGroup->addFriend(new Person(19,"Oni"));
    friendsGroup->displayGroup();
    string nume;
    cin >> nume;
    friendsGroup->updatePerson(nume);
    friendsGroup->displayGroup();
    cin >> nume;
    friendsGroup->removePerson(nume);
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
