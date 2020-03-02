// Write an OOP to find the result of the following equation. 
// the program include a class called power which contains two private numbers x and i of type 
// integer and a function calculate() to compute the value of x . 
// x = Segmi i from 1 to 10 of(i)^2
#include<iostream>
using namespace std; 
class power{
    private: 
    int x,i;
    public:
    void compute(){
        i = 10; x =0;
        for(i;i>=1 ;--i)
            x = x + (i*i);
        cout<<x;
    }
};
int main(){
    power p1;
    p1.compute();
    return 0;
}
