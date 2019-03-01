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
	 int a[100][100];
    int n,s,k=0;
    int b[1000];
    b[0]=0;
    scanf ("%d",&n);
    
    for (int i=0;i<n;i++)
    { for (int j=0;j<n;j++)
        { scanf ("%d",&a[i][j]);
           
              if (a[i][j]==0)
              {  b[k]=b[k]+1;}
        }
        if (b[k]!=0)
           {  k+=1;}
    }
    
    s=(b[0]-2)*(k-2);
    printf("%d",s);
	return 0;
}

