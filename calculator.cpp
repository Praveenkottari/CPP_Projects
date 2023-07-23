//Simple calculator 
#include<iostream>
using namespace std;

int main()
{
    int x,y;
    char op;

    cout<<"Enter the numbers: ";
    cin>>x>>op>>y;

    switch (op)
    {
    case '+':cout<<(x+y)<<endl;
            break;
    case '-':cout<<(x-y)<<endl;
            break;
    case '*':cout<<(x*y)<<endl;
            break;
    case '/':cout<<(x/y)<<endl;
            break;
    
    default:cout<<"\nEnter a valid input";

    }
}