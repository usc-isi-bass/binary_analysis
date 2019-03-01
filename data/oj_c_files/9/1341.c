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

struct patient
{
	char id[20];
	int age;
}pat[100];
int main()
{
	int i,k,n,e;
	int ex[100],ex1[100];
	i=0;
	k=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%s%d",&(pat[i].id),&(pat[i].age));
		ex[i]=pat[i].age;
		ex1[i]=i+1;
	}
	for(k=n-1;k>=1;k--){
		for(i=n-1;i>=n-k;i--){
			if(ex[i]>ex[i-1]&&ex[i]>=60){
				e=ex[i];
				ex[i]=ex[i-1];
				ex[i-1]=e;
				e=ex1[i];
				ex1[i]=ex1[i-1];
				ex1[i-1]=e;
			}
		}
	}
	for(i=0;i<=n-1;i++){
		if(ex[i]>=60){
			printf("%s\n",pat[ex1[i]-1].id);
		}
	}
	for(i=0;i<=n-1;i++){
		if(ex[i]<60){
			printf("%s\n",pat[ex1[i]-1].id);
		}
	}
	return 0;
}
