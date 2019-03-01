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
int n,k,a,h;
int sz[1000];
h=0;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
   scanf("%d ",&sz[i]);
}
for(int j=0;j<n;j++){
	for(int r=0;r<n;r++){
		a=sz[j]+sz[r];
		if(a!=k){
		   h++;
		}
			
	}
}
if(h==n*n){
	printf("no");
}else{
	printf("yes");
}



	return 0;
}
