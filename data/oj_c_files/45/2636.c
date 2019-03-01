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

main()
{     
     int i,j,k,m=0,n,n1,n2;
     char s1[60],s2[60];
     scanf("%s %s",s1,s2);
     n1=strlen(s1);
     n2=strlen(s2);
     for(j=0;j<n2;j++)
     {if(m==1)
     break;
     if(s1[0]==s2[j])
     {k=j;
     for(i=0;i<n1;i++)
     {if(s1[i]!=s2[k])
     break;
     else
     k++;
     if(i==n1-1)
     {m=1;break;}}}}
     printf("%d",j-1);
     
      }
