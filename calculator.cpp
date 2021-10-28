#include <iostream>
using namespace std;

int main(){
    char choice;
    float num1, num2;
    cout<<"enter choice of calculation required'+ - * /' :";
    cin>>choice;
    cout<<"\nEnter two numbers:";
    cin>> num1>> num2;

    switch(choice){
        case '+':
         cout<<num1<<"+"<<num2<<"="<<num1+num2;
         break;
        case '-':
         cout<<num1<<"-"<<num2<<"="<< num1-num2;
         break;
        case '*':
         cout<<num1<<"*"<< num2<<"="<< num1*num2;
         break;
        case '/':
         cout<<num1<<"/"<<num2<<"="<< num1/num2;
         break;
        default:
            cout<<"PLEASE INSERT A VALID INPUT";

    }
     return 0;
}
