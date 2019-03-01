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

void main ()
{
	int sl,al,i,j,flag=0;
	char s[256],a[256],b[256];
	scanf("%s %s %s",s,a,b);
	sl=strlen(s);
	al=strlen(a);
	for(i=0;i<sl;i++)
	{
		if(s[i]==a[0])
		{
			for(j=0;j<al;j++)
			{
				if(s[i+j]==a[j]) flag=1;
				else flag=0;continue;
			}
			if(flag==1)
			{
				for(j=0;j<al&&s[i+j]==a[j];j++)
				s[i+j]=b[j];break;
			}
		}
	}
	printf("%s\n",s);
}

		

				
					

			
			