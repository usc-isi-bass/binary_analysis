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
	char a[100][21];
	int i,n,j,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++){
		b=strlen(a[i]);
		for(j=0;j<b;j++){
			if(!((a[i][j]=='_')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='0'&&a[i][j]<='9'&&j!=0))){
				a[i][0]='n';
				a[i][1]='o';
				a[i][2]='\0';
				break;
			}
			
		}

		
	}
	for(i=0;i<n;i++){
	if(strcmp(a[i],"no")!=0){
		a[i][0]='y';
		a[i][1]='e';
		a[i][2]='s';
		a[i][3]='\0';
	}
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
			
