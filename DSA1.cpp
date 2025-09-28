#include <iostream>                       // Binary search in rotated sorted array
#include <vector>
using namespace std;

int main(){

  vector <int> arr = {3,4,5,6,7,0,1,2};
  int st=0, end=7, mid, tar;
  bool found = false;

  cout << "Enter the target value : ";
  cin >> tar;

  while(st <= end){

    mid = st + (end-st)/2;

    if(arr[mid] == tar){
       found = true;
       break;
    }else if(arr[st] <= arr[mid]){

            if(arr[st] <= tar && tar < arr[mid]){
              end = mid-1;
            }else
              st = mid+1;

    }else{

      if(arr[mid] < tar && tar <= arr[end])
        st = mid+1;
      else
        end = mid-1;

    }

  }
 if(found){
    cout << "Target found at position = " << mid;
 }else{
    cout << "Target not found" ;
 }
return 0;

}