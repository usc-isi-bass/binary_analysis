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
	int No;
	int Chinese;
	int math;
	int score;
}stu[100000];


int main(){
	int n,i,j,a,b;
	scanf("%d",&n);

         for(i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].No,&stu[i].Chinese,&stu[i].math);
		stu[i].score=stu[i].Chinese+stu[i].math;
	}
	
	for(j=n-1;j>n-4;j--){
	    for(i=0;i<j;i++){
	        if(stu[i+1].score<stu[i].score||stu[i+1].score==stu[i].score){
			a=stu[i+1].score;
			stu[i+1].score=stu[i].score;
			stu[i].score=a;
			b=stu[i+1].No;
			stu[i+1].No=stu[i].No;
			stu[i].No=b;
			}
		}
	}
	for(i=n-1;i>n-4;i--){
		printf("%d %d\n",stu[i].No,stu[i].score);
	}
	
      
	return 0;
}