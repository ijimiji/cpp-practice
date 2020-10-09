#include <iostream>
#include <vector>
#include "iodata.h"
#include "sorting_algorithms.h"

int main(){
    std::vector<int> arr_rand1;
    std::vector<int> arr_rand2;
    std::vector<int> arr_rand3;
    std::vector<int> arr_min_max;
    std::vector<int> arr_max_min;

    rfillVector(arr_rand1, 100);
    rfillVector(arr_rand2, 100);
    rfillVector(arr_rand3, 100);

    int n;
    std::cin >> n;
    
    rfillVector(arr_rand1, n);
    rfillVector(arr_rand2, n);
    rfillVector(arr_rand3, n);
    fillVectorMaxMin(arr_max_min, n);
    fillVectorMinMax(arr_min_max, n);

    selectionSort(arr_max_min, n);
    insertionSort(arr_max_min, n);
    bubbleSort(arr_max_min, n);
    shellSort(arr_max_min, n);
    cocktailSort(arr_max_min, n);




    return 0;
}
