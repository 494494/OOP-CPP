#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    string roll_no;
    string degree;
    string Hostel;
    string CGPA;
    public:
    void addDetails(string name,string roll_no,string degree,string Hostel,
                    string CGPA){
        this->name=name;
        this->roll_no=roll_no;
        this->degree=degree;
        this->Hostel=Hostel;
        this->CGPA=CGPA;
    }
    void updateDetails(string name,string roll_no,string degree,string Hostel,
                    string CGPA){
        this->name=name;
        this->roll_no=roll_no;
        this->degree=degree;
        this->Hostel=Hostel;
        this->CGPA=CGPA;
    }
    void updateCGPA(string CGPA){
        this->CGPA=CGPA;
    }
    void updateResidenceInfo(string Hostel){
        this->Hostel=Hostel;
    }
    void displaydetails(){
        cout<<"Details of a student"<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Roll No  = "<< roll_no<<endl;
        cout<<"Degree = "<< degree<<endl;
        cout<<"Hostel = "<<Hostel <<endl;
        cout<<"CurrentCGPA = "<<CGPA <<endl;
        cout<<"----------------------------------------"<<endl;
    }
};
int main(){
    Student nasir;
    nasir.addDetails("nasir","43","btech","spm","9");
    nasir.displaydetails();
    nasir.updateDetails("nasir","1","chemistry","spm","10");
    cout<<"updatedInfo"<<endl;
    nasir.displaydetails();
    nasir.updateCGPA("4");
    nasir.updateResidenceInfo("campus");
    nasir.displaydetails();
}