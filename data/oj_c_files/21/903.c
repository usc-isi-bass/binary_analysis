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
	int i,n,k=0,j;
	float ave,sum=0,m;
	int a[391];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(a[j]<a[i]){
				m=a[j];
				a[j]=a[i];
				a[i]=m;
			}
	m=fabs(a[0]-ave);
	if(m<a[n-1]-ave)
		m=a[n-1]-ave;
	for(i=0;i<n;i++)
		if((fabs(a[i]-ave)-m<0.1)&&(fabs(a[i]-ave)-m>-0.1)){
			if(k!=0)
				printf(",");
			printf("%d",a[i]);
			k++;
		}
	return 0;
}
