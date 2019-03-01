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
    int n,i,j,t;
	char a[21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		j=0;
		t=0;
		while(a[j]!='\0')
		{
			if(!((a[j]=='_')||((a[j]<='z')&&(a[j]>='a'))||((a[j]<='Z')&&(a[j]>='A'))||((a[j]<='9')&&(a[j]>='0'))))
				t=1;
			j++;
		}
		t=t+((a[0]<='9')&&(a[0]>='0'));
		if(t==0)
			printf("yes\n");
		else
			printf("no\n");
	}
}
