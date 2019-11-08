#include <iostream>
using namespace std;
int main() {
    float num1 ;
    cin>>num1;
    float num2 ;
    cin>>num2;
    cout<<"num1 + num2:"<<(num1 + num2)<<endl;
    cout<<"num1 - num2:"<<(num1 - num2)<<endl;
    cout<<"num1 * num2:"<<(num1 * num2)<<endl;
    if (num2==0)
        cout<<"error"<<endl;
    else
    cout<<"num1 / num2:"<<(num1 / num2)<<endl;
    cout<<"num1 % num2:"<<(num1 % num2)<<endl;
    return 0;
}
