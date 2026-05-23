
// Binary Search

#include <iostream>
using namespace std;

bool Found = false;

void binarySearch(int arr[], int n){
   int key;
   cout<<"Enter key : ";
   cin>>key; 

   int si = 0, ei = n-1;
   int i=0;
   while(si <= ei){
    cout<<i++<<endl;
   int mid = si + (ei-si)/2;

      if(arr[mid] == key){
        cout<<"Key Found at index "<<mid;
        Found = true;
        break;
      } else if( arr[mid] < key){
        si = mid+1;
      }else {
        ei = mid-1;
   }

}
   if(!Found){
     cout<<"Key Not Found! "<<endl;
   }

}


int main(){
    int arr[7] = {12, 34, 56, 78, 90, 99, 120};
    int n = sizeof(arr)/sizeof(int);
    
    binarySearch(arr, n);

    return 0;
}