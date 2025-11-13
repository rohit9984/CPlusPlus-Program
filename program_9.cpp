#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a generic shape." << endl;
    }
};
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle." << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Rectangle." << endl;
    }
};
int main()
{
    Shape *shapePtr;
    Circle c;
    Rectangle r;
    shapePtr = &c;
    shapePtr->draw();
    shapePtr = &r;
    shapePtr->draw();
    return 0;
}
