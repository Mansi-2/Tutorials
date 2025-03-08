#include<iostream>
#include<string>
#include<bits/stdc++.h>   //to use strlen and strcpy functions
using namespace std;

class Student
{
    private:
    int id;
    char *name;

    public:
    Student(int id,char *name){

        //using "this" keyword
        this->id=id;

        //this->name=name; --- it will be shallow copy

        this->name=new char[strlen(name)+1];   //Deep copy: it will copy the whole array
        strcpy(this->name,name);   
    }

    void display()
    {
        cout<< id<<" "<<name<<endl;
    }
};

int main(){
    char name[]="Engineer";
    Student s1(101,name);

    name[3]='e';
    Student s2(102,name);

    s1.display();
    s2.display();
    s1.display();  //the changes will only reflect in s2 not in s1

    return 0;
}