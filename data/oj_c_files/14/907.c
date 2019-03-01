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
	int ID;
	int yuwen;
	int shuxue;
	int zongfen;
};

int main()
{
	int n,i,j,e;
	scanf("%d",&n);
	struct student*stu=(struct student*)malloc(sizeof(struct student)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].ID,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
	}
	for(i=1;i<4;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(stu[j].zongfen>=stu[j+1].zongfen)
			{
				e=stu[j].zongfen;
				stu[j].zongfen=stu[j+1].zongfen;
				stu[j+1].zongfen=e;
				e=stu[j].ID;
				stu[j].ID=stu[j+1].ID;
				stu[j+1].ID=e;
			}
		}
	}
	
	printf("%d %d\n%d %d\n%d %d\n",stu[n-1].ID,stu[n-1].zongfen,stu[n-2].ID,stu[n-2].zongfen,stu[n-3].ID,stu[n-3].zongfen);
	return 0;
}

