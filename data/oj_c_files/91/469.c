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
    char s1[1000],s2[1000];

    int i,j,k,l1,m,n,l2;
    gets(s1);

    l1=strlen(s1);

  
        for (i=0;i<l1-1;i++)
        {
          s2[i]=s1[i]+s1[i+1];
          }
          s2[l1-1]=s1[l1-1]+s1[0];
        for (i=0;i<l1;i++)  
       printf("%c",s2[i]);               
     
         return 0; 
}
