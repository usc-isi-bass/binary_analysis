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
 char a[100000];
 int b[26] ;
 int i,j,t,lenth;
 int n ;
 scanf("%d",&t);
 for(j=0;j<t;j++)
 {
	 n=1;
 scanf("%s",a);
 lenth = strlen(a);
 for(i=0;i<26;i++)
	 b[i]=0;
 for(i=0;i<lenth;i++)
 {
    
         b[a[i] - 'a'] = b[a[i] - 'a'] + 1;
 }
 for(i=0;i<lenth;i++)
 {
  if(b[a[i] - 'a'] == 1)
  {
   printf("%c\n",a[i]);
   n = 0;
   break;
  }
 }
 if(n == 1)
  printf("no\n");

 for(i = 0;i <lenth;i++)
  a[i] = 0;
 for(i = 0;i < 26;i++)
  b[i] = 0;
 }

 return 0;
}

