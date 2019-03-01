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
    int n,i,y,x=0;
	struct ID {
		int age;
		char a[10];
	}ID[201];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%s",ID[i].a);
		scanf("%d",&ID[i].age);
	}
	for(i=0;i<n;i++){
		if(ID[i].age>=60){
			ID[100+x]=ID[i];
			ID[i].a[0]='\0';
            x++;
		}
	}
	for(i=0;i<x-1;i++){
		for(y=0;y<x-1-i;y++){
			if(ID[100+y].age<ID[y+101].age){
				ID[200]=ID[100+y];
				ID[100+y]=ID[y+101];
				ID[y+101]=ID[200];
			}
		}
	}
	for(i=0;i<x;i++){
		printf("%s\n",ID[100+i].a);
	}
	for(i=0;i<n;i++){
		if(ID[i].a[0]!='\0')
			printf("%s\n",ID[i].a);
	}


	return 0;
}

