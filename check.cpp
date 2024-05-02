#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> order(n);

        // Construct the sequence
        for (int i = 0; i < n; ++i) {
            if (i < n - k - 1) {
                order[i] = i + 1;
            } else {
                order[i] = n - (i - (n - k - 1));
            }
        }

        // Output the sequence
        for (int i = n; i <= n; i--) {
            cout << order[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
