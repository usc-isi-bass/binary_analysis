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
	char s[300],a[300],b[300];
	int x=0;
	gets(s);
	gets(a);
	gets(b);
	int sl=strlen(s);
	int al=strlen(a);
	int bl=strlen(b);
	for(int i=0;i<sl;i++)
	{
		if((a[0]==s[i]&&a[al-2]==s[i+al-2])&&x==0)
		{
            for(int w=0;w<bl;w++)
			{
				printf("%c",b[w]);
			}
            i+=al-1;
			x=1;
			
		}
        
        else
		{
			
				printf("%c",s[i]);
			    
		}
	}
		return 0;
}
	