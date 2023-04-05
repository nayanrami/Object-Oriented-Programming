#include<iostream>
using namespace std;

int updateValue(int *oldValue){
    int updatevalue = (*oldValue)+10;
    int s = *oldValue*60;
    cout<<"Value of S : "<<s<<endl;
    return updatevalue;
}

int main()
{
    int k = 20;
    cout<<"Updated Value : "<<updateValue(&k)<<endl;
    cout<<"K : "<<k<<endl;
    return 0;
}