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
	char s[MAX],s0[MAX],t[MAX];
	int len,i,j;
	while(scanf("%s",s)!=EOF){
		len=strlen(s);
		strcpy(s0,s);
		for(i=0;i<len;i++)
			if(s0[i]==')'&&i>0)
				for(j=i-1;j>=0;j--)
					if(s0[j]=='('){
						s0[i]=' ';
						s0[j]=' ';
						break;
					}
			
		for(i=0;i<len;i++){
			if(s0[i]=='(')
				t[i]='$';
			else if(s0[i]==')')
				t[i]='?';
			else
				t[i]=' ';
		}

		printf("%s\n",s);
		for(i=0;i<len;i++)
			printf("%c",t[i]);
		putchar('\n');
	}
}