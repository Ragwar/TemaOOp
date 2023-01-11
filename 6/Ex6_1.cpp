/*Design and implement a class for complex numbers. Overload operators ~ for absolute value
(module), ^ for power (the recommended value for power is 2. Higher than 2, is optional) and + for
sum. Use the operators in an example.*/

#include <iostream>
#include <math.h>
using namespace std;

class Complex{
    private:
    double r;
    double i;

    public:
    Complex(double r, double i){
        this->r=r;
        this->i=i;
    }
    Complex();
    
    void print() {
        cout <<this->r<<"+i"<< this->i<<'\n'; }

    double operator ~(){
        double res=sqrt(this->r*this->r+this->i*this->i);
        return res;
    }

    Complex operator ^(const int n){
        Complex *temp = new Complex(0,0);
        temp->r=this->r*this->r-this->i*this->i;
        temp->i=2*(this->r*this->i);

        return *temp;
    }

    Complex operator +(Complex const &c){

        Complex *res = new Complex(0,0);
        res->r=r+c.r;
        res->i=i+c.i;

        return *res;
    }

    bool operator <(Complex const &c){
        return sqrt(this->r*this->r+this->i*this->i)<sqrt(c.r*c.r+c.i*c.i);
    }
};

int main(){
    Complex nr1(3,4);
    Complex nr2(5,6);

    bool a =nr1<nr2;

    cout <<a<< endl;

    cout <<~(nr1)<<" "<<~(nr2)<<"\n";

    nr1 = nr1^2;
    nr1.print();

    Complex nr3(0,0);

    nr3 = nr1+nr2; 

    nr3.print();

}