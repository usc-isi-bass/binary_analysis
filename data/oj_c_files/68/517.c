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
	int i,n,p,m,k,a[50000],q=0,r,j,w;
    scanf("%d",&n);

    for(k=3;k<=n;k++)
	{
	    m=sqrt(k)+1;
		p=0;
		for(i=2;i<m;i++)
		{
			if(k%i==0)
			p=p+1;
		}
		if(p==0)
		{
			a[q]=k;
			q=q+1;
		
		}
	}
for(w=6;w<=n;w=w+2)
{
 
		printf("%d=",w);
		for(i=0;i<q;i++)
		{
			r=w-a[i];
			m=sqrt(r)+1;
			p=0;
			for(j=2;j<m;j++)
			{
				if(r%j==0)
				p=p+1;
			}
			if(p==0)
			{
			printf("%d+%d\n",a[i],r);
			break;
			}
		}
	
}
	
}