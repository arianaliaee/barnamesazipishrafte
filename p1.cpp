#include <iostream>

void getAverage(const int arr[], const int size, double *avg) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    *avg = sum / size;
}

void getMaximum(const int arr[], int size, int *max) {
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

void getMinimum(const int arr[], int size, int *min) {
    *min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

void getModulus(const int maximum, const int minimum, int *mod) {
    *mod = maximum % minimum;
}

int main() {
    int arr[] = {5, 10, 400, 6, 20000};
    int size = sizeof(arr);

    double avg;
    int max, min, mod;

    getAverage(arr, size, &avg);
    getMaximum(arr, size, &max);
    getMinimum(arr, size, &min);
    getModulus(max, min, &mod);

    std::cout << "Average: " << avg << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Mod: " << mod << std::endl;

    return 0;
}
