#include <iostream>
using namespace std;

//simple operations like addition,multiplication,subtraction and division..
int main(){
    double a,b;char c;
    cout<<"\n enter two no's";
    cin>>a>>b;
    cout<<"\n what operation you want to perform:";
    cin>>c;
    switch (c) {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"\n invalid operation";
    }
}
