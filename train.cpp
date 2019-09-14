#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin>>N;
        if (N%12==1)
        {
            cout<<N+11<<" "<<"WS"<<endl;
        }
        else if (N%12==0)
        {
            cout<<N-11<<" "<<"WS"<<endl;
        }
        else if (N%12==2)
        {
            cout<<N+9<<" "<<"MS"<<endl;
        }
        else if (N%12==11)
        {
            cout<<N-9<<" "<<"MS"<<endl;
        }
        else if (N%12==3)
        {
            cout<<N+7<<" "<<"AS"<<endl;
        }
        else if (N%12==10)
        {
            cout<<N-7<<" "<<"AS"<<endl;
        }
        else if (N%12==4)
        {
            cout<<N+5<<" "<<"AS"<<endl;
        }
        else if (N%12==9)
        {
            cout<<N-5<<" "<<"AS"<<endl;
        }
         else if (N%12==5)
        {
            cout<<N+3<<" "<<"MS"<<endl;
        }
        else if (N%12==8)
        {
            cout<<N-3<<" "<<"MS"<<endl;
        } else if (N%12==6)
        {
            cout<<N+1<<" "<<"WS"<<endl;
        }
        else if (N%12==7)
        {
            cout<<N-1<<" "<<"WS"<<endl;
        }
        
        
    }
    return 0;

}