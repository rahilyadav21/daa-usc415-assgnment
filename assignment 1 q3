#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
if (low > high)
        return -1;
int mid = low + (high - low) / 2;

if (arr[mid] == key)return mid;

else if (arr[mid] < key)
    return binarySearch(arr, mid + 1, high, key);
else
    return binarySearch(arr, low, mid - 1, key);
}

int main() {
int arr[] = {2, 4, 6, 8, 10, 12};

    int n = sizeof(arr) / sizeof(arr[0]);

int key;
    cin >> key;

int index = binarySearch(arr, 0, n - 1, key);

if (index != -1) {cout << "Element found at index " << index;}
else cout << "Element not found";

    return 0;
}
