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
	int i,n,j,flag;
	char t;
	char c[21]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
		flag=1;
		j=1;
		t=c[0];
		if((t>='a'&&t<='z')||(t>='A'&&t<='Z')||t=='_')
			while((t=c[j])!='\0')
				if((t>='a'&&t<='z')||(t>='A'&&t<='Z')||t=='_'||(t>='0'&&t<='9'))j++;
				else {flag=0;break;}
		else {flag=0;}
		if(flag==1)printf("yes\n");
		else printf("no\n");
	}
}