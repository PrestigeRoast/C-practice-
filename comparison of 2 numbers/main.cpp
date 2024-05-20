//code that  checks which of the number is greater
#include <iostream>

using namespace std;

int main()
{
    double first_no;
    double second_no;
    cout << "INPUT YOUR FIRST NUMBER"<< endl;
    cin >> first_no;
     cout << "INPUT YOUR second NUMBER"<< endl;
    cin >> second_no;
    if(first_no>second_no){
        cout << "FIRST NUMBER is greater than second number"<< endl;
    }else{
        cout << "second NUMBER is greater than first number"<< endl;
    }
    return 0;
}
