
#include <iostream>
using namespace std;
class Shape
{
protected:
    float length;
    float width;
public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};
class Rectangle : public Shape
{
public:
    void displayArea()
    {
        float area = length * width;
        cout << "Area of Rectangle = " << area << endl;
    }
};
int main()
{
    Rectangle rect;
    rect.getData();
    rect.displayArea();
    return 0;
}
