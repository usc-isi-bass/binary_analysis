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
	for (int i=0;;i++)
	{ 
    int m,n;
   scanf("%d%d",&m,&n);
    if (m==0)
    break;
    else
    {
	int a[1000];
    for(int i=0;i<m;i++)
        a[i]=1;
    int index=0;
    int loc;
    int t=0;
    int p=m;
    while(p>0)
    {
        if(a[index]==1)
        {    
            ++t;
            if(t%n==0)
            {
                a[index]=0;
                loc=index;
                p--;
            } 
        }
        if(index < m-1)
            index++;
        else
            index=0;
    }
    printf("%d\n",loc+1);
   }
   }
}