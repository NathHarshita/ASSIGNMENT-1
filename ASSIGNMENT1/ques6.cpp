#include <iostream>
using namespace std;
int main()
{
  int n, i, h=0, flag=0;
  cin >> n;
  h=n/2;
  for(i = 2; i <= h; i++)
  {
      if(n % i == 0)
      {
          cout<<"It is not a Prime number";
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout <<"It is a Prime number";
  return 0;
}
