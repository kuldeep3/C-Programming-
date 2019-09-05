#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    cout<<"Input number is: "<<num<<endl;
    for (int i = 2; i < num; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
            }
        }    
        if (flag == true)
        {
            cout<<i<<endl;
        }
         
    }
    return 0;
    
}