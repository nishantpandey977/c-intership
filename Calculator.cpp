#include<iostream>
using namespace std;

int main()
{
    int a,b;
    string  op;
   cout<<"Enter first number:";
   cin>>a;
   cout<<"Enter second number:";
   cin>>b;
     cout<<"Enter opreation:";
  getline(cin,op);
    if(op == "+"){
    cout<<a+b;
    }
   else if(op=="-"){
    cout<<a-b;
   }
   else if(op=="*"){
    cout<<a*b;
   }
   else if(op=="/"){
    cout<<a/b;
   }
   else{
    cout<<"invalid input!!";
   }

}
