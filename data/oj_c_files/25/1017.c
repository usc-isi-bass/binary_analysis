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

int main(void)
{
	char res[32]="0000000000000000000000000000001";
	int n,i=0,j,c=0,t;
	scanf("%d",&n);
	for(;i<n;i++)
	{
		for(j=30;j>=0;j--)
		{
			t=(res[j]-'0')*2+c;
			res[j]=t%10+'0';
			c=t/10;
		}
	}
	for(i=0;i<31&&res[i]=='0';i++);
	for(j=i;j<31;j++)res[j-i]=res[j];res[j-i]='\0';
	printf("%s\n",res);
	return 0;
}