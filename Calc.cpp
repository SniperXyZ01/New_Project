#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<endl;
    int y;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<endl;
    char n;
    cout<<"Enter the operation to perform: ";
    cin>>n;

    switch(n){
        case '+': cout<<"Sum of x and y is: "<<x+y<<endl;
        break;
        case '-': cout<<"Difference between x and y is: "<<x-y<<endl;
        break;
        case '*': cout<<"Product of x & y is: "<<x*y<<endl;
        break;
        case '/': cout<<"Division of x & y is: "<<x/y<<endl;
        break;
        case '%': cout<<"Remainder of x & y is: "<<x%y<<endl;
        break;
        default: cout<<"Invalid input"<<endl;
    }
    return 0;
}
