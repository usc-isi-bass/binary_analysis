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
	int x,y,c;
    scanf("%s%s",a,b);
	x=strlen(a);
	y=strlen(b);
	for(int i=0;i<y;i++)
	{
		if(a[0]-'0'==b[i]-'0')
		{	
			printf("%d",i);
			break;
			for(int j=0;j<x;j++)
			{
				if(a[j+1]-'0'==b[i+j+1]-'0')continue;
				else {c=0; break;}
			}

		}
		else continue;
	}
}