#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector <int> arr = {40,30,10,20};
  vector <int> ans;
  int p1=0, p2, fans=INT_MAX;
  
  for(int i=0 ; i<arr.size()-1; i++){

    p1 += arr[i];
    p2 = 100-p1;
    ans.push_back(max(p1,p2));

  }

  for(int i=0 ; i<ans.size()-1 ; i++){
    fans = min(fans,ans[i]);
  }

  cout << fans;
return 0;

}