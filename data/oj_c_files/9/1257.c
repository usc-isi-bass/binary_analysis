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
	char id[11];
	int age;
} pat[100];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d", pat[i].id, &pat[i].age);
	}
	int temp=0;
	struct patient e;
	for(i=0;i<n;i++){
		if(pat[i].age>=60){
			e=pat[i];
			int j;
			for(j=i;j>=temp+1;j--){
				pat[j]=pat[j-1];
			}
			pat[temp]=e;
			temp++;
		}
	}
	int k;
	for(k=1;k<=temp;k++){
		for(i=0;i<temp-k;i++){
			if(pat[i].age<pat[i+1].age){
				e=pat[i];
				pat[i]=pat[i+1];
				pat[i+1]=e;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",pat[i].id);
	}
	return 0;
}
