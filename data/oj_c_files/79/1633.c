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
    int m[100],n[100],s=0;
	int index=0;//????
    int loc;//????
    int t=0;
    int p;//?????
    for (s=0;s<=1000;s++) 
	{
		scanf("%d%d",&m[s],&n[s]);
		if ((m[s]==0)&&(n[s]==0)) break;
		int a[100][1000];
		for(int i=0;i<m[s];i++)
		{
			a[s][i]=1;
		}
        t=0;
	    index=0;
	    p=m[s];
        while(p>0)
		{
			if(a[s][index]==1)
			{   
                 ++t;
                 if(t%n[s]==0)
				 {
                       a[s][index]=0;
                       loc=index;
                       p--;
				 }
			}
            if(index < m[s]-1)
               index++;
            else
               index=0;
		}
        printf("%d\n",loc+1);
	}
	return 0;
}

