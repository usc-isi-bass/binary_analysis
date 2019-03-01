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
	int i, j, k;
	char a[81], b[81];
gets(a);
gets(b);
for(i=0;a[i];i++)
{
	if(a[i]>='A'&&a[i]<='Z')
	{
		a[i]=a[i]-'A'+'a';
	}
}
for(i=0;b[i];i++)
{

	if(b[i]>='A'&&b[i]<='Z')
	{
		b[i]=b[i]-'A'+'a';
	}
}

k=strcmp(a,b);
if(k>0)
{
	printf(">");
}
else if(k<0)
{

	printf("<");
}
else
{
	printf("=");

}
return 0;
}
