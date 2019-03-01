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
	int n,sz[1000],k,x,i,s;
     scanf("%d",&n);
	 scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
 
    for(x=0;x<n;x++){
		for(i=0;i<n;i++){
			s=sz[x]+sz[i];
			if(s==k){
				printf("yes");
			break;}
	}
		if(s==k){
			break;}
	}
	if(s!=k){
		printf("no");}
	

	return 0;
	}
