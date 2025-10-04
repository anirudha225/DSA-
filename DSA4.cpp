#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector <int> arr = {40,30,10,20};
int n=arr.size(), m=2, st, end, mid;


// To find max 
int maxOf (vector <int> &a){
  int ans = INT_MIN;
  for(int i=0 ; i<a.size() ; i++){
    ans = max(ans,a[i]);
  }
return ans;
}

// To find sum of the array
int sum (vector <int> &s){
  int sum1 = 0;
  for(int i=0 ; i<s.size() ; i++){
    sum1 += s[i];
  }
return sum1;
}

// To check whether the mid lies in possible solution or not

bool isPos (int maxTime){
  int painter = 1, time =0;
  for(int i=0 ; i<n ; i++){
    if(time + arr[i] <= maxTime){
      time += arr[i];
    }
    else{
      painter++;
      time = arr[i];
    }
  }
  return(painter <= m);
    
}

// Binary serach
int main(){

<<<<<<< HEAD
  st = maxOf(arr);
  end = sum(arr);
=======
  vector <int> arr = {40,30,10,20};
  vector <int> ans;
  int p1=0, p2, fans=INT_MAX;             // Given that there where 2 painters and 4 boards
  
  for(int i=0 ; i<arr.size()-1; i++){
>>>>>>> e5fccab5d2f0669e0a58c0c41975ee1411d73cae

  while(st <= end){
    mid = st + (end-st)/2;

    if(isPos(mid))
      end = mid - 1;
    else
      st = mid + 1; 

  }

<<<<<<< HEAD
  cout << st;
return 0;

}

=======
  for(int i=0 ; i<ans.size() ; i++){
    fans = min(fans,ans[i]);
  }

  cout << fans;
return 0;

}
>>>>>>> e5fccab5d2f0669e0a58c0c41975ee1411d73cae
