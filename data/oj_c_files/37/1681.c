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
int t,i,n,j,p,y;
char a[1000];
char s;
int b[1000];
scanf("%d",&p);
for(y=0;y<p;y++)
{ 
memset(a,0,1000*sizeof(char));
         
       t=0;
       scanf("%s",a);
       n=strlen(a);
       for(i=0;i<n;i++)
       b[i]=0;
       for(i=0;i<n;i++)
                       {
                       for(j=0;j<n;j++)
                                       {
                                       if(a[i]==a[j])
                                       b[j]=b[j]+1;
                                       }
                       }                  
       
       for(i=0;i<n;i++)
                       {
                       if(b[i]==1)
                                  {printf("%c\n",a[i]);
                                  t=1;
                                  break;}
                       }
       
       if(t==0)
       printf("no\n");
}      
}
                              

