/* exp 6.2. WAP to read a list of integers and store it in a single dimensional array. Write a C program to 
count and display positive, negative, odd, and even numbers in an array*/
 #include <stdio.h>
 #define MAX_SIZE 100
 int main() {
 int arr[MAX_SIZE];
 int n, i;
 int positive_count = 0, negative_count = 0, even_count = 0, odd_count = 0;
 printf("Name Ankit Bhandari\nSap Id: 590028085\n");
 printf("Enter the number of integers (max %d): ", MAX_SIZE);
 scanf("%d", &n);
 if (n < 1 || n > MAX_SIZE) {
 printf("Please enter a valid number of integers (1 to %d).\n", MAX_SIZE);
 return 1;
 }
printf("Enter %d integers:\n", n);
 for (i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
 }
 for (i = 0; i < n; i++) {
 if (arr[i] > 0) {
 positive_count++;
 } else if (arr[i] < 0) {
 negative_count++;
 }
 if (arr[i] % 2 == 0) {
 even_count++;
 } else {
 odd_count++;
 }
 }
 printf("Positive numbers: %d\n", positive_count);
 printf("Negative numbers: %d\n", negative_count);
 printf("Even numbers: %d\n", even_count);
 printf("Odd numbers: %d\n", odd_count);
 return 0;
 }
 
