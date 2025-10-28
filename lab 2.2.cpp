 /* exp 2.2 WAP a C program to Convert temperature from Celsius to Fahrenheit using theformula: F = (C * 9/5) + 32.*/
#include <stdio.h>
#include<math.h>
int main ()
{
printf ("Name-ANKIT\nSAP ID- 590028085\nCourse-BCA\nBatch- B5\n");
float c,f;
printf ("Enter the temprature in celsius ");
scanf("%f", &c);
f = (c*9/5)+32;
printf ("The temprature in fahrenheit is %f", f);
return 0;
}
