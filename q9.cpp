// Write an oop to multiply two numbers. the prgram includes a class called number which contains two private items x and y of type integer
// , a function read() to read the class items and a function mult() 
// to calculate the multiplication between x and y?

#include<iostream>
using namespace std;
class number{
    private:
    int x,y; 
    public:
    void read(){
        cout<<"Enter x:"; cin>>x;
        cout<<"Enter y:"; cin>>y;
    }
    void mult(){
        cout<<"x*y="<<x*y;
    }
};
int main(){
    number n1;
    n1.read();
    n1.mult();
    return 0;
}
