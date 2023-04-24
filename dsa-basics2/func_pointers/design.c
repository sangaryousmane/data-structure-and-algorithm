//
// Created by sanga on 20/04/2023.
//

#include <stdio.h>
int minimumElement(int array[], int size);
// TODO: DAY 8, Using arrays to implement linear search algorithm
// TODO: sequentially search an array until a given element is found
int linear_search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

// TODO: helper function to test our linear search algorithm
int linear_search_implement()
{
    int size = 6;
    int arr[] = {1, 2, 3, -34, -10, 5};
    int result = minimumElement(arr, size);

    printf("The minimum number is: %d\n", result);
    return 0;
}


// TODO: DAY 9, find the minimum number in an array
// TODO: this function uses linear search algorithm
int minimumElement(int array[], int size){
    int minimum =array[0], i =0;
    if (size > 0 && array !=NULL) {

        for (; i < size; i++) {
            if (array[i] < minimum) {
                minimum = array[i];
            }
        }
    }
    return minimum;
}


// TODO: DAY 11, completing Linear Search Algorithm in C
// TODO: Search for the minimum and maximum element and return their sum
int sum_Of_max_min(int arr[], int size){
    int min, max;
    int i = 0;
    for (; i < size; i++){
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }
    return max + min;
}
