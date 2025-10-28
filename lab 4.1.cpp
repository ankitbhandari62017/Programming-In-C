// 4.1 WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered with for loop


#include<stdio.h>
int main()
{
    printf("Name-Ankit Bhandari\nSAP ID- 590028085\nCourse-BCA\nBatch- B5\n");
    int n,i;
    int pos=0,neg=0,zero=0;
    char ch;
    do
    {
        printf("Enter the number");
        scanf("%d",&n);
        if(n>0)
        pos++;
        else if(n<0)
        neg++;
        else
        zero++;
        printf("Do you want to continue (y/n)? ");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    printf("Positive numbers: %d\n",pos);
    printf("Negative numbers: %d\n",neg);
    printf("Zeroes: %d\n",zero);
    return 0;

}
