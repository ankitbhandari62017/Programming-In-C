// exp 4.2 multiplication table of a number given by user
#include<stdio.h>
int main()
{
    printf("Name-Ankit Bhandari\nSAP ID- 590028085\nCourse-BCA\nBatch- B5\n");
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        n*i;
        printf("%d * %d = %d \n" ,n,i,n*i);
    }
    return 0;
}
