#include <iostream>
#include <array>
#include <string>
using namespace std;

void printArray (int arr[], int x, int y){

    if(x != y){
        cout<<arr[x]<<endl;
        printArray(arr, x + 1, y);
        }
}

int main (){
    int n;
    cout<<"enter the size of array: "<<endl;
    scanf("%d",&n);
    int A[n];
    cout<<"enter elements: "<<endl;
    for(int i=0;i<n;i++){
      cin>>A[i];
    }
    int a = 0;
    int b = n;
    cout<<"The elements are: "<<endl;
    printArray(A, a, b);
}
