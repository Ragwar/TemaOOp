/*T.9.2. Refactor Example 9.10 to add names to Car and Rocket instances. When start vehicles, messages
with vehicle names should be displayed. Example: start red car, start awesome car, start NASA
rocket*/

#include <iostream>
#include <vector>
using namespace std;
class Vehicle
{
    string name;
public:
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    virtual void start() = 0;
};
class Rocket : public Vehicle
{
public:
    Rocket(string name){
        this->setName(name);
    }
    void start()
    {
        cout << "start " << this->getName() <<" speed(rocket) " << endl;
    }
};
class Car : public Vehicle
{
public:
    Car(string name){
        this->setName(name);
    }
    void start()
    {
        cout << "start " << this->getName() <<" speed(car) " << endl;
    }
};
int main()
{
    vector<Vehicle *> vehicule;
    vehicule.push_back(new Car("red"));
    vehicule.push_back(new Car("awesome"));
    vehicule.push_back(new Rocket("NASA"));

    for (auto element : vehicule)
    {
        element->start();
    }
}