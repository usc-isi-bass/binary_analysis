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

int compare(const void*a,const void*b)
{
	return *(int*)a-*(int*)b;
}

int main()
{
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	int k1=strlen(s1),k2=strlen(s2);
	if (k1!=k2)
	{
		printf("NO\n");
		return 0;
	}
	int a[100]={0},b[100]={0};
	int i;
	for(i=0;i<k1;i++)
	{
		a[i]=s1[i]-'0';
		b[i]=s2[i]-'0';
	}
	qsort(a,k1,4,compare);
	qsort(b,k1,4,compare);
	int count=0;
	for(i=0;i<k1;i++)
	{
		if(a[i]==b[i])
			count++;
	}
	if(count==k1)
		printf("YES\n");
	else
		printf("NO\n");






	

	
	return 0;
}
