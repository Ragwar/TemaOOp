/*T.8.1. Refactor one of the above examples to compute the minimum module of two complex numbers,
using a class called ComplexNumber. To compare the two complex numbers, use the module for a
Laboratory. Template classes and functions complex number, as defined in mathematics. The problem is equivalent to return one of two
complex numbers, closest to plan origin.*/

#include <iostream>
#include <math.h>

using namespace std;

class Complex{
    private:
    double real;
    double imaginar;

    public:
    Complex(double real, double imaginar){
        this->real = real;
        this->imaginar = imaginar;
    }
    Complex();
    
    void print() {
        cout << this->real << " + i" << this->imaginar << '\n'; }

    double Abs(){
        double res = sqrt(this->real * this->real + this->imaginar * this->imaginar);
        return res;
    }

};

Complex compare(Complex a, Complex b){
    return a.Abs() > b.Abs() ? a : b;
}

int main(){
    Complex a(1,2);
    Complex b(3,4);

    compare(a, b).print();
}