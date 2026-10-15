#include <iostream> 
using namespace std ; 
int main ()
{
    int num1 , num2 ; 
    char op ; 
    cout<<"\n enter the first number ;"; 
    cin>>num1;   
    cout<<"\n enter the second number ;"; 
    cin>>num2; 
    cout<<"\n enter the operation ( + , - , / , * ) ;"; 
    cin>>op; 
    if (op=='+')
    cout<<"\n the result :" <<num1+num2; 
    else if (op=='-')
    cout<<"\n the result :" <<num1-num2;  
    else if (op=='*')
    cout<<"\n the result :" <<num1*num2; 
    else if (op=='/') 
    if (num2==0) cout<<"\n undefined number"; 
    else 
    cout<<"\n the result :" <<num1/num2; 
    else 
    cout<<" entered wrong input"; 
    return 0 ; 
    
}