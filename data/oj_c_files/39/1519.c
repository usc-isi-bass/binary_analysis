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
	int n;
	scanf("%d\n",&n);
		char s[20],t[20];
		int a,b,e,m,sum=0,max=0;
		char c,d;
	for(int i=0;i<n;i++)
	{
		m=0;
		scanf("%s %d %d %c %c %d",s,&a,&b,&c,&d,&e);
		if(a>80&&e>=1)
			m=m+8000;
		if(a>85&&b>80)
			m=m+4000;
		if(a>90)
			m=m+2000;
		if(a>85&&d=='Y')
			m=m+1000;
		if(b>80&&c=='Y')
			m=m+850;
		if(m>max)
		{
			max=m;
                            int j;
			for(j=0;s[j]!='\0';j++)
			{
				t[j]=s[j];
			}
                            t[j]='\0';
					}

	sum=sum+m;
	}printf("%s\n%d\n",t,max);
	printf("%d",sum);
	return 0;
}