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
    char s1[100][11];
    char s2[100][4];
    int i,j,m,k,p;
    scanf("%s%s",s1[0],s2[0]);
    m=0;
    p=0;
    do
    {
       m=0;
       for(k=0;k<strlen(s1[p]);k++)
       {
           
           
           if(s1[p][k]>s1[p][m])
           {m=k;}
       }       
       for(i=0;i<=m;i++)
       {printf("%c",s1[p][i]);
        
       }
       printf("%s",s2[p]);
       for(j=m+1;j<strlen(s1[p]);j++)
       {
           printf("%c",s1[p][j]);
           
       }
       printf("\n");
       p++;
      }
      while (scanf("%s%s",s1[p],s2[p])!=EOF);


}
