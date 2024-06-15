//write a program to find sum of all elements

#include<stdio.h>

int main() {
    int sum =0;

    int a[4]={1,2,3,4};

    
    for(int i=0;i<4;i++){
        int sum =sum+a[i];
    }
     printf("%d",sum);
}
// #include <stdio.h>

// int main() {
//     int a[4] = {1, 2, 3, 4}; // Initialize the array with 4 elements

//     int sum = 0; // Initialize sum to 0

//     // Loop through each element in the array
//     for (int i = 0; i < 4; i++) {
//         sum = sum + a[i]; // Add the current element to sum
//     }

//     // Print the sum of all elements
//     printf("The sum of all elements is: %d\n", sum);

//     return 0; // Indicate that the program ended successfully
// }