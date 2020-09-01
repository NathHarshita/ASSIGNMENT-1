#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(x>=y && x>=z)
    {
        cout<<"Greatest no.: "<<x ;
    }
    if(y>=x && y>=z)
    {
        cout<<"Greatest no.: "<<y;
    }
    if(z>=x && z>=y){
        cout<<" Greatest no.: "<<z;
    }
    return 0;
}
