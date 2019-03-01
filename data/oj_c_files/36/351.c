#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main()
{
  void sort(char array[],int n);
  char str1[100],str2[100];
  int i,j,l1,l2,temp;
  scanf("%s %s",str1,str2);
  l1=strlen(str1);
  l2=strlen(str2);
  sort(str1,l1);
  sort(str2,l2);
  if(strcmp(str1,str2)==0)
  printf("YES");
  else printf("NO");
}
 void sort(char array[],int n)
{
  int i,j;
  char ch;
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  {
    if(array[i]>array[j])
    {
      ch=array[i];
      array[i]=array[j];
      array[j]=ch;
     }
   }
}