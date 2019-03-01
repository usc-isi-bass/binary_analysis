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
    char s[100],a[100],b[100],t[100];
    int i,j;
    gets(s);
    gets(a);
	gets(b);
    for(i=0;i<strlen(s);i++)
    {
        j=0;
        while(s[i]!=' '&&s[i]!='\0')
			t[j++]=s[i++];
			t[j]='\0';
        if(strcmp(a,t)==0)
		{
			printf("%s",b);

		}
        else
        {
			printf("%s",t);
        }
 		if(i==strlen(s))
		{
			printf("\0");
		}
		else printf(" ");
	}
        return 0;
}