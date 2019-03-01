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
	int n,i,j;
	struct s
	{char id[10];
	int age;
	};
	struct s S[100],Si;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",S[i].id,&S[i].age);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(S[j+1].age>=60){
				if(S[j].age<S[j+1].age){
					Si=S[j];
					S[j]=S[j+1];
					S[j+1]=Si;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",S[i].id);
	}
}