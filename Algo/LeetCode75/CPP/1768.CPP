#include <iostream>
#include <vector>
#include <string>

using namespace std;

string mergeAlternately(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();
    int i = 0, j = 0;
    vector<char> merged;

    while (i < n && j < m) {
        merged.push_back(word1[i++]);
        merged.push_back(word2[j++]);
    }

    while (i < n) {
        merged.push_back(word1[i]);
        i++;  
    }

    while (j < m) {
        merged.push_back(word2[j]);
        j++;  
    }

    string result;
    for (char c : merged) {
        result += c;
    }
    return result;
}


int main() {
    string word1 = "abc";
    string word2 = "pqr";
    
    string result = mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;
    return 0;
}