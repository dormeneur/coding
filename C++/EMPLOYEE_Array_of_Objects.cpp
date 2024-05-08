
#include <iostream>
using namespace std;

class Employee {
    int eno;
    string ename;
    string designation;
    double salary;

    public:
        Employee(){
            eno = 0;
            ename = "";
            designation = "";
            salary = 0;
        }
        Employee(int e, string en, string d, double s){
            eno = e;
            ename = en;
            designation = d;
            salary = s;
        }
        void readEmployee() {
            cout << "Enter Employee Number: ";
            cin >> eno;
            cout << "Enter Employee Name: ";
            cin >> ename;
            cout << "Enter Designation: ";
            cin >> designation;
            cout << "Enter Salary: ";
            cin >> salary;
        }

        void displayEmployee() {
            cout << "Employee Number: " << eno << endl;
            cout << "Employee Name: " << ename << endl;
            cout << "Designation: " << designation << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager : public Employee{
    int totalemp, totalsupervisors;
    public:
        Manager(){
            totalemp = 0;
            totalsupervisors = 0;
        }
        Manager(int t, int s){
            totalemp = t;
            totalsupervisors = s;
        }
        void readManager() {
            Employee :: readEmployee(); 
            cout << "Enter Total Employees Supervised: ";
            cin >> totalemp;
            cout << "Enter Total Supervisors: ";
            cin >> totalsupervisors;
        }
        void displayManager() {
            Employee :: displayEmployee();
            cout << "Total Employees Supervised: " << totalemp << endl;
            cout << "Total Supervisors: " << totalsupervisors << endl;
        }
};

int main(){
    int n;
    cout << "How many managers? " ;
    cin >> n;
    Manager m[n];
    for(int i = 0; i < n; i++){
        m[i].readManager();
    }
    for(int i = 0; i < n; i++){
        m[i].displayManager();
    }
}
