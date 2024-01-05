#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int s = (n * 1LL * (n + 1)) / 2;  
    if (s % 2 != 0) {
        cout << "NO" << endl;
    } else {
        long long int ans = s / 2;
        cout << "YES" << endl;
        vector<long long int> a;  
        vector<long long int> b;  
        for (int i = n; i >= 1; i--) {
            if (i <= ans) {
                a.push_back(i);
                ans = ans - i;
            } else {
                b.push_back(i);
            }
        }
        cout << a.size() << endl;
        for (auto i : a) {
            cout << i << " ";
        }
        cout << endl;
        cout << b.size() << endl;
        for (auto i : b) {
            cout << i << " ";
        }
        cout << endl;  
    }

    return 0;
}
