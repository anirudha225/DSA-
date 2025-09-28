#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector <int> a = {0,3,8,9,5,2};
  int st=1, end=a.size()-2, mid;

  while(st <= end){

    mid = st + (end-st) / 2;

    if(a[mid-1] < a[mid] && a[mid] > a[mid+1]){
      break;
    }else if(a[mid-1] < a[mid]){
            st = mid + 1;
    }else if(a[mid+1] < a[mid]){
            end = mid - 1;
    }
  }

cout << "Peak element found at index : " << mid;
return 0;

}
