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
    char w[50]={0},s[50]={0},a[102],b[50]={0};
    int i,j,n,m,c;
    gets(a);
    for(i=0;a[i-1]!=' ';i++)
    s[i]=a[i];
    s[i-1]=0;
    for(j=0;a[i+j]!=0;j++)
    w[j]=a[i+j];
    n=strlen(s);
    m=strlen(w);
    for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
     b[j]=w[j+i];
     c=strcmp(s,b);
     if(c==0)
     {
      printf("%d\n",i);
      break;
      }
     }
}