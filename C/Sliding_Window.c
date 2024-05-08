// arr = [5,3,6,2,9,10,4,1,1,7]
// to find the max sum of a subarray of length 4

#include <stdio.h>

int main() {

    int arr[10] = {5,3,6,2,9,10,4,1,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max_sum = 0, k = 4;
    for (int i=0 ; i<k ; i++) {
        max_sum += arr[i];
    }

    int win_sum = max_sum;
    for (int i=k ; i<size ; i++) {
        win_sum += arr[i] - arr[i-k];
        if (win_sum > max_sum)
            max_sum = win_sum;
    }
    printf("Max Sum : %d", max_sum);
    
    return 0;
}
