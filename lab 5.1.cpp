/* exp 5.1
   Declare a global variable outside all functions and use it inside
   various functions to understand its accessibility*/
#include <stdio.h>
int global_var = 42;

void display_global() {
    printf("Global variable inside display_global: %d\n", global_var);
}

void modify_global() {
    global_var += 10;
    printf("Global variable inside modify_global after modification: %d\n", global_var);
}

int main() {
    printf("Name:Ankit Bhandari\nSap Id: 590028085\n");
    printf("Global variable inside main: %d\n", global_var);
    display_global();
    modify_global();
    printf("Global variable inside main after modification: %d\n", global_var);
    return 0;
}
 
