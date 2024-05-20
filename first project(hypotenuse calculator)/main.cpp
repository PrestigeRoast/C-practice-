//code to calculate hypotenuse of a right angled triangle
#include <iostream>
#include <cmath>
using namespace std;
//my code
int main()
{
    double longest_side;
    double side_a;
    double side_b;
    cout<< "Input the value of the first side :"<<endl;
    cin>>side_a;
     cout<< "Input the value of the second side :"<<endl;
    cin>>side_b;
    longest_side = sqrt(pow(side_a,2)+ pow(side_b,2));
    cout << "The value of the hypotenuse is : " <<longest_side<< endl;
    return 0;
}

//solution code
/*int main(){
     double a;
    double b;
    double c;
    cout<< "Input the value of the first side :"<<endl;
    cin>>a;
     cout<< "Input the value of the second side :"<<endl;
    cin>>b;
    a  = pow(a, 2);
    b = pow(b, 2);
    c =  sqrt(a+b);
    c=sqrt(pow(a,2) + pow(b,2));
    cout<<"This is the value of the remaining side : "<<c<<endl;

    return 0;
}*/
