#include <iostream>
using namespace std;
class Employee{
    private:
    string name;
    int basicSalary;
    int noOfWorkingHrs_perDay;
    public:
    //Counstructor
    Employee(){
    }
    Employee(string name,int basicSalary,int noOfWorkingHrs_perDay){
        this->name=name;
        this->basicSalary=basicSalary;
        this->noOfWorkingHrs_perDay=noOfWorkingHrs_perDay;
    }
    Employee(string name){
        this->name=name;
    }
    //Distructur
    ~Employee(){
        cout<<"Object is deleted"<<endl;
    }
    //getInfo()
    void getInfo(string name,int basicSalary,int noOfWorkingHrs_perDay){
        this->basicSalary=basicSalary;
        this->noOfWorkingHrs_perDay=noOfWorkingHrs_perDay;
        this->name=name;
    }
    //AddSal
    void AddSal(){
        if(basicSalary<5000){
            basicSalary+=100;
            cout<<"100rs is added to your salary"<<endl;
        }
    }
    //AddHourTime()
    void AddHourTime(){
        if(noOfWorkingHrs_perDay>6){
            int a=noOfWorkingHrs_perDay-6;
            basicSalary+=a*50;
            cout<<a*50<<" is added to your salary as extra hours for "<<a<<" hours extra"<<endl;
        }
    }
    //DisplayEmployeeDetails
    void DisEmp(){
        cout<<"name = "<<name<<endl;
        cout<<"final Salary = "<<basicSalary<<endl;
        cout<<"Total Working Hours = "<<noOfWorkingHrs_perDay<<endl;
    }
};

int main(){
    string z;
        int b;
        int c;
    //Let no of employee be 10
    int n;
    cout<<"enter number of employees = ";
    cin>>n;
    Employee E[n]; 

    for(int i=0;i<n;i++){
    cout<<"------------Enter data of employee -----------------"<<endl;
        cout<<"enter name of "<<i+1<< " employee = ";
        cin>>z;
        cout<<"enter basic salary = ";
        cin>>b;
        cout<<"enter no of hours worked = ";
        cin>>c;
    E[i].getInfo(z,b,c);
    E[i].AddHourTime(); // addsup overtime payment 50rs per extra hour
    E[i].AddSal(); //adds 100rs to salary if salary is less than 5000rs
    cout<<"------------Final Data Of employee -----------------"<<endl;
    E[i].DisEmp();
    }
}