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

struct Student{
		int no;
		int chinese;
		int math;
		int total;
	};
int main()
{
	struct Student stu[100000],t;
	int n,i,j,max,order;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].no,&stu[i].chinese,&stu[i].math);
		stu[i].total=stu[i].chinese+stu[i].math;
	}
	for(i=0;i<3;i++){
		max=stu[i].total;
		order=i;
		for(j=i+1;j<n;j++){
			if(stu[j].total>max){
				max=stu[j].total;
				order=j;
			}
		}
		if(order!=i){
			t=stu[i];stu[i]=stu[order];stu[order]=t;
		}
		printf("%d %d\n",stu[i].no,stu[i].total);
	}
	return 0;
}