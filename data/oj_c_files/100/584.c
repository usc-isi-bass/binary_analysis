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
	char str[301],cha[26]={0},flag;
	int i,len,l;
	scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l;i++){
		if(str[i]>='a'&&str[i]<='z')
			cha[str[i]-97]++;
	}

	flag = 0;
	for(i=0;i<26;i++){
		if(cha[i]){
			printf("%c=%d\n",i+97,cha[i]);
			flag = 1;
		}
	}
	if(flag==0)
		printf("No\n");

	return 0;
}
