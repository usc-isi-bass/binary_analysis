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


int set(char s[50],char w[50])
{
    int n1,n2,i,j,sum;
    char *p;
    
    n1=strlen(s);
    n2=strlen(w);
    
    for  (i=0;i<=n2-n1;i++)
    {
         if  (s[0]==w[i])
         {
             sum=0;
             p=&w[i];
             for  (j=0;j<n1;j++)
             if  (p[j]==s[j]) sum++;
             
             if(sum==n1)
             {printf("%d\n",i); i=n2-n1;}
         }
    }
}

main()
{
      char s[50],w[50];
      int n,m,i;
      
      scanf("%s%s",s,w);
      set(s,w);

}
