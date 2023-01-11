/*T.7.1. Design a class structure for two very different vehicles, each one using four wheels. Consider using
classes like Hummer, Carriage and Wheel (the wheels are specifically design for that vehicle and
cannot be interchanged). Use one of the above class types and argue your choice. For each of the
two cars, implement data structure and methods to remove and replace a wheel.
*/

#include <iostream>
#include <vector>
using namespace std;

class Wheel{
    int diameter;

    public:
    Wheel();
};
class CarriageWheel : public Wheel {

};
class HummerWheel : public Wheel{

};

class Vehicle{
    void changeWheel();
};
class Carriage : public Vehicle {
    vector<CarriageWheel> wheels;

    Carriage() {
        CarriageWheel a, b, c, d;
        wheels.push_back(a);
        wheels.push_back(b);
        wheels.push_back(c);
        wheels.push_back(d);
    }

    void changeWheel(CarriageWheel wheel, int position) {
        wheels[position] = wheel;
    }
    void removeWheel(int position) {
        wheels.erase(wheels.begin() + position);
    }
};
class Hummer : public Vehicle{
    vector<HummerWheel> wheels;

    Hummer(){
        HummerWheel a, b, c, d;
        wheels.push_back(a);
        wheels.push_back(b);
        wheels.push_back(c);
        wheels.push_back(d);
    }

    void changeWheel(HummerWheel wheel, int position){
        wheels[position] = wheel;
    }
    void removeWheel(int position){
        wheels.erase(wheels.begin() + position);
    }    
};

int main(){
    
}