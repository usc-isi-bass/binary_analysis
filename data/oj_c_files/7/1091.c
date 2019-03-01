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
    char b[256],a[256],c[256];
    int m,n,i,j,d;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<m;i++)
    {
                    d=1;
                    for(j=0;j<n;j++)
                    {
                                    if(b[j]!=a[j+i])
                                    d=0;
                                    }
                    if(d==1)
                  {  for(j=0;j<n;j++)
                    {a[i+j]=c[j];
                                    }
                                    break;}
                    
                    }
                  
   printf("%s",a);
    
                      getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
                          getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
                              getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
}