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
	int n,i,j,r;
	int t=0;
	int gy[100];
	int dy[100];
	int tx[100];
	scanf ("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&gy[i],&dy[i]);
		if(gy[i]>=90&&gy[i]<=140&&dy[i]>=60&&dy[i]<=90){
			t++;
			tx[i]=t;
		}
		else{
			t=0;
			tx[i]=t;
		}
	}
	for(j=n-1;j>0;j--){
		for(r=0;r<j;r++){
			if(tx[r]<tx[r+1]){
				int tmp;
				tmp=tx[r+1];
				tx[r+1]=tx[r];
				tx[r]=tmp;
			}
		}
	}
	printf("%d",tx[0]);
return 0;
}

