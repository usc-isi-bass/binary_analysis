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
    int n;
    scanf ("%d",&n);
    int s[200];
    int i;
    for (i=0;i<200;i++)
        s[i]=0;
    for (i=0;i<n;i++)
    {
       int a,b;
       scanf ("%d%d",&a,&b);
       if (a-b==-1||a-b==2)
          s[i]=1;
       if (a-b==1||a-b==-2)
          s[i]=2;
       if (a==b)
          s[i]=0; 
    }
    int A=0,B=0;
    for (i=0;i<n;i++)
    {
        if (s[i]==1)
           A++;
        if (s[i]==2)
           B++;    
    }
    if (A>B)
       printf ("A\n");
    if (B>A)
       printf ("B\n");
    if (A==B)
       printf ("Tie\n");  
}