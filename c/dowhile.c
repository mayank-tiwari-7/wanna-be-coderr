#include <stdio.h>

int main() {
    int arr[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    
    int arr1[10];
    int i = 0;

    do {
        arr1[i] = i + 1;
        i++;
    } while (i < 10);

    i = 0; 
    do {
        arr[i] += 10;
        i++;
    } while (i < 10);

    printf("Elements are:\n");
    i = 0; 
    do {
        printf("%d\n", arr[i]);
        i++;
    } while (i < 10);

    int count = 0;
    i = 0; 
    do {
        count++;
        i++;
    } while (i < 10);
    printf("Total number of elements: %d\n", count);

    int sum = 0;
    i = 0; 
    do {
        sum += arr[i];
        i++;
    } while (i < 10);
    printf("Sum of all elements: %d\n", sum);

    int mul = 1;
    i = 0; 
    do {
        mul *= arr[i];
        i++;
    } while (i < 10);
    printf("Multiplication of all elements: %d\n", mul);

}