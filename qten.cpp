// write an oop to convert meter to centimeter using the following formula. 
// the program includes a class called meter which contains two private items m and c, a function read()
// to read the value of m and a function convert() to calculate a value of c.

#include<iostream>
using namespace std;
class meter{
    private:
    int m,c;
    public:
    void read(){
        cout<<"Enter meter(m):"; cin>>m;
    }
    void convert(){
        c = m *100;
        cout<<"centimeter:"<<c;
    }
};
int main(){
    meter m1;
    m1.read();
    m1.convert();
    return 0;
}
