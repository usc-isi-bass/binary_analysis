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
	char s[100];
	int i,j,k,x,n;
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
	scanf("%s",s);
	k=strlen(s);
	if(s[k-1]=='r'||s[k-1]=='y')
	k=k-2;
	else if(s[k-1]=='g')
	k=k-3;
	for(i=0;i<k;i++)
	printf("%c",s[i]);
	printf("\n");
}
}