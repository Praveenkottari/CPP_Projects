//to caluclate sum of even number

#include <iostream>
using namespace std;

int main()
{
    int n;
    int x,sum=0;

    cout<<"Enter number of inputs: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter number "<<i+1<<": "<<endl;
        cin>>x;
        if(x%2==0)
        {
            sum= sum+x;
        }
    }
    cout<<"\nSum of the even numbers are: "<<sum<<endl;
    return 0;
}