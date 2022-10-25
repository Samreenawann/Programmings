//Name:Samreen Fatima 
//BSDS -1
//Subject: Programming fundamentals
//Submitted to : Dr. Ayesha Hakim 
#include<iostream>
using namespace std;
          
int main()
{ 
int number1,number2,i;
char symbol;
 while (i<=1)
{
      cout<<"Enter the number";
    cin>>number1;
    cout<<"Enter another number";
    cin>>number2;
    cout<<"choose the symbol";
    cin>>symbol;
if(symbol=='+')
{cout<<number1+number2<<endl;}
else
if (symbol=='-')
  {cout<<number1-number2<<endl;}
else
if(symbol=='*')
{cout<<number1*number2<<endl;}
else
if(symbol=='/')
{cout<<number1/number2<<endl;}
else
if(symbol=='%')
{cout<<number1%number2<<endl;}
else
{cout<<"only these symbols are available  +,-,*,/,%"
<<endl;}
cout<<"press 0 to continue"<<endl;
cin>>i;
}
cout<<"The end";
}