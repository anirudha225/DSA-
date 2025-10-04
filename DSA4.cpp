#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> arr = {40, 30, 10, 20};
int n = arr.size(), m = 2, st, end, mid;

// To find max
int maxOf(vector<int> &a) {
    int ans = INT_MIN;
    for (int i = 0; i < a.size(); i++) {
        ans = max(ans, a[i]);
    }
    return ans;
}

// To find sum of the array
int sum(vector<int> &s) {
    int sum1 = 0;
    for (int i = 0; i < s.size(); i++) {
        sum1 += s[i];
    }
    return sum1;
}

// To check whether the mid lies in possible solution or not
bool isPos(int maxTime) {
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxTime) {
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
    }
    return (painter <= m);
}

// Binary search
int main() {
    st = maxOf(arr);
    end = sum(arr);

    while (st <= end) {
        mid = st + (end - st) / 2;

        if (isPos(mid))
            end = mid - 1;
        else
            st = mid + 1;
    }

    cout << st;
    return 0;
}
