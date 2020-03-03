// Write an oop to represent employee that read the employee salary and print the following :
// "A" if the salary between 800-1000
// "B" if the salary between 600-799
// "C" if the salary between 400-599
// "D" if the salary between 200-399
// the program includes a class called employee which contains three private numbers name of type string. age of type integer. a salary
// of type float . a function get_dat() to read class elements and a print_dat() to print the above information based on salary

#include<iostream>
using namespace std;
class employee{
    private:
    string name; int age; float salary;
    public:
    void get_dat(){
        cout<<"Enter Employee name:"; cin>>name;
        cout<<"Enter Employee age:"; cin>>age;
        cout<<"Enter Salary:"; cin>>salary;
    }
    void print_data(){
        if (salary >= 800 && salary <= 1000)
            cout<<"A";
        else if(salary >= 600 && salary <= 799)
            cout<<"B";
        else if(salary >= 400 && salary <= 599)
            cout<<"C";
        else if(salary >= 200 && salary <= 399)
            cout<<"D";
    }
};
int main(){
    employee e1;
    e1.get_dat();
    e1.print_data();
}
