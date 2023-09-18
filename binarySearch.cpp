#include <bits/stdc++.h>

bool binarySearch(int* arr, int size, int key) {
    int l = 0, h = size - 1;
    while (l <= h) {
        int mid = (h + l) / 2;
        if (arr[mid] == key)
            return true;
        else if (key > arr[mid]) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    if (binarySearch(arr, n, x))
        printf("Element found");
    else
        printf("Element not found");
    return 0;
}