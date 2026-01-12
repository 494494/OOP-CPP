#include <iostream>
using namespace std;
struct Student{
    private:
    string Name;
    int Roll_no;
    string Degree;
    string Hostel;
    float CGPA;
    public:
    void addDetails(string name, int Roll_no, string Degree,string Hostel ,float CGPA){
        this-> Name =name;
        this->Roll_no=Roll_no;
        this->Degree=Degree;
        this->Hostel=Hostel;
        this->CGPA=CGPA;
    }
    void updateDetails(string name, int Roll_no, string Degree){
        this->Name=name;
        this->Roll_no=Roll_no;
        this->Degree=Degree;
    }
    void updateCGPA(float CGPA){
        this->CGPA=CGPA;
    }
    void updateResidence(string Hostel){
        this->Hostel=Hostel;
    }
    void displayDetails(){
        cout<<"Name = "<< Name<<"\n";
        cout<<"Roll NO. = "<< Roll_no<<"\n";
        cout<<"Degree = "<< Degree<<"\n";
        cout<<"Hostel = "<< Hostel<<"\n";
        cout<<"CGPA = "<< CGPA<<"\n";
        cout<<"____________________\n";
    }
};
int main(){
    Student s;
    s.addDetails("nasie",34,"btech","SPM",9.05);
    s.displayDetails();

    s.updateDetails("nasir2.0",43,"cse");
    s.displayDetails();

    s.updateCGPA(10);
    s.displayDetails();

    s.updateResidence("new hostel");
    s.displayDetails();

}