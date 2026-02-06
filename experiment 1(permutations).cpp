#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n <= 4) {
            cout << "-1\n";
            continue;
        }
        
        // Pattern: even numbers first (2,6,8,10,...), then core [4,5,1,3], then remaining odds
        vector<int> p;
        
        // 1. Add even numbers first: 2, then 6,8,10,... up to largest even <= n
        p.push_back(2);
        for (int i = 6; i <= n; i += 2) {
            p.push_back(i);
        }
        
        // 2. Add core sequence: 4,5,1,3
        p.push_back(4);
        p.push_back(5);
        p.push_back(1);
        p.push_back(3);
        
        // 3. Add remaining odd numbers: 7,9,11,...
        for (int i = 7; i <= n; i += 2) {
            p.push_back(i);
        }
        
        // Output
        for (int i = 0; i < n; i++) {
            cout << p[i] << (i < n-1 ? " " : "\n");
        }
    }
    
    return 0;
}
