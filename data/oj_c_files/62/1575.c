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

int  main()
{
	char s[301];
	char *p=s;
	gets(s);
	cout<<*p;
	for(int i=1;i<strlen(s);i++)
	{
		if(p[i]==' '&&p[i-1]==' ')
		continue;
		else
		cout<<p[i];
	}
	//while(1);
	return 0;
}
			
			
