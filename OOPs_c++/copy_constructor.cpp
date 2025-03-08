#include <iostream>
#include <string>
#include <getopt.h>

using namespace std;


class Student {       //define the class named Student
    public:           
    int id;           
    string name;       

    Student(int i,string n){      //Parametric construtor
        id= i;
        name= n;
        cout<<"First Constructor called"<<endl;
        cout<<id<<" "<<name<<endl;
    }

    Student(Student &t,Student &z){     //user-defined copy constructor
        id=t.id;
        name=z.name;

    }


};
int main()
{
    Student s1(101,"ABC");      
    Student s2(102,"PQR");
    Student s3(s1);

    cout<<s3.id<<" "<<s3.name;
    return 0;
}