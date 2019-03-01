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


struct student{
	int num;
	int chinese;
	int math;
};

void main()
{
	int n,s[100000];
	scanf("%d",&n);
	int i,j,max=0,t;
	struct student a[100000];
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a[i].num,&a[i].chinese,&a[i].math);
		s[i]=a[i].chinese+a[i].math;
	}
	for(i=0;i<3;i++){
		for(j=0;j<n;j++){
			if(s[j]>max){
				max=s[j];t=j;}}
		printf("%d %d\n",a[t].num,max);
			max=0;s[t]=0;}
	
}
