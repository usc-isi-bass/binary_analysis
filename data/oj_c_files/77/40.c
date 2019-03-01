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
	char ch[100];
	char male;
	int i;
	int len;

	gets(ch);
	len=strlen(ch);
	male=ch[0];
    for (i=1;i<len;i++)
	{
		if (ch[i]!=male)
		{
			int j=i;
			int n1=0,n2=0;

			for (;j>-1;j=j-1)
			{
				if(n1==n2&&ch[j-1]==male) {printf("%d %d\n",(j-1),i);break;}
				if(ch[j-1]==male) n1++;
				else n2++;
			}
		}
	}
}