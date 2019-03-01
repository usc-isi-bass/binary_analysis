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

int aLoop[MAX_NUM+10];
main()
{
	int n,m,i;
	while(1){
		scanf("%d%d",&n,&m);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			aLoop[i]=i+1;
		int nPtr=0;
		for(i=0;i<n;i++){

			int nCounted=0;
			while(nCounted<m){
				while(aLoop[nPtr]==0)
					nPtr=(nPtr+1)%n;
				nCounted++;
				nPtr=(nPtr+1)%n;
			}
			nPtr--;
			if(nPtr<0)
				nPtr=n-1;
			if(i==n-1)
				printf("%d\n",aLoop[nPtr]);
			aLoop[nPtr]=0;
		}
	}
}
