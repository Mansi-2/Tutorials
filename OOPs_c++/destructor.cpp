#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;

    //constructor

    Student(){
        cout<<"Constructor called"<<endl;
    }

    //destructor

    ~Student(){
        cout<<"Destructor called"<<endl;
    }

    void set(int id, string name){
        this->id=id;
        this->name=name;
    }

    void display(){
        cout<<id<<" "<<name<<endl;
    }
};

int main(){

    Student s1;
    s1.set(101,"engineer");

    Student s2;
    s2.set(102,"politician");

    s1.display();
    s2.display();

    return 0;
}