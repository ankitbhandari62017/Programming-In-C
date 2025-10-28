 /*exp 6.3. WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a 
particular number in a list of integers*/
 #include <stdio.h>
 #define MAX_SIZE 100
 int main() {
 int arr[MAX_SIZE];
 int n, i, target, frequency = 0;
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
printf("Enter the number to find its frequency: ");
 scanf("%d", &target);
 for (i = 0; i < n; i++) {
 if (arr[i] == target) {
 frequency++;
 }
 }
 printf("The frequency of %d in the list is: %d\n", target, frequency);
 return 0;
 }
 
