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

struct stu
{	int id;                
	int chn;
	int math;
	int sum;
};
int main()
{	struct stu indi[100000];
	int n,i,j,rank[3];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&indi[i].id,&indi[i].chn,&indi[i].math);
		indi[i].sum=indi[i].chn+indi[i].math;
	}
	for(i=0;i<3;i++){
		rank[i]=0;
		for(j=0;j<n;j++){
			if(indi[j].sum>indi[rank[i]].sum)
				rank[i]=j;
		}
		indi[rank[i]].sum=-indi[rank[i]].sum;
	}
	for(i=0;i<3;i++){
		printf("%d %d\n",indi[rank[i]].id,-indi[rank[i]].sum);
	}


	return 0;
}
