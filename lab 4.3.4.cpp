/* 4.3.4 Write saparate programs for each patterns  and number them*/
#include<stdio.h>
int main()
{
	printf("Name-Ankit Bhandari\nSAP ID- 590028085\nCourse-BCA\nBatch- B5\n");
  int i,j,a;
  printf("\nEnter the value:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf("%d",(i-j+1));
    }
  }
  return 0;
}
