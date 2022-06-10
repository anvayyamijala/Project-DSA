/* Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

Example:
        Input:
                N = 6
                A[] = {3, 2, 1, 56, 10000, 167}
        Output:
                min = 1, max =  10000 */

#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}


pair<long long, long long> getMinMax(long long a[], int n) {
    pair <long long, long long> maxmin;
    maxmin.first = *min_element(a,a+n);
    maxmin.second = *max_element(a,a+n);
    return maxmin;
    
}
