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
         int n,number[100001],x,sum=0;
		 cin>>n;
		 for(int i=0;i<n;i++)
		 {
			 cin>>number[i];
		 }
		 cin>>x;
		 for(int i=0;i<n;i++)
		 {
			 if(number[i]==x&&number[i+1]!=x){
				 for(int j=i;j<n;j++)
				 {
					 number[j]=number[j+1];
				 }
				 sum++;
			     }
			 else if(number[i]==x&&number[i+1]==x){
			for(int j=i;j<n;j++)
				 {
					 number[j]=number[j+1];
				 }
			 i--;
			 sum++;
			 }    
		 }
		 for(int i=0;i<n-sum-1;i++){
			 cout<<number[i]<<" ";}
		 cout<<number[n-sum-1];
		 return 0;
}
