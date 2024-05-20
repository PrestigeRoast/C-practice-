#include <iostream>

using namespace std;

int main()
{
    char quiz;
    cout << "Welcome to your exam" << endl;
    cout<<"choose the right option"<<endl;
    cout<<"which is the best game: A)FREE-FIRE B)CODM C)FARLIGHT D)BLOODSTRIKE"<<endl;
    cin>>quiz;
    switch(quiz){
    case 'A':
        cout<<"You are correct"<<endl;
    break;
    case 'B':
        cout<<"You are wrong"<<endl;
    break;
    case 'C':
        cout<<"You are too wrong"<<endl;
    break;
    case 'D':
        cout<<"You are SO too wrong"<<endl;
    break;
    default:
        cout<<"you noo get sense"<<endl;
    }
    return 0;
}
