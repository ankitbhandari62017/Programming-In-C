 /*exp 5.4. Declare a static local variable inside a function. Observe how 
its value persists across function call*/
 #include <stdio.h>
 void demonstrate_static_variable() {
 static int static_var = 0;
 static_var++;
 printf("Static variable value: %d\n", static_var);
 }
 int main() {
 printf("Name Ankit\nSap Id: 590028085\n");
 for (int i = 0; i < 5; i++) {
 demonstrate_static_variable();
 }
 return 0;
 }  
