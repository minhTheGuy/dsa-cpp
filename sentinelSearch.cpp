#include <bits/stdc++.h>

void sentinelSearch(int* arr, int key, int size) {

    int last = arr[size - 1];
    
    arr[size - 1] = key;

    int i = 0;

    while (arr[i] != key) {
        i++;
    }

    arr[size - 1] = last;

    if (i < size - 1 || arr[size - 1] == key) {
        std::cout << "Element found!";
    }
    else {
        std::cout << "Element not found!";
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    int x = 4;

    sentinelSearch(arr, x, 5);

    return 0;
}