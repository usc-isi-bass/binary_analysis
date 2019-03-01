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

int reserve(int *self,int start,int end)
{
    int temp;
    if(end-start>0)
    {
        temp=self[start];
        self[start]=self[end];
        self[end]=temp;
        reserve(self,start+1,end-1);
    }
}

void main()
{
    int n,m,i;
    int num[50];
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++)
        scanf("%d",&num[i]);
    reserve(num,0,n-1);
    reserve(num,0,m-1);
    reserve(num,m,n-1);
    printf("%d",num[0]);
    for (i=1;i<n;i++)
        printf(" %d",num[i]);
}

