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
	int i,j,n,h=0,y[200],n1[200],n2[200];
	int m1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int m2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&y[i],&n1[i],&n2[i]);
		if(((y[i]%4==0)&&(y[i]%100!=0))||y[i]%400==0){
			h=0;
			if(n1[i]<n2[i]){
				for(j=n1[i];j<n2[i];j++){
					h+=m2[j];
				}
				if(h%7==0)
					printf("YES\n");
				else if(h%7!=0)
					printf("NO\n");
			}
			else if(n1[i]>n2[i]){
				for(j=n2[i];j<n1[i];j++){
					h+=m2[j];
				}
				if(h%7==0)
					printf("YES\n");
				else if(h%7!=0)
					printf("NO\n");
			}
		}
		else{
			h=0;
			if(n1[i]<n2[i]){
				for(j=n1[i];j<n2[i];j++){
					h+=m1[j];
				}
				if(h%7==0)
					printf("YES\n");
				else if(h%7!=0)
					printf("NO\n");
			}
			else if(n1[i]>n2[i]){
				for(j=n2[i];j<n1[i];j++){
					h+=m1[j];
				}
				if(h%7==0)
					printf("YES\n");
				else if(h%7!=0)
					printf("NO\n");
			}
		}
	}
	return 0;
}