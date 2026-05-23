
// Largest in an array

#include <iostream>
#include <vector>
using namespace std;

int smallestInArr(vector<int> Arr){
   int minValue = Arr[0];
   for(int i=1; i<Arr.size(); i++){
        if(Arr[i] < minValue){
            minValue = Arr[i];
        }
   }
   return minValue;
}

int largeInArr(vector<int> Arr){
   int maxValue = Arr[0];
   for(int i=1; i<Arr.size(); i++){
        if(Arr[i] > maxValue){
            maxValue = Arr[i];
        }
   }
   return maxValue;
}

int main(){
    
vector<int> arr = {30, 42, 99, 65, 12, 78, 45};

cout<<"Largest Value of array = "<<largeInArr(arr);
cout<<endl;
cout<<"Smallest Value of array = "<<smallestInArr(arr);
cout<<endl;
    return 0;
}