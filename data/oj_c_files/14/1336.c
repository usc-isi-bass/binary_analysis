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

struct student
{
	int num;
	int yu;
	int shu;
	int sum;
} stu[100000];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].num, &stu[i].yu, &stu[i].shu);
		stu[i].sum=stu[i].shu+stu[i].yu;
	}
	int k,e;
	for(k=0;k<3;k++){
		for(i=n-2;i>=k;i--){
			if(stu[i].sum<stu[i+1].sum){
				e=stu[i].sum;
				stu[i].sum=stu[i+1].sum;
				stu[i+1].sum=e;
				e=stu[i].num;
				stu[i].num=stu[i+1].num;
				stu[i+1].num=e;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%d %d\n",stu[i].num,stu[i].sum);
	}
	return 0;
}
