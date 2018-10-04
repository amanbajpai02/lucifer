#include<bits/stdc++.h>
void main()
{
   char str[100];
   int length;
   printf("\nEnter the String : ");
   gets(str);
   length = 0;
   for(length=0;str[length]!='\0';length++);
   printf("\nLength of the String is : %d", length);
   
}
