#include<iostream>
using namespace std;

void swap(int *value1, int *value2){
    int temp;
    temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}

int main()
{
    int args1 = 10;
    int args2 = 20;

    cout<<"Before Swap Value Args1 = "<<args1<<endl;
    cout<<"Before Swap Value Args2 = "<<args2<<endl;

    swap(&args1, &args2);

    cout<<"After Swap Value Args1 = "<<args1<<endl;
    cout<<"After Swap Value Args2 = "<<args2<<endl;

    return 0;
}