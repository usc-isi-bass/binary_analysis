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
	char input[10000][300];
	char output[10000][300];
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",input[i]);
	    int m=strlen(input[i]);
		  for(int j=0;j<m;j++){
			if(input[i][j]=='A')
				output[i][j]='T';
			else if(input[i][j]=='T')
				output[i][j]='A';
			else if(input[i][j]=='C')
				output[i][j]='G';
			else if(input[i][j]=='G')
				output[i][j]='C';
		}
		printf("%s\n",output[i]);
	}
	getchar();
	getchar();
		return 0;
}