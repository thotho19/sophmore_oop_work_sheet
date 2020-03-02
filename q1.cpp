// Write an OOP to convert a given temperature radian in a degrees Fahrenheit to the degree Celsius using the bello formula.
// the program includes a class called Celsius which contains one private number F of type float and a function convert(). 
// Hint c=5/9(f-32)

#include <iostream>

using namespace std;
class Celsius{
private:
    float f;
public:
    Celsius(){
    cout<<"Enter The F Degree:"; cin>>f;
    }

    void convert(){
        f = (float(5)/float(9))*(f-32);
        cout<<"F to C is ="<<f;
    }
};
int main()
{
    Celsius c1;
    c1.convert();
    return 0;
}
