#include <iostream>
#include <string>

using namespace std;


class Student {       //define the class named Student
    public:           
    int id;           
    string name;       

    Student(int i,string n){
        id= i;
        name= n;
        cout<<"First Constructor called"<<endl;
        cout<<id<<" "<<name<<endl;
    }

    Student(){
        cout<<"Second Constructor called"<<endl;
    }


};
int main()
{
    Student s1(101,"ABC");      //first constructor will be called beacuse we have passed the parameters

    Student s2(102,"PQR");       //first constructor will be called beacuse we have passed the parameters

    Student *s3 = new Student(103,"MNO");      //first constructor will be called beacuse we have passed the parameters

    Student s4;     //second onstructor will be passed beacuse we have not passed any arguments here

    return 0;
}
