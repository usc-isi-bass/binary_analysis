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
   char str1[100],str2[100],c;
   int n,k,t,i,j,a,q;
   
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   { scanf("\n");
      for(j=0;(c=getchar())!='\n';j++)
      str1[j]=c;
    j--;
    for(k=0;(c=getchar())!='\n';k++)
      str2[k]=c;
    k--;
    for(t=j;t>=0;t--)
      {
        if(t>=j-k) 
        str2[t]=str2[t-j+k];
        
        else str2[t]='0';
      }
     for(a=j;a>=0;a--)
     
      {
       if(str2[a]>str1[a])
        {
         str2[a]=str1[a]+10-str2[a]+'0';
         str1[a-1]=str1[a-1]-1;
        }
       else 
       str2[a]=str1[a]-str2[a]+'0';
      }
     for(q=0;q<=j;q++)
        printf("%c",str2[q]);
      printf("\n");
    }
 }
      