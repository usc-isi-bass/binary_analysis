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
  void move(int array[],int x,int y);
  int num[120];
  int i,m,n;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    if(i==n-1)
    scanf("%d",&num[i]);
    else scanf("%d ",&num[i]);
   }
   move(num,n,m);
   for(i=0;i<n;i++)
   {
     if(i==n-1)
     printf("%d",num[i]);
     else printf("%d ",num[i]);
    }
    printf("\n");
}
 void move(int array[],int x,int y)
{
  int *p,array_end;
  array_end=*(array+x-1);
  for(p=array+x-1;p>array;p--)
  *p=*(p-1);
  *array=array_end;
  y--;
  if(y>0)
  move(array,x,y);
}
   