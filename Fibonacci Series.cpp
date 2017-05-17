// Example program
#include <iostream>
#include <string>
using namespace std;

void fibonacci(int n)
{
    int f=0,s=1,t;
    cout<<"0 "<<"1 ";
    for(int i=2;i<=n;i++)
    {
        t=f+s;
        cout<<t<<" ";
        f=s;
        s=t;        
    }
}
    
int main()
{
 int n;
 cin>>n;
 fibonacci(n);
 return 0;
}
