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
	char id[10];
	int age;
}a[100];
int main(){
	int n,i,k,e;
	char p[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",a[i].id,&a[i].age);
		if(a[i].age>=60){
			for(k=0;i-k>=1;k++){
				if(a[i-k].age>a[i-k-1].age){
					e=a[i-k].age;
					a[i-k].age=a[i-k-1].age;
					a[i-k-1].age=e;

					strcpy(p,a[i-k].id);
					strcpy(a[i-k].id,a[i-k-1].id);
					strcpy(a[i-k-1].id,p);
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i].id);
	}
	return 0;
}