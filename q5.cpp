// write an oop to read two integer numbers, and read the operation to perform on these numbers.
// the program includes a class called operation which contains two private numbers a and b of type integer and a function find_oper() 
// to calculate the operation between a and b?

#include<iostream>
using namespace std;
class operation{
private:
    int a , b;
public:
    find_oper(){
        char op[0];
        cout<<"Enter A:"; cin>>a;
        cout<<"Enter B:"; cin>>b;
        cout<<"Enter the Operation between A and B?'+' or '-':"; cin>>op[0];
        (op[0] == '+') ? cout<<a+b : cout<<a-b; // <--- this code is = to if else (ternary)
    }
};
int main(){
    operation op1;
    op1.find_oper();
    return 0;
}
