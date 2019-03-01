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
	int chinese;
	int math;
	int total;
};

int main()
{
	int n;
	scanf("%d",&n);                     
	struct student *stu=(struct student *)malloc(sizeof(int)*4*n);   
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].math);
	}


	for(i=0;i<n;i++){
		stu[i].total=stu[i].chinese+stu[i].math;            
	}

	int t_1,t_2;
	int j,k;
	for(k=1;k<4;k++){
		for(j=0;j<n-k;j++){
			if(stu[j].total>=stu[j+1].total){                 
		    	         t_1=stu[j+1].total;
			         stu[j+1].total=stu[j].total;
			         stu[j].total=t_1;
				t_2=stu[j+1].num;
				stu[j+1].num=stu[j].num;
				stu[j].num=t_2;
			}
		}
	}

	for(i=n-1;i>n-4;i--){
		printf("%d %d\n",stu[i].num,stu[i].total);
	}

    return 0;	
}
