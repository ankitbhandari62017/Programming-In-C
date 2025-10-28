 /*exp 5.3.Declare variables within different code blocks (enclosed by 
curly braces) and test their accessibility within and outside those 
blocks*/
 #include <stdio.h>
 int main() {
 printf("Name Ankit Bhandari\nSap Id: 590028085\n");
 {
 }
 {
 }
 int block_var = 25; 
printf("Inside first block: block_var = %d\n", block_var);
 int another_block_var = 50; 
printf("Inside second block: another_block_var = %d\n", another_block_var);
 return 0;
}
