#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter an integer between 1 & 99999: ";
    cin>>num;
    if (num < 100 && num >=1)
    {
        cout<<"It's a two digit number";
    }
    else if (num < 1000 && num >=100)
    {
        cout<<"It's a three digit number";
    }
    else if (num < 10000 && num >= 1000)
    {
        cout<<"It's a four digit number";
    }
    else if (num < 100000 && num >=10000)
    {
        cout<<"It's a five digit number";
    }
    else
    {
        cout<<"Number is not between 1 & 99999";
    }
    return 0;
}