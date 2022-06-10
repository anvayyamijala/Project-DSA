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
