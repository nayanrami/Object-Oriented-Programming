#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
        char name[10];
        int age;

    public:
        void setName(char name1[]){
            strcpy(name,name1);
        }
        void setAge(int age1){
            age = age1;
        }

        void display(){
            cout<<"Name: "<<name<<"\nAge: "<<age;
        } 
};

int main(){
    Student s1;
    char lname[10];
    int age;

    cout<<"Enter Name";
    cin>>lname;
    cout<<"Enter Age";
    cin>>age;
    
    s1.setName(lname);
    s1.setAge(age);
    s1.display();
    
    return 0;
}