#include<iostream>

using namespace std;

int sum(int i, int j){
    return i+j;
}

int main(){
    int a = 10;
    int b = 20;
    int c;
    c = sum(a,b);
    cout<<c;
}
