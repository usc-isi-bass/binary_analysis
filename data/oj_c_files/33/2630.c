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
	char jj[1000][300];
	int i,n,len[1000],j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",jj[i]);
		len[i]=strlen(jj[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<len[i];j++){
			if(jj[i][j]=='A')
				jj[i][j]='T';
			else if(jj[i][j]=='T')
				jj[i][j]='A';
			else if(jj[i][j]=='C')
				jj[i][j]='G';
			else if(jj[i][j]=='G')
				jj[i][j]='C';
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",jj[i]);
	}
	

	return 0;


}