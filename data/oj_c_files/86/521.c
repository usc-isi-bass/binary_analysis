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
{   int a[20]={0},b[100]={0};
    int i,j,m,n,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		if(m==0)
			b[i]=60;
		else{
		for(j=0;j<m;j++)
		   cin>>a[j];
        for(j=0;j<m;j++){
			k=a[j]+3*j;
			if(k<57 && j==m-1){
				    b[i]=60-3*m;
					break;
			}
			else{ if(k>=57 && k<=60){
					    b[i]=a[j];
				        break;
			}
			else if(k>60){
					        b[i]=60-3*j;
				            break;
				}
				
			 
		}
			
	}
	}
	}
	for(i=0;i<n;i++)
		cout<<b[i]<<endl;
					

	return 0;
}