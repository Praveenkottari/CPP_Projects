#include <iostream>
using namespace std;

int main()
{
    int p=50;
    int *x;

    x = &p;

    cout<<"The adress of value of p is: "<<p;
    cout<<"\nThe adress of value of p is: "<<&p;
    cout<<"\nThe adress of value of x is: "<<x;
    cout<<"\nThe adress of value of *x is: "<<*x;

    *x =*x+1;
    cout<<"The adress of value of p is: "<<p;

    return 0;




}
