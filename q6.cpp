// write an oop to find the summation of the following series:sum=2+4+6+...+30.
// the program includes a class called series which contains one private number k of type integer,
// a function get() to read the value of k and a function sum() to calculate the summation

#include<iostream>
using namespace std;
class series{
    private:
    int k;
    public:
    void get(){
        k=30;
    }
    void sum(){
        int sum=0;
        for (k ; k>=2 ; k-=2)
            sum = sum + k;
        cout<<"The Summation of 30 series is:"<<sum<<endl;
    }
};
int main(){
    series s1;
    s1.get();
    s1.sum();
    return 0;
}
