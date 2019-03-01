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
 char a[50][32];
 int n,i,t;
 scanf("%d\n",&n);
 for(i=0;i<n;i++)
 gets(a[i]);
 for(i=0;i<n;i++)
 {
   t=strlen(a[i]);
   if(t>2)
    if(a[i][t-1]=='r'&&a[i][t-2]=='e')
    a[i][t-2]='\0';
    else
     if(a[i][t-1]=='y'&&a[i][t-2]=='l')
     a[i][t-2]='\0';
     else
      if(t>3)
       if(a[i][t-1]=='g'&&a[i][t-2]=='n'&&a[i][t-3]=='i')
       a[i][t-3]='\0';
 }
 for(i=0;i<n;i++)
 puts(a[i]); 
}