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
	char ss[100]={0},dd[100]={0};
	scanf("%s %s",&ss,&dd);
	int k=strlen(dd);
	int l=strlen(ss);
	for(int i=0;i<=k;i++)
	{
		
		if(ss[0]==dd[i]&&ss[1]==dd[i+1]&&ss[l-1]==dd[l-1+i])
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
