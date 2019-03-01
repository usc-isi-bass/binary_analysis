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
	int t,time,flag=0,i,j;
	char a[100000],first=0;
	void yesorno(int Flag,char First);
 	scanf("%d",&t);

	for(time=0;time<t;time++)
	{
		scanf("%s",&a);
		if(a[1]=='\0'){
			printf("%c\n",a[0]);
			continue;
		}
		for(i=0;a[i]!='\0';i++){
			for(j=0;a[j]!='\0';j++){
				if(i==j) continue;
				if(a[j]==a[i]) break;
				if(a[j+1]=='\0'){
					first=a[i];
					flag=1;
					goto print;
				}
			}
		}
print:;
		yesorno(flag,first);
		first=flag=0;
	}
}
void yesorno(int Flag,char First)
{
	if(Flag==0) printf("no\n");
	else printf("%c\n",First);
}
