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

int judge(char c[])
{
	int j=1,k=1;
	if((c[0]<='Z'&&c[0]>='A')||(c[0]<='z'&&c[0]>='a')||c[0]=='_')
		while(c[k]!='\0')
			if((c[k]<='Z'&&c[k]>='A')||(c[k]<='z'&&c[k]>='a')||c[k]=='_'||(c[k]<='9'&&c[k]>='0'))
			k++;
			else {j=0;break;}
	else j=0;
	return(j);
}
void main()
{
	int i,n;
	char c[21]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
		if(judge(c)==1)printf("yes\n");
		else printf("no\n");
	}
} 