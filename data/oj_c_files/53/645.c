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
    int i,j,k,n,a[300],b[300];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&*(a+i));
    }
    *b=*a;j=1;
    for (i=0;i<n;i++)
    {
        for (k=0;k<j;k++)
        {
        	if (*(a+i)==*(b+k)) break;
        }
        if (k==j) {*(b+j)=*(a+i);j++;}        
    }
    
    for (i=0;i<j-1;i++)
    {printf("%d,",*(b+i));}
    printf("%d",*(b+j-1));
}