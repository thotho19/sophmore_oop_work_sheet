// Write an OOP to find the circumference of the rectangle.
// the program include a class called rectangle which contain tow private numbers length and width of type integer and a function
// compute() to compute the Circumference. 
// Hint:- Circumference of the rectange = (length + width )*2.

#include<iostream>
using namespace std; 
class rectangle{
    private:
    int length , width;
    public:
    rectangle(){
        cout<<"Enter the Length:"; cin>>length;
        cout<<"Enter the width:"; cin>>width;
    }
    void compute(){
        cout<<"Circumference of the rectange is:"<< (length + width)*2;
    }
};
int main(){
    rectangle r1;
    r1.compute();
    return 0;
}
