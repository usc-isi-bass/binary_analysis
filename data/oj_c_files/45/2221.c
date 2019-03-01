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
	char  s[256],zfc[256][256],w[256];
    scanf("%s",s);
	scanf("%s",w);
	int n=strlen(s),m=strlen(w),i=0,j=0;
	for(;i<=m-n;){
		for(j=0;j<n;j++){	
			 zfc[i][j]=w[i+j];
		}
		zfc[i][j]='\0';
		i++;
	}
	for(j=0;j<i;j++){
		if(strcmp(zfc[j],s)==0){
			printf("%d\n",j);
			break;}
	}
	return 0;
}
