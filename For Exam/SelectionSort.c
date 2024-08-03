// #include <stdio.h>
// #include <limits.h>

// void main() {
//     int myArr[10] = {20,12,7,50,63,42,44,51,14,30};
//     int n = 10;

//     // printing original Array
//     printf("Original Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", myArr[i]);
//     }

//     // Selection Sort
//     for(int i = 0; i < n-1; i++) {
//         int min = INT_MAX;
//         int minIndex = -1;
//         for(int j = i; j <= n-1; j++) {
//             if(min > myArr[j]) {
//                 min = myArr[j];
//                 minIndex = j;
//             }
//         }

//         // Swap the minimum element and first element of unsorted part
//         // Swap minIndex and i
//         int temp = myArr[minIndex];
//         myArr[minIndex] = myArr[i];
//         myArr[i] = temp;

//     }  

//     printf("\n");
//     // printing original Array
//     printf("After Swap Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", myArr[i]);
//     }
// }



// FROM CHATGPT

#include <stdio.h>
#include <limits.h>

void main() {
    int myArr[10] = {20, 12, 7, 50, 63, 42, 44, 51, 14, 30};
    int n = 10;

    // Printing original array
    printf("Original Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", myArr[i]);
    }
    printf("\n");

    // Selection Sort
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(myArr[j] < myArr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = myArr[minIndex];
        myArr[minIndex] = myArr[i];
        myArr[i] = temp;
    }

    // Printing sorted array
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", myArr[i]);
    }
}
