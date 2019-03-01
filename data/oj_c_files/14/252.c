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
	{int num;
	 int chi;
	 int math;
	}stu[100000];

	int n,i,j,mid;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].num,&stu[i].chi,&stu[i].math);
	}
  
	for(i=0;i<3;i++){
		for(j=n-1;j>0;j--){
			if(stu[j].math+stu[j].chi>stu[j-1].chi+stu[j-1].math){
				mid=stu[j].num;
				stu[j].num=stu[j-1].num;
				stu[j-1].num=mid;

				mid=stu[j].chi;
				stu[j].chi=stu[j-1].chi;
				stu[j-1].chi=mid;

				mid=stu[j].math;
				stu[j].math=stu[j-1].math;
				stu[j-1].math=mid;
			}
		}
	}

    for(i=0;i<3;i++){
		printf("%d %d\n",stu[i].num,stu[i].math+stu[i].chi);
	}
	
	return 0;
}
