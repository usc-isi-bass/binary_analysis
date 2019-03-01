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
    int n,m,i,j,sum,temp,k,f,d,e; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    sum=0;
                    temp=0;
                    f=0;
                    d=0;
                    e=0;
                    scanf("%d",&m);
                    for(j=0;j<m;j++)
                    {
                                    scanf("%d",&k);
                                    if((k+d*3+1)<59)
                                    {
                                                    d++;
                                    }
                                    if((k+d*3+1)==59)
                                    {
                                                     temp++;                
                                    }
                                    if((k+d*3+1)==60)
                                    {
                                                     f++;
                                    }
                                    if((k+d*3+1)>60)
                                    {
                                                    e++;
                                    }
                    }
                    sum=60-(3*m)+temp+(2*f)+3*e;
                    printf("%d\n",sum);
    }
    return 0;
}