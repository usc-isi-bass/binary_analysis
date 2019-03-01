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
	int n,sza[50000],szb[50000],i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&sza[i],&szb[i]);}
	int e,f,k,a=0,b;
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(sza[i]>sza[i+1]){
	e=sza[i+1];
	f=szb[i+1];
	sza[i+1]=sza[i];
	szb[i+1]=szb[i];
	sza[i]=e;
	szb[i]=f;
	}}}
	max=szb[0];
	for (i=1;i<n;i++)
        if (sza[i]<=max)
        {
            if (max<szb[i])
                max=szb[i];
        }else break;
    if (i<n)printf("no\n");
    else printf("%d %d\n",sza[0],max);
return 0;



}