
// Count sort

#include <iostream>
#include<climits>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" "; 
    }
  cout<<endl;
}

void countSort(int arr[],int n){

  int minVal = INT_MAX, maxVal = INT_MIN;

  for(int i=0; i<n; i++){
      minVal = min(minVal, arr[i]);
      maxVal = max(maxVal, arr[i]);
  }
  int range = maxVal - minVal + 1;

  int freq[range] = {0};

   for(int i=0; i<n; i++){
       freq[arr[i]]++;
   }

   for(int i=minVal, j=0; i<=maxVal; i++){
       while(freq[i] > 0){
         arr[j++] = i;
         freq[i]--;
       }
   }
   printArr(arr,n);

}

int main(){
     
    int arr[] = {6, 7, 4, 3, 2, 6, 4, 7, 3, 1, 0, 2};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, n);

    return 0;
}