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
	int n,i,j=0;
	char s[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		j=0;
		scanf("%s",s);
	while(s[j]!='\0')
	{
		if(s[j]=='A')printf("T");
		if(s[j]=='T')printf("A");
		if(s[j]=='G')printf("C");
		if(s[j]=='C')printf("G");
		j++;
	}
	printf("\n");
}
	return 0;
}
		
