//Maximum and Minimum: Find the maximum and minimum elements in an array.

// #include<stdio.h>
// int main() {
//     int value =0;
//     int a[4]={1,2,3,4};
//     //int min,max=0;
//     for(int i =0;i<=3;i++) {
//         value = a[i];
//             printf("%d ",value);
//     }

// }

// #include <stdio.h>
// int main() {
//     int a[5]={1,2,3,4,5};
//     int min =a[0];
//     int max=a[0];
//     int var=0;
//     for (int i =1;i<5;i++){
//     var=a[i];
//         if(var<max){
//             min=var;
//             printf("Values are""%d","%d",max ,var);
//         }
//         if(max>var){
//             max=var;
//             printf("%d","%d",max ,var);
//         }
//     }
// printf("min and max values are " "%d ","%d",min,max);
//     }   

// #include <stdio.h>

// int main() {
//     int a[5] = {1, 2, 3, 4, 5}; // Initialize the array
//     int min = a[0]; // Initialize min with the first element
//     int max = a[0]; // Initialize max with the first element

//     // Loop through the array to find min and max
//     for (int i = 0; i < 5; i++) {
//         printf(sizeof(a))

//         if (a[i]< min) {
//             min = a[i]; // Update min if the current element is smaller
//         }
//         if (a[i] > max) {
//             max = a[i]; // Update max if the current element is larger
//         }
//     }

//     // Print the min and max values
//     printf("Minimum value is: %d\n", min);
//     printf("Maximum value is: %d\n", max);

//     return 0;
// }
#include<stdio.h>

// int main (int argc, char *argv[]) {
//     if(argc <2)
//     printf("Usage %s <size of array><Array Elemensts>",argv[0]);
//     return 1;
//     int n;
//     printf("Enter the size of any Array :");
//     scanf("%d",&n);
//     int a[n];
//     int i;
//     printf("Enter the Array elements :");
// for(i=0;i<n;i++) {
//     scanf("%d",&a[i]);
// }

// printf("Array elemensts are :\n");
// for(i=0;i<n;i++){
//     printf("%d",a[i]);
// }
// }

#include<stdio.h>

// int main (int argc, char *argv[]) {
//     if(argc <2)
//     printf("Usage %s <size of array><Array Elemensts>",argv[0]);
//     return 1;
//     int n;
//     printf("Enter the size of any Array :");
//     scanf("%d",&n);
//     int a[n];
//     int i;
//     printf("Enter the Array elements :");
// for(i=0;i<n;i++) {
//     scanf("%d",&a[i]);
// }

// printf("Array elemensts are :\n");
// for(i=0;i<n;i++){
//     printf("%d",a[i]);
// }
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[]) {
//     if (argc < 2) {
//         printf("Usage: %s <size of array>\n", argv[0]);
//         return 1;
//     }

//     int n = atoi(argv[1]);  // Convert the first argument to an integer for array size

//     if (n <= 0) {
//         printf("Error: Array size must be a positive integer.\n");
//         return 1;
//     }

//     int a[n];  // Declare the array with variable length
//     int i;

//     printf("Enter the Array elements:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);  // Correctly read input into array elements
//     }

//     printf("Array elements are:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", a[i]);  // Correctly print array elements
//     }
//     printf("\n");

//     // Find the maximum and minimum elements
//     int min = a[0];
//     int max = a[0];

//     for (i = 1; i < n; i++) {
//         if (a[i] < min) {
//             min = a[i];
//         }
//         if (a[i] > max) {
//             max = a[i];
//         }
//     }
//     /*while loop
//     while(i<n) {
//     if(a[i]<min){
//     min =a[i];
//     }
//     if (a[i]>max){
//     max=a[i]}
//     i++
//     }*/
//    /*do while
//    if(n>1) {
//    do{
//     if(a[i] <min) {
//     min =a[i];
//     }
//     if(a[i]>max) {
//     max =a[i]
//     }
//     i++;
//     }while(i<n)
//    }
   
//    */


//     printf("Minimum value is: %d\n", min);
//     printf("Maximum value is: %d\n", max);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <size of array>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n <= 0) {
        printf("Error: Array size must be a positive integer.\n");
        return 1;
    }

    int a[n];
    int i;

    printf("Enter the Array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int min = a[0];
    int max = a[0];

    // Finding min and max using a single for loop with if-else
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        } else if (a[i] > max) {
            max = a[i];
        }
    }

    printf("Minimum value is: %d\n", min);
    printf("Maximum value is: %d\n", max);

    return 0;
}
