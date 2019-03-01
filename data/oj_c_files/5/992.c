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
	char x[1000],y[1000];
	int i,lengthx,lengthy,same=0;
	float rate,a;
	scanf("%f",&rate);
	scanf("%s %s",x,y);
	lengthx=strlen(x);
	lengthy=strlen(y);
	if(lengthx!=lengthy)printf("error\n");
	else
	{
		for(i=0;i<lengthx;i++)
		{
			if((x[i]!='A'&&x[i]!='G'&&x[i]!='C'&&x[i]!='T')||(y[i]!='A'&&y[i]!='G'&&y[i]!='C'&&y[i]!='T'))
				break;
		}
		if(i<lengthx-1)printf("error\n");
		else
		{
	       for(i=0;i<lengthx;i++)
		       if(x[i]==y[i])same++;
	       a=(float)same/(float)lengthx;
	       if(a>rate)printf("yes\n");
	       else printf("no\n");
		}
	}
	return 0;
}