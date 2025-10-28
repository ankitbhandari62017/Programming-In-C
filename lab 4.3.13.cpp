/* 4.3.13 Write saparate programs for each patterns  and number them*/
#include<stdio.h>
int main()
{
	printf("Name-Ankit Bhandari\nSAP ID- 590028085\nCourse-BCA\nBatch- B5\n");
  int i,j,n;
  printf("\nEnter the value:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\n");
    
    for(j=1;j<=n-i;j++)
    {
       printf("  ");
    }
    for(j=n;j>n-i;j--)
    {
       printf(" %d",j);
    }
    for(j=n-i+2;j<n+1;j++)
    {
       printf(" %d",j);
    }
  }
  for(i=1;i<=n;i++)
  {
    printf("\n");

    for(j=1;j<=i;j++)
    {
       printf("  ");
    }
    for(j=n;j>i;j--)
    {
       printf(" %d",j);
    }
    for(j=i+2;j<=n;j++)
    {
       printf(" %d",j);
    }

  }
  return 0;
}
