#include <iostream>
using namespace std;
//This is a global variable

char myVar = 'A';
char myFunc() {
    //This is a local variable
    char myVar = 'B';
    return myVar;
}
int main() {
    cout<<"Func call: "<< myFunc()<<endl;
    cout<<"Value of myVar: "<< myVar<<endl;
    myVar='Z';
    cout<<"Func call: "<< myFunc()<<endl;
    cout<<"Value of myVar: "<< myVar<<endl;
    return 0; 
}