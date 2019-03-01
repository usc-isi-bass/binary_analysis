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


void main()
{
	char s[100][100],a[100],b[100];
	int i=0,k;

	do
	{
	scanf("%s",s[i]);
	i++;
	}
	while(getchar()!='\n');

	k=i;

	scanf("%s %s",a,b);

	for(i=0;i<k-1;i++)
		if(strcmp(s[i],a)==0) printf("%s ",b);
		else printf("%s ",s[i]);
	if(strcmp(s[i],a)==0) printf("%s",b);
	else printf("%s",s[i]);

}


