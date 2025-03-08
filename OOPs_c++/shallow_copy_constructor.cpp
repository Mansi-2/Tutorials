#include<iostream>
using namespace std;

class Student{
    int id;
    char *name;  //dynamically created array 

    public:

    Student(int i,char *n){
        id=i;
        name=n;
    }

    void display(){
        cout<<id<<" "<<name<<endl;
    }
};

int main(){
    char name[]="ABCD";
    Student s1(101,name);
    s1.display();

    name[2] = 'z';
    Student s2(102,name);
    s2.display();

    s1.display();  //this time the name remains the same as that for s2 ,i.e, ABzD 
                  //Hence the array that we created will remain the same

    return 0;
}