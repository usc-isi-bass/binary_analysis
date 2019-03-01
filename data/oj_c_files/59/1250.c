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

int main (){
	char c[102][102]={' '};
	int i,j,n,m,r=0,k=1;
	scanf ("%d\n",&n);

	for (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
			  scanf ("%c\n",&c[i][j]);
		}
	}
	
	
	scanf ("%d",&m);
	
	

	while (k<=m){
    for  (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
			if (c[i][j]==','){
				c[i][j]='@';
			}
		}
	}
    for  (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
			if (c[i][j]=='@') {
				if (c[i-1][j]=='.')  c[i-1][j]=',';
				if (c[i+1][j]=='.')  c[i+1][j]=',';
				if (c[i][j-1]=='.')  c[i][j-1]=',';
				if (c[i][j+1]=='.')  c[i][j+1]=',';
					
			}   
		}
	}
	k++;
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (c[i][j]=='@') {
				r++;
				
			}
			;
		}
	}
	printf ("%d",r);
	return 0;
}
