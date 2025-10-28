/* exp 3.5 According to the gregorian calendar it was Monday on the date 01/01/01 */
#include <stdio.h>
int isLeap(int year) {
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))

return 1; return 0;
}
int main() {
int year, i, days = 0, dayOfWeek;
printf("Name-Ankit\nSAP ID- 590028085\nCourse-BCA\nBatch- B5\n");
 printf("Enter the year: ");
scanf("%d", &year);
for (i = 1; i < year; i++) { if (isLeap(i))
days += 366; else
days += 365; }
dayOfWeek = days % 7;
printf("On 01/01/%d, it was ", year); switch (dayOfWeek) {
case 0: printf("Monday\n"); 
break; case 1: printf("Tuesday\n");
 break; case 2: printf("Wednesday\n"); break;
  case 3: printf("Thursday\n"); break;
   case 4: printf("Friday\n"); break;
   case 5: printf("Saturday\n"); break;
case 6: printf("Sunday\n"); break; }
return 0; }




