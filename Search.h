#include <iostream>
#include <string>

using namespace std;

// Template function to print the contents of an array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Sequential search algorithm
bool seqSearch(string target, string arr[], int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

// Iterative binary search
bool binSearch(float target, float arr[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return true;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

// Recursive binary search
bool binSearchR(char target, char charray[], int left, int right) {
    if (left > right) {
        return false;
    }
    int mid = left + (right - left) / 2;
    if (charray[mid] == target) {
        return true;
    }
    if (charray[mid] < target) {
        return binSearchR(target, charray, mid + 1, right);
    } else {
        return binSearchR(target, charray, left, mid - 1);
    }
}

// Wrapper for recursive binary search to handle array size
bool binSearchR(char target, char charray[], int n) {
    return binSearchR(target, charray, 0, n - 1);
}

// Swap function
void swap(double darray[], int i, int j) {
    double temp = darray[i];
    darray[i] = darray[j];
    darray[j] = temp;
}

// Function to find the index of the smallest element
int minFind(double darray[], int start, int n) {
    int minIndex = start;
    for (int i = start + 1; i < n; ++i) {
        if (darray[i] < darray[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// New sorting algorithm
void newSort(double darray[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = minFind(darray, i, n);
        swap(darray, i, minIndex);
    }
}
