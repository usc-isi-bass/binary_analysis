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
	char s[500];
	int i,j,p,q,l,t=1;
	gets(s);
	l=strlen(s);
	i=0;j=1;p=0;q=0;
	for(j=1;j<l;j++){
	
		for(i=0;i<=l-j;i++){
			for(p=i,q=i+j;p<=q;p++,q--){
				if(s[p]==s[q])t=t*1;
				else t=t*0;}
			if(t==1){
				for(t=i;t<i+j;t++){printf("%c",s[t]);}printf("%c\n",s[i+j]);}t=1;}}}