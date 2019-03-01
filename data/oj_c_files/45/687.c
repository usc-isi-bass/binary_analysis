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
	char a[50],b[50];
	int lena,i=0,k,t;
	scanf("%s%s",a,b);
	lena=strlen(a);
	while(1)
	{
		if(a[0]!=b[i])
		{
			i++;
			continue;
		}
		t=0;
		for(k=1;k<lena;++k)
			if(a[k]!=b[i+k])
				t=1;
		if(t)
			continue;
		printf("%d",i);
		break;
	}
}
		
