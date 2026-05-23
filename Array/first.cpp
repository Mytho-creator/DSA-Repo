
//  Reverse an array

#include <iostream>
using namespace std;

int main(){

int arr[] ={5, 4, 3, 2, 1};
int n = sizeof(arr) /sizeof(int);

    int currArr[n];
    for(int i=0; i<n; i++){
        int j = n-i-1;
        currArr[i] = arr[j];
    }

    for(int i=0; i<n; i++){
        arr[i] = currArr[i];
    }
    
    for(int i=0; i<5; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}