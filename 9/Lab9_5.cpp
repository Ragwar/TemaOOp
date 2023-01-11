/*T.9.5. Considering Example 9.14, add a class Dog extending the class Animal and restart the chase, by
adding Dog(s) to the animalsChasingList!*/

#include <iostream>
#include <vector>
using namespace std;
class Animal
{
public:
    virtual string getName() = 0;
    virtual void chase(Animal *animal) = 0;
};
class Mouse : public Animal
{
private:
    string name;

public:
    Mouse(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name + " as " + typeid(this).name();
    }
    void chase(Animal *animal)
    {
        cout << "My name is, " + this->getName() + " I chase " + animal->getName() << endl;
    }
};
class Cat : public Animal
{
private:
    string name;

public:
    Cat(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name + " as " + typeid(this).name();
    }
    void chase(Animal *animal)
    {
        cout << "My name is, " + this->getName() + " I chase " + animal->getName() << endl;
    }
};

class Dog : public Animal
{
private:
    string name;

public:
    Dog(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name + " as " + typeid(this).name();
    }
    void chase(Animal *animal)
    {
        cout << "My name is, " + this->getName() + " I chase " + animal->getName() << endl;
    }
};
int main()
{
    vector<Animal *> animalsChasingList;
    animalsChasingList.push_back(new Cat("Piper"));
    animalsChasingList.push_back(new Cat("Ernest"));
    animalsChasingList.push_back(new Mouse("Jerry"));
    animalsChasingList.push_back(new Dog("Ralf"));
    animalsChasingList.push_back(new Cat("Celest"));
    for (int animalIndex = 0; animalIndex < animalsChasingList.size() - 1; animalIndex++)
    {
        animalsChasingList.at(animalIndex)->chase(animalsChasingList.at(animalIndex + 1));
    }
 
    cout << endl
    Mouse *hunter = new Mouse("Emi");
    for (int animalIndex = 0; animalIndex < animalsChasingList.size(); animalIndex++)
    {
        hunter->chase(animalsChasingList.at(animalIndex));
    }
    return (0);
}