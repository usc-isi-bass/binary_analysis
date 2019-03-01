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

int main ()
{
    int m,n,i,j;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
    char a[MAX+1],b[MAX+1];
    scanf("%s",a);
        for(j=0;a[j];j++)
        {
          switch(a[j])
          {
                case'A':b[j]='T';
                break;
                case'T':b[j]='A';
                break;
                case'G':b[j]='C';
                break;
                case'C':b[j]='G';
                break;
                default:b[j]=a[j];
                break;
           }   
         }
      b[j]=a[j];
      printf("%s\n", b);
    }
	return 0;
}


