// # import sys

// # # O(n * k) solution for finding
// # # maximum sum of a subarray of size k
// # INT_MIN = -sys.maxsize - 1

// # def maxsum (arr, n , k):
// #        max_sum = INT_MIN
       
// #        for i in range(n-k + 1):
// #               current_sum = 0
// #               for j in range(k):
// #                      current_sum += arr[i+j]
// #               max_sum = max(max_sum, current_sum)
// #        return max_sum

       

// # arr  = [1, 4, 2, 10, 2,3, 1, 0, 20]
// # k = 4
// # n = len(arr)
// # print (maxsum(arr, n , k))



// using cpp
#include<bits/stdc++.h>
using namespace std;


int maxSum (int arr[], int n, int k){
     
     int max_sum = INT_MIN;

 for(int i = 0; i<n-k +1; i++){
    int current_sum = 0;
    for(int j=0; j<k; j++)
        current_sum = current_sum + arr[i+j];

    max_sum = max(current_sum,  max_sum);

    
    }
 return max_sum;
}


int main(){
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    
    cout << maxSum(arr, n, k);
    return 0;

}

