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

    int n;
    std::cin >> n;
    
    rfillVector(arr_rand1, n);
    rfillVector(arr_rand2, n);
    rfillVector(arr_rand3, n);
    fillVectorMaxMin(arr_max_min, n);
    fillVectorMinMax(arr_min_max, n);

    std::cout << "Min to max case" << std::endl;
    selectionSort(arr_min_max, n);
    insertionSort(arr_min_max, n);
    bubbleSort(arr_min_max, n);
    shellSort(arr_min_max, n);
    cocktailSort(arr_min_max, n);

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Max to min case" << std::endl;

    selectionSort(arr_max_min, n);
    insertionSort(arr_max_min, n);
    bubbleSort(arr_max_min, n);
    shellSort(arr_max_min, n);
    cocktailSort(arr_max_min, n);

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Random case #1" << std::endl;
    selectionSort(arr_rand1, n);
    insertionSort(arr_rand1, n);
    bubbleSort(arr_rand1, n);
    shellSort(arr_rand1, n);
    cocktailSort(arr_rand1, n);
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Random case #2" << std::endl;
    selectionSort(arr_rand2, n);
    insertionSort(arr_rand2, n);
    bubbleSort(arr_rand2, n);
    shellSort(arr_rand2, n);
    cocktailSort(arr_rand2, n);

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";


    std::cout << "Random case #3" << std::endl;
    selectionSort(arr_rand3, n);
    insertionSort(arr_rand3, n);
    bubbleSort(arr_rand3, n);
    shellSort(arr_rand3, n);
    cocktailSort(arr_rand3, n);

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";


    return 0;
}
