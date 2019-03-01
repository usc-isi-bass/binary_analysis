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
	char a[101],sh[101];
	int shang,ys,i,l,ws=0;
	gets(a);
	l=strlen(a);
	shang=0;
	ys=0;
	for(i=0;i<=l-1;i++)
	{
		shang=(ys*10+a[i]-'0')/13;
		if((shang==0&&ws!=0)||shang!=0)
		{
			sh[ws]=shang+'0';
			ws++;
			ys=(ys*10+a[i]-'0')%13;
		}
		else
		{
			ys=ys*10+a[i]-'0';
		}
	}
	if(ws==0)
	{
		sh[ws]='0';
		ws++;
	}
	sh[ws]='\0';
	puts(sh);
	printf("%d",ys);
	return 0;
}
	