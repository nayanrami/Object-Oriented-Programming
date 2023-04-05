#include<iostream>

using namespace std;

enum week { Sunday, Monday, Thesday, Wednesday, Thursday, Friday = 20, Saturday};

int main(){
    week day;
    day = Sunday;
    cout<<day+1;
    return 0;
}