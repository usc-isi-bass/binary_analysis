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

int legal(char d[20]){
	int i;
	if(d[0]>='0'&&d[0]<='9')
		return 0;
	for(i=0;d[i];i++){
		if(!(d[i]==' '||d[i]>='A'&&d[i]<='Z'||d[i]>='a'&&d[i]<='z'||d[i]>='0'&&d[i]<='9'||d[i]=='_')){
			return  0;
		}
	}
	return 1;
}
	
int main()
{
	int i,t,n;
	char s[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		t=legal(s[i]);
	
		if(t==0)
			printf("no\n");
		else
			printf("yes\n");
	}
		return 0;	
}

