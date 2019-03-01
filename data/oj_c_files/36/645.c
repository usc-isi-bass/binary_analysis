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


struct letter
{
	char name;
	int times;
}leta[57],letb[57];

int main()
{
	int i,lena,lenb,t=0;
	char a[30]={0},b[30]={0};
	for(i=0;i<57;i++)
	{
		leta[i].name='a'+i;letb[i].name='a'+i;
		leta[i].times=0;letb[i].times=0;
	}
	scanf("%s %s",a,b);
	lena=strlen(a);lenb=strlen(b);
	if(lena!=lenb)
	{
		printf("NO");
		return 0;
	}else
	{
		for(i=0;i<lena;i++)
		{
			leta[a[i]-65].times++;
			letb[b[i]-65].times++;
		}
		for(i=0;i<57;i++)
		{
			if(leta[i].times!=letb[i].times)
				t=1;
		}
		if(t==0)
			printf("YES");
		else
			printf("NO");
	}
}