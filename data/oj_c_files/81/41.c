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


int main()
{
 char (*p)[5];
 p=(char (*)[5])calloc(5,sizeof(char)*5);
 int i,j,n,m,t;
 for(i=0;i<5;i++)
 for(j=0;j<5;j++)
 scanf("%d",*(p+i)+j);
 scanf("%d %d",&n,&m);
 if(n<5&&n>=0&&m<5&&m>=0)
 {for(j=0;j<5;j++)
  t=*(*(p+n)+j),*(*(p+n)+j)=*(*(p+m)+j),*(*(p+m)+j)=t;
  for(i=0;i<5;i++)
  {
   printf("%d",**(p+i));
   for(j=1;j<5;j++)
   printf(" %d",*(*(p+i)+j));
   printf("\n");}
  }
 else  printf("error");
}
