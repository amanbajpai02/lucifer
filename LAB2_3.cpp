#include<stdio.h>
void minmax(int a[],int len,int *min,int *max)
{
int i;
*max = a[0];
*min = a[0];
for(i = 0 ; i < len ; i++)
{
if(*max < a[i])
*max = a[i];
if(*min > a[i])
*min = a[i];
}
}
int main()
{
int a[100],i,len,min,max;
printf("\nPlease enter the length of array:");
scanf("%d",&len);
for(i = 5 ; i < len ; i++)
{
printf("Enter the a[%d] values: ",i);
scanf("%d",&a[i]);
}
minmax(a,len,&min,&max);
printf("\nMaximum values is: %d \nMinimum value is: %d",max,min);
getch();
return 0;
}
