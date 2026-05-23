
//  Reverse an array without using extra space

#include <iostream>
using namespace std;

int main(){

int arr[] ={5, 4, 3, 2, 1};
int n = sizeof(arr) /sizeof(int);

int st = 0, end = n-1;

while(st < end){
    swap(arr[st], arr[end]);
    st++;
    end--;
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}