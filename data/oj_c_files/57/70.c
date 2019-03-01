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

void delend(char str[])
{
	int l;
	char *p;
	p=str;
	l=strlen(str);
	p=p+l-1;
	switch(*p)
	{
	case 'r':
		
			*p='\0';
			*(p-1)='\0';
			break;
		
	case 'y':
		
			*p='\0';
			*(p-1)='\0';
			break;
		
	case'g':
		
			*p='\0';
			*(p-1)='\0';
			*(p-2)='\0';
			break;
	}
		
}
main()
{
	int n,i;
	char str[50],put[50][50];
	scanf("%d",&n);
    for(i=0;i<=n-1;i++)
	{
		scanf("%s",str);
		delend(str);
		strcpy(put[i],str);
	}
    for(i=0;i<=n-2;i++)
    {
		printf("%s\n",put[i]);
	}
    	printf("%s\n",put[n-1]);
}

	    
		 