#include <iostream>
#include <string>

using namespace std;


class Student {       //define the class named Student
    public:           //specifier
    int id;           // can be accessed outside the class independently with or without using methods

    private:           //specifier
    string name;       //will not be accessible outside the class

void insert(int i,string n){     //method to insert details //using the method we can use ID (private specifier) outside the class also 
    id=i;
    name=n;
}
void display(){                //method to display the details
    cout<<"Student ID: "<<id<<endl;
    cout<<"Student name: "<<name<<endl;
}
};
int main()
{
    Student s1;                //creating object named s1

    int id;
    string name;

    cout<<"Enter student ID: ";              //taking input
    cin>>id;
   

    cout<<"Enter student name: ";
    cin>>name;

    s1.insert(id,name);                       //insert the input details in object s1

    cout<<"\nStudent Details: "<<endl;
    s1.display();                       //display the details entered

    return 0;
}