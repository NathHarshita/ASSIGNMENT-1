#include<iostream>
#include<string.h>
using namespace std;
string testPalindrome(string x){
 string b;

  for(int n = x.length()-1; n >= 0; n--){
    b.push_back(x[n]);
  }
  if(x==b){
return "true";}
else{
    return "false";
}
}
int main(){
 string a ;
    cout<<"enter the string: "<<endl;
    cin>>a;
    cout<<testPalindrome(a)<<endl;
    return 0;}
