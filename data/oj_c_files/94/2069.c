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
	int n,x,y=0,i,j,p;
	cin>>n;
	int a[100],b[100];
	for(x=0;x<n;x++){
		cin>>a[x];
		if(a[x]%2!=0){
			b[y]=a[x];
		y++;
		}
	}
	for(i=1;i<y;i++)
		for(j=0;j<y-i;j++){
			if(b[j]>b[j+1])
			{
				p=b[j];
				b[j]=b[j+1];
				b[j+1]=p;
			}
		}
			cout<<b[0];
			for(i=1;i<y;i++)
				cout<<","<<b[i];
			return 0;

}