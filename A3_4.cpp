#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a<0){
        cout<<"The number is negative and skipped";
    }
    else{
        cout<<a;
    }
    return 0;
}