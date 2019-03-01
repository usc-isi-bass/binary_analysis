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

int main(){
	char s[160],ans[160];
	int st[160],i,si;
	for (;scanf("%s",s)!=EOF;){
		for (ans[0]=' ',si=i=0;i<strlen(s);si-=(s[i]==')'&&si>0),ans[++i]=' ')
			if (s[i]=='(') st[si++]=i;
			else if (s[i]==')')	ans[i]=(si>0)?' ':'?';			
		for (ans[strlen(s)]='\0',i=0;i<si;i++) ans[st[i]]='$';
		printf("%s\n%s\n",s,ans);
	}
}