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
	int i,j;//????
	int x;//?????
	int y; //?????
	int t=0;//????????
	int a[15]={0};//??x???????
	int b[15]={0};//??y???????
	int c[15]={0};//????xy?????????
	scanf("%d%d",&x,&y);
	a[0]=x;
    b[0]=y;
	for(i=0;i<14;i++)
	{
		a[i+1]=a[i]/2;
		b[i+1]=b[i]/2;
	}
		for(i=0;a[i]!=0;i++)
		    for(j=0;b[j]!=0;j++)
				if(a[i]==b[j])
			       c[i]=a[i];
				for(i=0;i<15;i++)
					if(t<c[i])
						t=c[i];
					printf("%d\n",t);
}		
