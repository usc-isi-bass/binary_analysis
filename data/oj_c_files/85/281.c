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
	char c[100][21];
	int i,j,n,b;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s",c[i]);
	for(i=0;i<n;i++) 
	{
		b=1;
		if(!(c[i][0]=='_'||(c[i][0]>='A'&&c[i][0]<='Z')||(c[i][0]>='a'&&c[i][0]<='z'))) b=0;
		for(j=1;j<strlen(c[i]);j++)
		{
			if(!(c[i][j]=='_'||(c[i][j]>='A'&&c[i][j]<='Z')||(c[i][j]>='a'&&c[i][j]<='z')||(c[i][j]>='0'&&c[i][j]<='9'))) {b=0;break;}
		}
		if(b==0) printf("no\n");
		else printf("yes\n");
	}
	getchar();
	
}
