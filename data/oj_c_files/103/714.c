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

struct point{
	char a;
	int b;
}poi[40];
int main()
{
	char str[1000];
	int i,j=0,k;
	scanf("%s",&str);
	poi[j].a=str[0];
	for(i=1;str[i]!='\0';i++){
		if(str[i]==str[i-1]||str[i]==str[i-1]-32||str[i]==str[i-1]+32){
		    poi[j].b++;}
		else{j++;poi[j].a=str[i];}
	}
	for(k=0;k<=j;k++){
		if(poi[k].a>96){poi[k].a=poi[k].a-32;}
		printf("(%c,%d)",poi[k].a,poi[k].b+1);
		
	}
    return 0;
}