#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter length and breadth:";
    cin>>l>>b;
    if(l==b){
        cout<<"It is a square";
    }
    else{
        cout<<"It is a rectangle";
    }
    return 0;
}