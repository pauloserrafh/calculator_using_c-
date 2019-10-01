#include"bits/stdc++.h"
using namespace std;

//simple operations like addition,multiplication,subtraction and division..
int main(){
    double a,b;char c;
    cout<<"\n enter two no's";
    cin>>a>>b;
    cout<<"\n what operation you want to perform:";
    cin>>c;
    if(c=='+') cout<<a+b<<endl;
    else if(c=='-') cout<<a-b<<endl;
    else if(c=='*') cout<<a*b<<endl;
    else if(c=='/') cout<<a/b<<endl;
    else cout<<"\n invalid operation";
    //if you want to find the logarithmic of a no.s a and b
    cout<<"\n log of a & b :";
    cout<<log(a)<<" "<<log(b);
  
}
