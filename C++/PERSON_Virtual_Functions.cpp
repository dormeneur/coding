
#include <iostream>
using namespace std;

class Person{
    string name;
    int ID;
    public:
        virtual void getData(){
            cin >> name >> ID;
        }
        virtual void putData(){
            cout << "Name: " << name << endl;
            cout << "ID: " << ID << endl;
        }
        virtual void calcTax(){
            cout << "All earning individuals must pay tax regularly" << endl;
        }
};

class GovtEmp : public Person{
    int annualsalary;
    public:
        void getData(){
            Person :: getData();
            cin >> annualsalary;
        }
        void putData(){
            Person :: putData();
            cout << "Annual Salary: " << annualsalary << endl;
        }
        void calcTax(){
            Person :: calcTax();
            int tax = (annualsalary - 500000) * 0.10;
            cout << "Income tax to be paid: " << tax << endl;
        }
};

class PrivateEmp : public Person{
    int wages, days;
    public:
        void getData(){
            Person :: getData();
            cin >> wages >> days;
        }
        void putData(){
            Person :: putData();
            cout << "Wages: " << wages << endl;
            cout << "Days worked: " << days << endl;
            cout << "Salary: " << wages * days << endl;
        }
        void calcTax(){
            Person :: calcTax();
            int salary = wages * days;
            int tax = (salary - 300000) * 0.20;
            cout << "Income tax to be paid: " << tax << endl;
        }
};

int main(){
    Person *ptr;

    ptr = new GovtEmp();

    ptr -> getData();
    ptr -> putData();
    ptr -> calcTax();

    ptr = new PrivateEmp();
    
    ptr -> getData();
    ptr -> putData();
    ptr -> calcTax();
}
