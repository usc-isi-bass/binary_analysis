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
	char a[10],b[10];
	int numa[130]={0},numb[130]={0},i,flag=1;
	scanf("%s %s",&a,&b);
	for(i=0;i<(int)strlen(a);i++)
		numa[a[i]]++;
	for(i=0;i<(int)strlen(b);i++)
		numb[b[i]]++;
	for(i='A';i<'z';i++)
		if(numa[i]!=numb[i])
		{
			flag=0;
			break;
		}
		if(flag)
			printf("YES");
		else printf("NO");
		return 0;
}