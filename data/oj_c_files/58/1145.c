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
{char (*p)[81];
 int n,i,j,flag;
 scanf("%d",&n);
 p=(char (*)[81])calloc(n,sizeof(char)*81);
 getchar();
 gets(*p);
 for(i=1;i<n;i++)
 gets(*(p+i));
 for(i=0;i<n;i++)
 {flag=1;
  if(*(*(p+i))!='_'&&(*(*(p+i))>'Z'||*(*(p+i))<'A')&&(*(*(p+i))>'z'||*(*(p+i))<'a'))
  flag=0;
  if(flag==1)
  {for(j=0;j<strlen(*(p+i));j++)
   if(*(*(p+i)+j)!='_'&&(*(*(p+i)+j)>'Z'||*(*(p+i)+j)<'A')&&(*(*(p+i)+j)>'z'||*(*(p+i)+j)<'a')&&(*(*(p+i)+j)>'9'||*(*(p+i)+j)<'0'))	
   {flag=0;break;}}
  printf("%d\n",flag);}
}
  
 