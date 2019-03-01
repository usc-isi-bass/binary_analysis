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
        int n,k,i,j,a[100000],*p;
        scanf("%d",&n);
        for (i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&k);
        p=a;
        for (i=0;i<n;i++)
        {
                if(*(p+i)==k)
                {
                        for(j=1;i+j<n;j++)
                        {
                                if(*(p+(i+j))!=k) {*(p+i)=*(p+(i+j));*(p+(i+j))=k;break;}
                        }
                }
                if(*(p+i)==k) break;
        }
        for (j=0;j<i-1;j++)
        printf("%d ",*(p+j));
        printf("%d",*(p+(i-1)));
}
