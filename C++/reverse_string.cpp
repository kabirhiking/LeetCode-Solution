#include<bits/stdc++.h>
using namespace std;

int main() {
    string s[] = {"H", "a", "b", "c"};
    int n = sizeof(s) / sizeof(s[0]);
    
    reverse(s, s+n);
    
    for(int i=0; i<n; i++){
        cout << s[i] << endl;
    }

   
    return 0;
}



// class Solution {
// public:
//     void reverseString(vector<char>& s) {
        
//          int n = sizeof(s) / sizeof(s[0]);
    
//         reverse(s.begin(), s.end());
//     }
// };