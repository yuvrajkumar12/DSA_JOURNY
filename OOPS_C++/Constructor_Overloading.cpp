#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string id, name;
    int year;
    Employee(){
        id=" ";
        name="";
        year=0;
    }
    //overloding constructor
    Employee(string id, string name, int yrar){
        this->id=id;
        this->name=name;
        this->year=year;

    }
    //Overloading constructor
    Employee(string id,string name){
        this->id;
        this->name;
        year=0;
    }
    void getDisplay(){
        cout<<"ID "<<id<<" ,Name "<<name<<", Experince: "<<year<<endl;
    }

};
int main(){
    Employee emp1;
    Employee emp2("GRT12","Yuvraj",4);
    Employee emp3("g12","Pankag");
    Employee emp4("G@$","Sonu");

    emp2.getDisplay();
    emp3.getDisplay();
    emp4.getDisplay();
    return 0;
}