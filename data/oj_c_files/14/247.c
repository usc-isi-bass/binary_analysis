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

void main(int argc, char* argv[])
{
struct student
{
    int No;
	int chinese;
	int math;
	int total;
} stu[100000];
    int i,j,x,y,z,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d",&stu[i].No);
        scanf("%d",&stu[i].chinese);
        scanf("%d",&stu[i].math);
		stu[i].total=stu[i].chinese+stu[i].math;
	}
	for(j=0;j<3;j++){
    x=0;
	for(i=0;i<n;i++){
			if(	stu[i].total>x){
				x=stu[i].total;
				y=stu[i].No;
				z=i;
			}
	}
	printf("%d %d\n",y,x);
	stu[z].total=0;
	}
}
