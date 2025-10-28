/*exp 2.3 WAP to calculate Compound interest (CI = P*(1+R/100)^T */
#include <stdio.h>
#include <math.h>
int main()
{
printf ("Name-ANKIT\nSAP ID- 590028085\nCourse-BCA\nBatch- B5\n");
float P, R, T, CI;
printf ("Enter the values of principle, rate, me");
scanf("%f%f%f", &P, &R, &T);
float t1 = (1+(R/100));
float t2 = pow(t1,T);
CI = (P*t2)-P;
printf ("the compound interst is %f", CI);
return 0;
}
