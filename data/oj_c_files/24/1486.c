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


int main(){
	char a[250],b[50][200];
    int n[100],i,j=0,x,y=0,k=0,m,flag=0;
    for(i=0;a[i-1]!='\n';i++)   //?????
	{
    	scanf("%c",&a[i]);
	}
	a[i-1]='\0';
	i=0;
	do    //???????????????????
	{
		if(a[i]!=' '&&a[i]!=','&&a[i]!='\0')
		{
			b[j][k]=a[i];
			k++;
		}
		else
		{
			b[j][k]='\0';
			k=0;
			j++;
		}
		i++;
	}while(a[i-1]!='\0');
	x=j;

	//?????	
/*	for(i=0;i<x;i++)
	{
	    printf("%s\n",b[i]);
	}
*/ 

	for(i=0;i<x;i++)  //??????????????????????
	{
		n[i]=strlen(b[i]);	  
	}
	i=0;
    for(j=0;j<x;j++)  //??????????????????
	{
		if (n[j]>y)
		{
			y=n[j];
			m=j;
		}
	}
	printf("%s\n",b[m]);
	for(j=0;j<x;j++)  //??????????????????
	{
		if (n[j]<y&&n[j]>0)
		{
			y=n[j];
			m=j;
		}
	}
	printf("%s\n",b[m]);
    return 0;
}