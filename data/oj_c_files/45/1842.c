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
	char a[50],b[50];
	int i,lena,lenb;
	scanf("%s",a);
	scanf("%s",b);
	lena=strlen(a);
	lenb=strlen(b);
    for(i=0;i<=lenb-lena;i++)
	{
		if(b[i]==a[0]&&b[i+1]==a[1]&&b[i+lena-1]==a[lena-1])
		{printf("%d",i);
		break;}
	}
return 0;
}