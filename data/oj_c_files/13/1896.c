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
	int n,num[20001],sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			if(num[i]==101)break;
			if(num[j]==num[i])num[j]=101;  //?????????????
		}
			        
	for(int i=0;i<n;i++){
				if(num[i]==101&&num[i+1]!=101){//????????????????
				for(int m=i;m<n;m++){
					num[m]=num[m+1];
				}
				sum++;
				}
				else if(num[i]==101&&num[i+1]==101){
				for(int m=i;m<n;m++){
					num[m]=num[m+1];
				}
				sum++;
					i--;
				}
			}
		for(int i=0;i<n-sum-1;i++){
			cout<<num[i]<<" ";}
		cout<<num[n-sum-1];
			return 0;
}