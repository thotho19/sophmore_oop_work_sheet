//Define a student infomration for university acceptance. write an oo programs to read this information and check if the student
//"accepted" or "not accepted" based on age. give your opinions to solve the programs based on Operator overloading, inheritance, and 
// virtual function
#include<iostream>
using namespace std;
class studentBase{
    private:
    string studentName;
    string acceptnaceState;
    int age;
    public:
    studentBase(){
        cout<<"Enter Student Name:"; cin>>studentName;
        cout<<"Enter Student Age:"; cin>>age;
    }
    studentBase(string state)
    {
        acceptnaceState = state;
    }
    void get_data(){
        cout<<"S-Name:"<<studentName<<" -State:"<<acceptnaceState;
    }
    studentBase operator ++(){
        return (age < 18) ? studentBase(acceptnaceState="Not accepted") : studentBase(acceptnaceState="accepted");
    }
};
int main(){
    studentBase s1;
    ++s1;
    s1.get_data();

    return 0;
}
