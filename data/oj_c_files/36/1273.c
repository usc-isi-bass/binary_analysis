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
	int i,j,lena,lenb,t;
	char a[100]={0},b[100]={0};
	scanf("%s",a);
	scanf("%s",b);
	lena=strlen(a);
	lenb=strlen(b);
	if(lena==lenb)
	{
		for(i=0;i<lena;i++)
		{	
			t=0;
			for(j=0;j<lena;j++)
			{
				if(a[i]==b[j])
				{
					a[i]=0;
					b[j]=0;
					t=1;
					break;
				}
				if(t==1) break;
			}
			if(t==0) break;
		}
		if(t==0) printf("NO");
		else printf("YES");
	}
	else printf("NO");
}