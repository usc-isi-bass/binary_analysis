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

int p=0;
int move(int M,int N){
	if(M==0||N==1)
	return 1;
	else if(M<N)
	 return(move(M,M));
	else if(M>=N)
     return (move(M-N,N)+move(M,N-1));
}


int main(){
	int i,p,M[20],N[20],K[20];
	scanf("%d",&p);
    for(i=0;i<p;i++)
	{
		scanf("%d%d",&M[i],&N[i]);
		K[i]=move(M[i],N[i]);
		printf("%d\n",K[i]) ;
         }
         return 0;
	}