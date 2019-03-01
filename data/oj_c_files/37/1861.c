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
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
     char a[100000];
     scanf("%s",a);
     int len=strlen(a);
     int count=0,sum[100000]={0};
     for(int j=0;j<len;j++)
     {
     for(int k=0;k<len;k++)
     {
     if(a[k]==a[j])
     sum[j]++;
     }
     if(sum[j]==1)
     {
      printf("%c\n",a[j]);
      count++;
      break;
     }
     }
     if(count==0)
     printf("no\n");
    }
}