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
	int i,j,m;
	char a[1009];
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;)
	{
		int count=0;
		for(j=i;j<m;j++)
		{
			if(a[i]==a[j]||a[i]==(a[j]+'A'-'a')||a[i]==(a[j]-'A'+'a'))
			count++;
			else
			break;
		}
		if(a[i]<='Z'&&a[i]>='A')
		printf("(%c,%d)",a[i],count);
		else
		printf("(%c,%d)",a[i]+'A'-'a',count);
		i=i+count;
	}
}