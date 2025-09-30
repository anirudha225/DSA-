#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector <int> a = {1,1,2,3,3,4,4,8,8};
  int st=0, end = a.size()-1, mid;
  
  while(st <= end){

    mid = st + (end-st)/2;

    if(a[mid-1] != a[mid] && a[mid] != a[mid+1]){
        break;
    } else
          if((a.size()-1)%mid == 0){

            if(a[mid-1] == a[mid])
              end = mid - 1;
            else
              st = mid + 1;

          }else
                if(a[mid-1] == a[mid])
                  st = mid + 1;
            else
                  end = mid - 1;
  }

  cout << "The element is : " << a[mid];

return 0;
}