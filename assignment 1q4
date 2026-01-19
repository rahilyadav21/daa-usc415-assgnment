#include <iostream>
using namespace std;

int maxCrossingSum(int arr[], int low, int mid, int high) {
    int sum = 0;
    int left_sum = INT_MIN;

for (int i = mid; i >= low; i--) {
sum=sum+arr[i];
if (sum > left_sum)
left_sum = sum;}

    sum = 0;
    int right_sum = INT_MIN;

for (int i = mid + 1; i <= high; i++) {
sum=sum+arr[i];
if (sum > right_sum) right_sum = sum; }

    return left_sum + right_sum;
}

int MaxSum(int arr[], int low, int high) {
if (low == high) return arr[low];

int mid = (low + high) / 2;

 int crossSum = maxCrossingSum(arr, low, mid, high);
    int leftSum  = MaxSum(arr, low, mid);
    int rightSum = MaxSum(arr, mid + 1, high);

    return max({leftSum, rightSum, crossSum});
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray Sum = " << MaxSum(arr, 0, n - 1);

    return 0;
}
