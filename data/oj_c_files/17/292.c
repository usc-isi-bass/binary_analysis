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
	int i,j,p[109];
	char s[110],t[110];
	while(scanf("%s",s)!=EOF){
	for(i=0;i<109;i++)
		p[i]=0;
	strcpy(t,s);
	for(i=0,j=0;i<strlen(s);i++){
		if(s[i]=='(')
			p[j++]=i;
		if(s[i]==')'&&j>0)
			s[p[j---1]]=s[i]=' ';
		if(s[i]!='('&&s[i]!=')')
			s[i]=' ';
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]=='(')
			s[i]='$';
		if(s[i]==')')
			s[i]='?';
	}
	printf("%s\n%s\n",t,s);
	}
}
