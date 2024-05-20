//program of a simple calculator
#include <iostream>

using namespace std;

int main()
{
    char op;//stores the value for our operators
    double num1,num2,result;
    cout<<"**********************CalCulator by Oyetola**************************"<<endl;
    cout<<"Input your first value"<<endl;
    cin>>num1;
    cout<<"Input your second value"<<endl;
    cin>>num2;

    cout<<"what operation would you like to perform (+,/,*,-)"<<endl;
    cin>>op;
    switch(op){
    case '+':
        result=num1 + num2;
        cout<<"Your result using the addition operator is "<<result<<endl;
    break;
    case '-':
        result=num1 - num2;
        cout<<"Your result using the subtraction operator is "<<result<<endl;
    break;
    case '*':
        result=num1 * num2;
        cout<<"Your result using the multiplication operator is "<<result<<endl;
    break;
    case '/':
        result=num1 /(double)num2;
        cout<<"Your result using the division operator is "<<result<<endl;
    break;
    default:
        cout<<"That wasn't a good operator"<<endl;
    }


    cout<<"**********************Calculator by oyetola**************************"<<endl;
    return 0;
}
