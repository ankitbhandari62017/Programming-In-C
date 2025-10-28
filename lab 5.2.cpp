/* exp 5.2 Declare a local variable inside a function and try to access it 
outside the function. Compare this with accessing the global 
variable from within the function*/
 #include <stdio.h>
 int global_var = 100; 
void demonstrate_local_variable() {
 int local_var = 50; 
printf("Inside function: Local variable = %d\n", local_var);
 printf("Inside function: Global variable = %d\n", global_var);
 }
 int main() {
printf("Name Ankit Bhandari\nSap Id: 590028085\n");
 demonstrate_local_variable();
 printf("Outside function: Global variable = %d\n", global_var);
 return 0;   
}
