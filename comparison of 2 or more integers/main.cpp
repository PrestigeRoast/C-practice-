#include <iostream>

using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int largest;
    cout << "Enter 5 numbers" << endl;
    cin>>n1>>n2>>n3>>n4>>n5;
    largest=n1;
    if(n2>largest){
        largest=n2;
    }
    if(n3>largest){
        largest=n3;
    }
    if(n4>largest){
        largest=n4;
    }
    if(n5>largest){
        largest=n5;
    }

    cout<< "the largest number is :"<<largest<< endl;
    return 0;
}
