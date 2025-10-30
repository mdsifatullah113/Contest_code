#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, long long> freq;
    for (auto &x : a) {
        cin >> x;
        freq[x]++;
    }
    long long  sum = 0;

    for (auto u : freq) {
    	long long  t=u.second;     
        if (t >= 2) sum += (n - t) *(t * (t - 1) / 2) ;   
    }

    cout << sum << endl;
}
