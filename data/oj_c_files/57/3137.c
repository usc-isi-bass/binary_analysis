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
	char a[50][50];
	int n,i,len;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%s",a[i-1]);
	for(i=1;i<=n;i++)
	{
		len=strlen(a[i-1]);
		if((a[i-1][len-1]=='r')&&(a[i-1][len-2]=='e')) a[i-1][len-2]=0;
		else if((a[i-1][len-1]=='y')&&(a[i-1][len-2]=='l')) a[i-1][len-2]=0;
		else if((a[i-1][len-1]=='g')&&(a[i-1][len-2]=='n')&&(a[i-1][len-3]=='i')) a[i-1][len-3]=0;
	}
	for(i=1;i<=n;i++)
		printf("%s\n",a[i-1]);
    return 0;
}






