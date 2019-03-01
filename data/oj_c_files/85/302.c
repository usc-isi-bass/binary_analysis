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
	int n,i,len,j,t;
	char a[30];
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		t=1;
		scanf("%s",a);
		len=strlen(a);
		if(a[0]>='0'&&a[0]<='9')
			printf("no\n");
		else
		{
			for(j=0;j<len;++j)
				if(!(a[j]>='0'&&a[j]<='9'||a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z'||a[j]=='_'))
					t=0;
			if(t)
				printf("yes\n");
			else
				printf("no\n");
		}

			
	}


}
