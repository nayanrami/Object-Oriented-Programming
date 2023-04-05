#include<iostream>
using namespace std;
void test(int *k){
    *k = 20;
}
int main(){
    int s = 10;
    cout<<"Before Function Call : "<<s<<endl;
    test(&s);
    cout<<"After Function Call : "<<s<<endl;
    return 0;
}