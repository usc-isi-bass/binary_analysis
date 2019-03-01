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
	int i,j,n,m;
	char s[33];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&s);
		m=strlen(s);
		if(s[m-1]=='g'){
			s[m-3]='\0';
			printf("%s\n",s);
		}else if(s[m-1]=='y'){
			s[m-2]='\0';
			printf("%s\n",s);
		}else if(s[m-1]=='r'){
			s[m-2]='\0';	
			printf("%s\n",s);
		}
	}
	return 0;
}