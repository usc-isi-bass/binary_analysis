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

int main () {
	long int n,i,k,t,c,j,s=0,max=0,a[800]={0};
	char b[200][500],y,x;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("\n%s %d %d %c %c %d",b[i],&k,&t,&y,&x,&c);
     
	
		if (k>80 && c>0) a[i]+=8000;
        if (k>85 && t>80) a[i]+=4000;
	    if (k>90) a[i]+=2000;
	   	if (k>85 && x=='Y') a[i]+=1000;
	   	if (t>80 && y=='Y') a[i]+=850;
		s+=a[i];
	}
	for (i=0;i<n;i++)
    {
		if (a[i]>max){ 
			max=a[i];
			j=i;}
	}


	printf ("%s\n%d\n%d",b[j],max,s);
	return 0;
}