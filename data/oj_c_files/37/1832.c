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
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[100000];
		scanf("%s",a);
		int s=0,t,l,j,k;
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			t=0;
			for(k=0;k<l;k++)
			if(a[j]==a[k])  t++;
			if(t==1)  
			{printf("%c\n",a[j]);
			break;}
			s++;
		}
		if(s==l)  printf("no\n");
	}

}