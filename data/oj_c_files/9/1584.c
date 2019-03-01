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

void main()
{
	int n,i,j,stu[2000][3],t[3],hao;
	char ID[20000][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",ID[i],&stu[i][1]);
    for(i=0;i<n;i++)
	{
		stu[i][0]=atoi(ID[i]);
		stu[i][2]=i;
	}


	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(stu[j][1]<=stu[i][1])
			{
				t[0]=stu[i][0];
				stu[i][0]=stu[j][0];
				stu[j][0]=t[0];
				t[1]=stu[i][1];
				stu[i][1]=stu[j][1];
				stu[j][1]=t[1];
				t[2]=stu[i][2];
				stu[i][2]=stu[j][2];
				stu[j][2]=t[2];
			}
		}
		for(i=n-1;i>=0;i--)
		{
			if(stu[i][1]>=60)
			{
				
				hao=stu[i][2];


				printf("%s\n",ID[hao]);
			
				n--;
			}
			else break;
		}
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
			{
				if(stu[i][2]>stu[j][2])
				{
					t[0]=stu[i][0];
				stu[i][0]=stu[j][0];
				stu[j][0]=t[0];
				t[1]=stu[i][1];
				stu[i][1]=stu[j][1];
				stu[j][1]=t[1];
				t[2]=stu[i][2];
				stu[i][2]=stu[j][2];
				stu[j][2]=t[2];
				}
			}
			for(i=0;i<n;i++)
			{
				hao=stu[i][2];


				printf("%s\n",ID[hao]);
			}
}

