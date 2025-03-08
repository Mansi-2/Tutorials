#include<iostream>
#include<string>

using namespace std;

class Student {
    private:
    int id;
    string name;

    public:
    Student (int id,string name){
       this-> id=id;
       this->name=name;
    }
    void display(){
        cout<<id<<" "<<name<<endl;
    }
};
int main(){
    Student s1(101,"Engineer");
    s1.display();

    return 0;
}