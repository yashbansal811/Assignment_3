#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter an operator(+,-,*,/):";
    cin>>op;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    switch(op){
        case '+':
        cout<<"Sum="<<a+b;
        break;

        case '-':
        cout<<"Difference="<<a-b;
        break;

        case '*':
        cout<<"Product="<<a*b;
        break;

        case '/':
        cout<<"Division="<<a/b;
        break;

        default:
        cout<<"Error! The operator is not correct";
        break;
    }   
}