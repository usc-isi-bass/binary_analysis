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
    char s[33],r[33];
	int i,n,j,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		l=strlen(s);
        for(j=0;s[j];j++){
			r[j]=s[j];
		}
		for(j=0;s[j];j++){
			if(s[j]=='e'&&s[j+1]=='r'&&j==l-1-1)
				r[j]='\0';
			if(s[j]=='l'&&s[j+1]=='y'&&j==l-1-1)
				r[j]='\0';
			if(s[j]=='i'&&s[j+1]=='n'&&s[j+2]=='g'&&j==l-1-2)
				r[j]='\0';
		}
		printf("%s\n",r);
	}
	return 0;
}