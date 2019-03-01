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
	int j,n,i,zs[300],nzs[300],k=0,jihao[300];
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		jihao[i]=-100;
	}
	for (i=0;i<n;i++){
		scanf ("%d",&zs[i]);
	}
    for (i=n-1;i>0;i--){
        for (j=i-1;j>=0;j--){
			if (zs[i]==zs[j]){
			jihao[i]=i;
			break;
            }
		}
	}
	for (i=0;i<n;i++){
			if (i!=jihao[i]){
				nzs[k]=zs[i];
                k++;
            }
	}
	for (i=0;i<k-1;i++){
		printf ("%d,",nzs[i]);
	}
	printf ("%d",nzs[k-1]);
	return 0;
}