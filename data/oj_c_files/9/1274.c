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



int main(int argc, char* argv[])
{

	int n,j=0,i,num=0,t;
	char a[100][10],d[100][10],temp[10];//a???????d?a???
	int b[100],c[100];//b???????c?b???

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",a[i],&b[i]);//??
	}
	for(i=0;i<n;i++){
		if(b[i]>=60){
			c[j]=b[i];
			strcpy(d[j],a[i]);
			j++;
			num=j;//???????65????????c?????????
		}
	}
	for(i=1;i<num;i++)
	for(j=0;j<num-i;j++){
		if(c[j]<c[j+1]){
			t=c[j+1];
			c[j+1]=c[j];
			c[j]=t;
			strcpy(temp,d[j+1]);
			strcpy(d[j+1],d[j]);
			strcpy(d[j],temp);//?????65???????????????
		}
	}
	for(i=0;i<n;i++){
		if(b[i]<60){
			c[num]=b[i];
			strcpy(d[num],a[i]);
			num++;//???65????c?????????
		}
	}
	for(j=0;j<n;j++){
		printf("%s\n",d[j]);//???????
	}

	return 0;
}

