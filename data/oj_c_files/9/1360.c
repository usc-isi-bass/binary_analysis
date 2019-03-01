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


struct patient{
	char A[10];
	int age;
};

int main(){
	int i,n,k,max,count;
	struct patient inter;
	struct patient *p;
	scanf("%d",&n);
	struct patient *sick=(struct patient*)malloc(sizeof(struct patient)*n);//??
	struct patient *waitlist=(struct patient*)malloc(sizeof(struct patient)*n);//??
	count=0;//????
	for(i=0;i<n;i++){
		scanf("%s %d",sick[i].A,&sick[i].age);
	}//??
	p=waitlist;
	for (i=0;i<n;i++)
	{
		if (sick[i].age>=60)
		{
			*p=sick[i];
			p++;
			count++;
		}
	}//????
	for (i=0;i<n;i++)
	{
		if (sick[i].age<60)
		{
			*p=sick[i];
			p++;
		}
	}//?????
	for (i=1;i<count;i++)
	{
		for (k=0;k<count-i;k++)
		{
			if (waitlist[k].age<waitlist[k+1].age)
			{
				inter=waitlist[k+1];
				waitlist[k+1]=waitlist[k];
				waitlist[k]=inter;
			} 
		}
	}//????
	for (i=0;i<n;i++)
	{
		printf("%s\n",waitlist[i].A);
	}
	return 0;
}