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
	int a[500],b[500];
	int n,i,k=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n;i++)
		if(a[i]%2==1){       //?????????b
			b[k]=a[i];
			k=k+1;
		}
		int m,t;
			for( i=0;i<k;i++){
										m=i;
										for (int j=i+1;j<k;j++) if(b[j]<b[m]) m=j;//????
										t=b[i];b[i]=b[m];b[m]=t;}
			for(i=0;i<k;i++){
				if(i>0)
					cout<<",";
			     cout<<b[i];                    //????????
			}
			return 0;



	}
