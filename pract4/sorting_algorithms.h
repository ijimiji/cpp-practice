#include <iostream>
#include <vector>
#include <chrono>

using namespace std::chrono;

void selectionSort(std::vector<int> arr, int n) {
    int swaps = 0, compares = 0;
    int i, j, min_idx;
    int temp;

    auto start = system_clock::now();
    for (i = 0; i < n - 1; i++) {

        min_idx = i;
        for (j = i + 1; j < n; j++) {
            ++compares;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        ++swaps;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    auto end = system_clock::now();

    auto elapsed_seconds = duration_cast<seconds>(end - start).count();
    auto elapsed_milliseconds = duration_cast<milliseconds>(end - start).count();
    std::cout << "Selection sort on " << n << " elements took:" << std::endl;
    std::cout << compares << " compares" << std::endl;
    std::cout << swaps << " swaps" << std::endl;
    std::cout << elapsed_seconds << "s" << std::endl;
    std::cout << elapsed_milliseconds << "ms" << std::endl;
}

void bubbleSort(std::vector<int> arr, int n) {
    int swaps = 0, compares = 0;
    int i, j;
    int temp;
    auto start = system_clock::now();
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++) {
            ++compares;
            if (arr[j] > arr[j + 1]) {
                ++swaps;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    auto end = system_clock::now();

    auto elapsed_seconds = duration_cast<seconds>(end - start).count();
    auto elapsed_milliseconds = duration_cast<milliseconds>(end - start).count();
    std::cout << "Bubble sort on " << n << " elements took:" << std::endl;
    std::cout << compares << " compares" << std::endl;
    std::cout << swaps << " swaps" << std::endl;
    std::cout << elapsed_seconds << "s" << std::endl;
    std::cout << elapsed_milliseconds << "ms" << std::endl;
}

void insertionSort(std::vector<int> arr, int n) {

    int swaps = 0, compares = 0;
    int i, key, j;
    auto start = system_clock::now();
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key && ++compares) {
            ++swaps;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        ++swaps;
        arr[j + 1] = key;
    }
    auto end = system_clock::now();

    auto elapsed_seconds = duration_cast<seconds>(end - start).count();
    auto elapsed_milliseconds = duration_cast<milliseconds>(end - start).count();
    std::cout << "Insertion sort on " << n << " elements took:" << std::endl;
    std::cout << compares << " compares" << std::endl;
    std::cout << swaps << " swaps" << std::endl;
    std::cout << elapsed_seconds << "s" << std::endl;
    std::cout << elapsed_milliseconds << "ms" << std::endl;
}

void shellSort(std::vector<int> arr, int n) {

    int swaps = 0, compares = 0;

    int step, i, j, tmp;

    auto start = system_clock::now();
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
            for (j = i - step; j >= 0 && arr[j] > arr[j + step] && ++compares;
                 j -= step) {
                ++swaps;
                tmp = arr[j];
                arr[j] = arr[j + step];
                arr[j + step] = tmp;
            }
    auto end = system_clock::now();

    auto elapsed_seconds = duration_cast<seconds>(end - start).count();
    auto elapsed_milliseconds = duration_cast<milliseconds>(end - start).count();
    std::cout << "Shell sort on " << n << " elements took:" << std::endl;
    std::cout << compares << " compares" << std::endl;
    std::cout << swaps << " swaps" << std::endl;
    std::cout << elapsed_seconds << "s" << std::endl;
    std::cout << elapsed_milliseconds << "ms" << std::endl;
}

void cocktailSort(std::vector<int> a, int n) {

    int swaps = 0, compares = 0;
    bool swapped = true;
    int start = 0;
    int temp;
    int end = n - 1;

    auto start_t = system_clock::now();
    while (swapped) {

        swapped = false;

        for (int i = start; i < end; ++i) {
            ++compares;
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
                ++swaps;
            }
        }

        if (!swapped)
            break;

        swapped = false;

        --end;

        for (int i = end - 1; i >= start; --i) {
            if (a[i] > a[i + 1]) {
                ++compares;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
                ++swaps;
            }
        }

        ++start;
    }
    auto end_t = system_clock::now();

    auto elapsed_seconds = duration_cast<seconds>(end_t - start_t).count();
    auto elapsed_milliseconds = duration_cast<milliseconds>(end_t - start_t).count();
    std::cout << "Cocktail sort on " << n << " elements took:" << std::endl;
    std::cout << compares << " compares" << std::endl;
    std::cout << swaps << " swaps" << std::endl;
    std::cout << elapsed_seconds << "s" << std::endl;
    std::cout << elapsed_milliseconds << "ms" << std::endl;
}
