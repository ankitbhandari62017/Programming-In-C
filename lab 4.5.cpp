 /*exp 4.5Ramanujan Number is the smallest number that can be 
expressed as the sum of two cubes in two different ways. WAP to 
print all such numbers up to a reasonable limit*/
 #include <stdio.h>
 int main() {
 int L;
 printf("Name Ankit Bhandari\nSap Id: 59008085\n");
  printf("Enter the limit: ");
    scanf("%d", &L);
      for (int a = 1; a <= L; a++) {
        for (int b = a + 1; b <= L; b++) {
            for (int c = a + 1; c <= L; c++) {
                for (int d = c + 1; d <= L; d++) {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;
                    if (sum1 == sum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
 }
 
