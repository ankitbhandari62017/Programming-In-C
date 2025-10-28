/* exp 4.3.1Write saparate programs for each patterns  and number them 4.3.1, 4.3.2, 4.3.3 and so on*/
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
      printf("%d",i);
    }
  }
  return 0;
}
