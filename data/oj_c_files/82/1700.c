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
	int n,sp[101],dp[101],d[101],h=0,max=0;//ps=systolic pressure,pd=diabolic pressure
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&sp[i],&dp[i]);
		if(sp[i]>=90&&sp[i]<=140&&dp[i]>=60&&dp[i]<=90){
			h++;
			d[i]=h;
		}
		else
			d[i]=h=0;
	}

//now for the maximum of duration//

	for(j=1;j<=n;j++){
		if(max>=d[j])
			continue;
		else 
			max=d[j];
	}
	printf("%d\n",max);
}