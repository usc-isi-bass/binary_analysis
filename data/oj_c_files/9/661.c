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
};
int main(){
	int j,max,t=1,n,i;
	struct patient p[101];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%s%d",p[i].id,&p[i].age);
	for (;t!=0;){
	max=59;t=0;
	for (i=1;i<=n;i++){
		if (p[i].age>max) {max=p[i].age; t=i;}
	}
	if (t!=0) printf("%s\n",p[t].id);
	p[t].age=0;
	}
	for (i=1;i<=n;i++)
		if (p[i].age!=0) printf("%s\n",p[i].id);
}