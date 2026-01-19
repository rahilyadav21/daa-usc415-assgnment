#include <iostream>
using namespace std;

static int arr[1000005];
static int temp[1000005];

long long mergeAndCount(int l, int m, int r) {
    int i = l, j = m + 1, k = l;
    long long inv = 0;

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv += (m - i + 1);
        }
    }

    while (i <= m) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];

    for (int x = l; x <= r; x++)
        arr[x] = temp[x];

    return inv;
}

long long mergeSort(int l, int r) {
    if (l >= r) return 0;

    int m = l + (r - l) / 2;
    long long inv = 0;

    inv += mergeSort(l, m);
    inv += mergeSort(m + 1, r);
    inv += mergeAndCount(l, m, r);

    return inv;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    cout << mergeSort(0, N - 1);
    return 0;
}
