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
	int a[100];
	char s1[100],s2[100];
	int n;
	scanf("%d", &n);
	int i;
	for (i=0;i<n;i++)
	{
        scanf("%s%s",s1,s2);
		int j=strlen(s1);
		int k=strlen(s2);
		int w,e;
		for (w=0;w<100;w++) a[w]=0;
		for (w=j,e=k;w>0;w--,e--)
		{
			if (e>0) a[w-1]=s1[w-1]-s2[e-1];
			else a[w-1]=s1[w-1]-'0';
			if (a[w-1]<0)
            {
                         s1[w-2]=s1[w-2]-1;
                         a[w-1]+=10;
            }
		}
		for (w=0;a[w]==0;w++);
		for (;w<j;w++) printf("%d",a[w]);
printf("\n");
	}
	return 0;
}
