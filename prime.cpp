#include <iostream>
//Check no is prime or not prime
using namespace std;
int main()
{
    int n,m,i,flag=0;
    cout<<"\n enter a no";
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            cout<<n<<"  Is Not Prime ";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n<<"  Is Prime";
        return 0;
    }
}
