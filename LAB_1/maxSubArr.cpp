#include <iostream>
#include <climits>
using namespace std;

int maxCrossingSum(int arr[], int left, int mid, int right) {
    int sum = 0;
    int leftSum = INT_MIN;

    for (int i = mid; i >= left; i--) {
        sum += arr[i];
        leftSum = max(leftSum, sum);
    }
    sum = 0;
    int rightSum = INT_MIN;

    for (int i = mid + 1; i <= right; i++) {
        sum += arr[i];
        rightSum = max(rightSum, sum);
    }

    return leftSum + rightSum;
}
int maxSubArray(int arr[], int left, int right) {
    if (left == right)
        return arr[left];

    int mid = left + (right - left) / 2;

    int leftMax = maxSubArray(arr, left, mid);
    int rightMax = maxSubArray(arr, mid + 1, right);
    int crossMax = maxCrossingSum(arr, left, mid, right);

    return max({leftMax, rightMax, crossMax});
}
int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray Sum = "
         << maxSubArray(arr, 0, n - 1);

    return 0;
}

