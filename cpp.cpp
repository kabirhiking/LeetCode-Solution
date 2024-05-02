// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> order(n);

        
//         for (int i = 0; i < n; ++i) {
//             if (i < n - k - 1) {
//                 order[i] = i + 1;
//             } else {
//                 order[i] = n - (i - (n - k - 1));
//             }
//         }

       
//         for (int i = n - 1; i >= 0; --i) {
//             cout << order[i] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = 0;
        int i = 0, j = 0;
        while (i < n && j < k) {
            if (a[i] <= b[j]) {
                ans += a[i];
                i++;
            } else {
                ans += b[j];
                j++;
            }
        }
        while (i < n) {
            ans += a[i];
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}
