#include<iostream>
using namespace std;
int main()
{
    int cp,sp,p,l;
    cout<<"Enter Cost price and Selling price";
    cin>>cp>>sp;
    if(sp>cp){
        cout<<"Profit="<<sp-cp;
    }
    else{
        cout<<"Loss="<<cp-sp;
    }
    return 0;
}