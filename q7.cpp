// write an oop to find M^(a) . the program include a class called power which contains tow private numbers m and n of type integer 
//and a function compute_pow() to calculate the power of m and n?

#include<iostream>
using namespace std;
class power{
    private:
    int m,n;
    public:
    void compute_pow(){
        cout<<"Enter base Value(M):"; cin>>m;
        cout<<"Enter exponent value(N):"; cin>>n;
        int ans = 1;
        for(int i=0; i<n; i++)
            ans*=m;
        cout<<"The power is:"<<ans;
    }
};
int main(){
    power p1;
    p1.compute_pow();
    return 0;
}
