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
	int i,j,ls,la,p,f;
	char s[201],a[101],b[101];

	gets(s);
	ls=strlen(s);
	gets(a);
	la=strlen(a);
	gets(b);

	s[ls]=' ';
	s[ls+1]='\0';

	i=-1;
    while (i<ls)
    {
		i++;
		p=i;
		while (s[i]!=' ')
			i++;
        if (i-p!=la)
		{
			for (j=p;j<i;j++)
				printf("%c",s[j]);
			if (i!=ls) printf(" ");
			else 
			{
				printf("\n");
				break;
			}
		}
		else 
		{
			f=1;
			for (j=0;j<la;j++)
				if (s[p+j]!=a[j])
				{
					f=0;
					break;
				}
				if (f==1)
				{
					printf("%s",b);
					if (i!=ls) printf(" ");
			       else 
			{
				printf("\n");
				break;
			}
				}

			else
			{
			for (j=p;j<i;j++)
				printf("%c",s[j]);
			if (i!=ls) printf(" ");
			else {
				printf("\n");
				break;
			}
			}
			}
		};
	
	return 0;
}