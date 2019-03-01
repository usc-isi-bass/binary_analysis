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
	char st[1000],temp;
	scanf("%s",st);
	int t,len=strlen(st);
	int i,x=0;
	for(t=0;t<len;t++)if(st[t]>='a'&&st[t]<='z')st[t]=st[t]-'a'+'A';
	for(t=0;x<len;t++){
		temp=st[x];
		for(i=0;;i++){
			if(st[x+i]!=st[x+i+1])break;
		}
		printf("(%c,%d)",st[x],i+1);
		x=x+i+1;
	}
	return 0;
}