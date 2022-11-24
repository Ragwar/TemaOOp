

#include <iostream>
using namespace std;
class Driver {
    string name;
    int licence;
public:
    
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }

    int getLicence() {
        return this->licence;
    }
    void setLicence(int licence) {
        this->licence = licence;
    }
};

class Car {
    int licence;
    Driver driver;
    int speed;
public:

    
    Car(string driverName,int carLicence,int speed) {
        this->driver.setName(driverName);
        this->licence = carLicence;
        this->speed = speed;
    }
    void setDriver(Driver driverName) {
        this->driver = driverName;
    }
    Driver getDriver() {

        return this->driver;
    }
    void setSpeed(int speed) {
        this->speed = speed;
    }
    int getCarLicence() {
        return this->licence;
    }
};

int main() {
    Car m("Ionel",101,60);
    m.getDriver().setLicence(123);
    cout << "car driver name: " << m.getDriver().getName() << endl;
    m.setSpeed(0);
    cout<< m.getDriver().getLicence()<<endl;
    cout<<m.getCarLicence();
   


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
