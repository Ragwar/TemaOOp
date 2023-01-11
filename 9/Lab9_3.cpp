/*T.9.3. Considering Example 9.12, design an application to compute circle, rectangle and square area
using virtual and pure virtual methods.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0; 
    virtual double getArea() = 0;
};
class Circle : public Shape
{
    int radius;
public:
    Circle(int radius){
        this->radius = radius;
    }
    void draw() { cout << "circle\n"; } 

    double getArea(){
        return this->radius * this->radius * 3.14;
    }
};
class Triangle : public Shape
{
    int base, height;
public:
    Triangle(int base, int height){
        this->base = base;
        this->height = height;
    }
    void draw() { cout << "triangle\n"; }

    double getArea(){
        return this->base * this->height / 2;
    }
};

class Rectangle : public Shape
{
    int length, width;
public:
    Rectangle(int length, int width){
        this->length = length;
        this->width = width;
    }
    void draw() { cout << "rectangle\n"; } 

    double getArea(){
        return this->length * this->width;
    }
};

class Drawing
{

public:
    void drawShape(Shape *pShape) 
    {
        pShape->draw();
    }
    /* Doesn't work.
    {
    pShape->draw();
    }
    */
};
int main()
{
    Rectangle rect(2, 3);
    Triangle tri(5, 13);
    Circle circ(34);

    cout << "Area of rectangle: " << rect.getArea() << endl;
    cout << "Area of triangle: " << tri.getArea() << endl;
    cout << "Area of circle: " << circ.getArea() << endl;

}