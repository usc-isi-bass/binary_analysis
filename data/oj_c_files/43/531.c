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


int main(int argc, char* argv[])
{
	int m,i,j,p,q;
	scanf("%d",&m);
	
	for(j=3;j<=m/2;j++){
		p=0;
	
		for(i=2;i<j;i++){if(j%i!=0)p=p+1;}
		if(p==j-2){q=0;
		
		for(i=2;i<m-j;i++){if((m-j)%i!=0)q=q+1;}
			if(q==m-j-2)
				printf("%d %d\n",j,m-j);}}
	
	return 0;
}
