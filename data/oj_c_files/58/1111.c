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
{	int n,len,i,j,count;
	int a=1,b=0;
	char *p;
	char zfc[81];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		count=0;
		gets(zfc);
		len=strlen(zfc);
		p=zfc;
		if(*p=='_'||(*p>='A'&&*p<='z')){
			for(p=zfc+1;p<zfc+len;p++){
				if(*p!='_'&&(*p<'0'||(*p>'9'&&*p<'A')||*p>'z')){
					printf("%d\n",b);
					break;
				}
				count++;
			}
			if(count==len-1)
				printf("%d\n",a);
		}
		else
			printf("%d\n",b);
	}
	return 0;
}