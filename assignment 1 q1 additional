#include <iostream>
using namespace std;

int temp[100000];

void merge(int arr[], int l, int mid, int r) {
    int i = l;
    int j = mid + 1;
    int k = l;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (int p = l; p <= r; p++)
        arr[p] = temp[p];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int N;
    cin >> N;

    int A[100000];
    for (int i = 0; i < N; i++)
        cin >> A[i];

    mergeSort(A, 0, N - 1);

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        int idx = binarySearch(A, N, x);
        cout << idx + 1 << endl;   // rank
    }

    return 0;
}
