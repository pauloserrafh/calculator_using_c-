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
     int sum;
     string userResponse;
     char userinput;
     cout << "\t / = Divide, * = Multiply";
     cout << "\n\nEnter a calculation: ";
     cin >> a;
     cin >> userinput;
     cin >> b;


    switch(userinput){
        case '+' : sum = a + b;
        break;
        case '-' : sum = a - b;
        break;
        case '*' : sum = a * b;
        break;
        case '/' : sum = a / b;


    }

    cout << "\nThe total of those numbers are: " << sum << endl;
    if(sum > 20){
      cout << "\nHa, your number is greater than 20 \n";
      }
       if(sum < 20){
       cout << "\nCan't catch me out, your number is less than 20 \n";
       }
       if(sum == 20){
       cout << "\nYour number is equal to 20 \n";
       }

       cout << "\nDoes this calculator work correctly? (Yes/No) \n";
       cin >> userResponse;

       if(userResponse == "Yes"){
       cout << "Thanks for your honesty \n";
       }
       if(userResponse == "No"){
       cout << "I know it works so stop lying";
       }

}
