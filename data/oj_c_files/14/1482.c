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

struct grade
{
    int No;
	int chinese;
	int math;
	int sum;
}student[100000],s;
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %d %d",&student[i].No,&student[i].chinese,&student[i].math);
    student[i].sum=student[i].chinese+student[i].math;
	}
    for(i=0;i<3;i++){
		for(j=i+1;j<n;j++){
			if(student[i].sum<student[j].sum){
			    s=student[i];
				student[i]=student[j];
				student[j]=s;
			} 
		}
	}
	for(i=0;i<3;i++){
	printf("%d %d\n",student[i].No,student[i].sum);
	}
    return 0;
}