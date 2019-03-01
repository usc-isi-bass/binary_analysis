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
struct student
{	char as[10];
	int ag;
};
struct student stu[100];
struct student st[100];
struct student temp;
int n,i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s %d",stu[i].as,&stu[i].ag);
j=0;
for(i=0;i<n;i++){
	if(stu[i].ag>59){
		st[j]=stu[i];
		stu[i].ag=0;
		j++;
	}
}
for(k=1;k<j;k++){
	for(i=0;i<j-k;i++){
		if(st[i].ag<st[i+1].ag){
			temp=st[i];
			st[i]=st[i+1];
			st[i+1]=temp;
		}
	}
}
for(i=0;i<j;i++)
printf("\n%s",st[i].as);
for(i=0;i<n;i++)
	if(stu[i].ag!=0)
	printf("\n%s",stu[i].as);
return 0;
}




