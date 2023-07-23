//Factorial calculation
#include <iostream>
using namespace std;
int facto(int n);
int main()

{
    int a,x;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    x = facto(a);
    cout<<"\nFactorial of number "<<a<<" is: "<< x <<endl;
}
int facto(int n)
{
    int i;
    int ans=1;
    for(i=1;i<=n;i++)
    {
        ans = ans*i;
    }
    return ans;

}