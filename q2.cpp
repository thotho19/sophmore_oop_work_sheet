// Write an OOP to check if a number is an integer (odd or even). 
// the program includes a class called check which contains one private number x of type integer a fucntion read() 
// to read the variable x and a function test() to find the type of x?
#include<iostream>
using namespace std;
class check{
    private:
    int x;
    public:
    void read(){
        cout<<"Enter X Number:"; cin>>x;
    }
    void test(){
        if(x %2 == 0)
            cout<<"X is even"<<endl;
        else
            cout<<"X is odd"<<endl;
    }
};
int main(){
    check c1;
    c1.read();
    c1.test();
    return 0;
}
