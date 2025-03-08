#include <iostream>
#include <string>

using namespace std;

class Student{
    public: 
    int id;
    string name;

    void insert(int i,string n){
        id=i;
        name=n;
    }
    void display(){
        cout<<id<<" "<<name<<endl;
    }
};

int main(){
    int i;
    string n;

    Student s1;
    Student s2;

    cout<<"Enter student ID: ";
    cin>>i;

    cout<<"Enter name: ";
    cin>>n;

    s1.insert(i,n);

    cout<<"Enter student ID: ";
    cin>>i;

    cout<<"Enter name: ";
    cin>>n;
    s2.insert(i,n);

    s1.display();
    s2.display();

    return 0;

}