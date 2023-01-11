/*T.9.1. Refactor Example 9.12 to inject an instance (inject the dependency) of Shape in constructor of
class Drawing and call drawShape method without parameters.*/

#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0; 
};
class Circle : public Shape
{
public:
    void draw() { cout << "circle\n"; }
};
class Triangle : public Shape
{
public:
    void draw() { cout << "triangle\n"; }
};
class Drawing
{

    Shape *pShape;

public:
    Drawing(Shape *pShape){
        this->pShape = pShape;
    }

    void drawShape()

    {
        pShape->draw();
    }
};

int main()
{
    Drawing *d = new Drawing(new Triangle());
    d->drawShape();
    Drawing e(new Circle());
    e.drawShape();
    // Drawing f(new Circle());
    // Triangle t1;
    // Circle c1;
    // f.drawShape();
    // f.drawShape();
}