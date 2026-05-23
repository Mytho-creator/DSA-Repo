
// linear Search

#include <iostream>
#include <vector>
using namespace std;

bool Found = false;

void linearSearch(vector<int> arr, int n){
   int key;
   cout<<"Enter key :";
   cin>>key;

   for(int i=0; i<n; i++){
       cout<<i<<endl;
       if(arr[i] == key){
        cout<<"Key Found at index "<<i;
        Found = true;
        break;
       }
   }
   if(! Found){
     cout<<"Key Not Found! "<<endl;
   }
}

int main(){
    vector <int> arr = {4, 6, 7, 2, 3, 9, 2};
    int n = arr.size();

    linearSearch(arr, n);

    return 0;
}