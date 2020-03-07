// Write an oop that determines whether a specific year is a leap year or not . 
// the program includes a class called year which contains one private
// items y and a function leap() to check if y is a leap year or not ?
#include<iostream>
using namespace std; 
class year{
    private: 
    int y;
    public:
    year(){
        cout<<"Enter a year number:"; cin>>y;
    }
    void leap(){
        (y % 4 == 0) ? cout<<y<<":- is a leap year\n" : cout<<y<<":- not a leap year\n";
    }
};
int main(){
    year y1;
    y1.leap();
    return 0;
}
