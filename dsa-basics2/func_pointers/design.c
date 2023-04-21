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
    int arr[] = {1, 2, 3, 4, -10, 5};
    int result = minimumElement(arr, size);

    printf("The minimum number is: %d", result);

}


// TODO: DAY 9, find the minimum number in an array
// TODO: this function uses linear search algorithm
int minimumElement(int array[], int size){
    int minimum =array[0], i =0;
    for (i; i < size; i++){
        if (array[i] < minimum){
            minimum = array[i];
        }
    }

    return minimum;
}

