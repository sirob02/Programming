#include<iostream>

using namespace std;

class Human{
    private:
        int salary;
    public:
        string name;
        
        Human(string name){
            this->name = name;
            salary = 0;
        }

        void setSalary(int salary){
            this->salary = salary;
        }

        int getSalary(){
            return salary;
        }


};

int main(){

    Human Peter("Peter");

    cout << "Salary is: " << Peter.getSalary() << "\n";
    Peter.setSalary(100);

    cout << "Salary is: " << Peter.getSalary() << "\n";


    return 0;
}