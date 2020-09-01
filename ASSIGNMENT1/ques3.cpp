#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t,A[50];
    cin>>n;
    cout<<"Enter elements ";

    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }

for(i=1;i<=n-1;i++)
{
    t=A[i];
    j=i-1;

        while((t<A[j])&&(j>=0))
        {
            A[j+1]=A[j];
            j=j-1;
        }

        A[j+1]=t;
    }

cout<<"After insertion sort: ";
for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}

