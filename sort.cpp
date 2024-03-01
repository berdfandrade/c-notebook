#include <iostream>
#include <algorithm>

void sort_something(int arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int arr[] = { 0, 6, 89, 7, 228, 899, 41, 21, 1, 23 };
    int size = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho do array

    sort_something(arr, size);

    // Imprime o array ordenado
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
