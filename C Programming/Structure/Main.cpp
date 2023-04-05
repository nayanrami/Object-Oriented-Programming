#include<iostream>
using namespace std;

struct Student{
    int id;
    char name[50];
    char address[50];
};

int main()
{
    struct Student student1;
    cout<<"Enter Student Id: "<<endl;
    cin>>student1.id;

    cout<<"Enter Student Name: "<<endl;
    cin>>student1.name;

    cout<<"Enter Student Address: "<<endl;
    cin>>student1.address;

    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"Student Details"<<endl;
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;

    cout<<"Student Id : "<<student1.id<<endl;
    cout<<"Student Name : "<<student1.name<<endl;
    cout<<"Student Address : "<<student1.address<<endl;

    return 0;
}