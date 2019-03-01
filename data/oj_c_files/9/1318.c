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


struct person{
	char str[10];
	int age;
}per[100],per1[100],per2[100];

int main(int argc, char* argv[])
{
	int n,i,j=0,k=0,x=0,t;
	char e[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",per[i].str,&per[i].age);
		if(per[i].age>=60){
			strcpy(per1[j].str,per[i].str);
			per1[j].age=per[i].age;
			j++;
		}
		else{
			strcpy(per2[k].str,per[i].str);
			per2[k].age=per[i].age;
			k++;
		}
	}
	for(x=0;x<j;x++){
		for(i=0;i<j-x;i++){
			if(per1[i].age<per1[i+1].age){
				strcpy(e,per1[i].str);
				strcpy(per1[i].str,per1[i+1].str);
				strcpy(per1[i+1].str,e);
				t=per1[i].age;
				per1[i].age=per1[i+1].age;
				per1[i+1].age=t;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%s\n",per1[i].str);
	}
	for(i=0;i<k;i++){
		printf("%s\n",per2[i].str);
	}

	return 0;
}
