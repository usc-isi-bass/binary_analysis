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
int i,j ,temp,k;double a[301],c[301];
double mid,max=0,sum=0,n;double result[301];

cin>>n;

for(i=1;i<=n;i++){
    cin>>a[i];
	sum+=a[i];
	c[i] = 0;
}

mid = sum/n;


for(i=1;i<=n;i++){
    if(a[i] >= mid)  result[i] = a[i] - mid;
	else  result[i] = mid -a[i];
	
}

for(i=1;i<=n;i++){
    if(result[i] > max)  max = result[i];
}

for(i=1,j=1;i<=n;i++){
    if(result[i] == max)
	{   
		c[j] = a[i];
		j++;
	}
}

for(i=1;i<j;i++)
   for(k=1;k<j-i;k++){
	   if(c[k] > c[k+1]){
	       temp = c[k];
		   c[k] = c[k+1];
		   c[k+1] = temp;
	   }
}

   for(i= 1;i < j;i++){
       cout<<c[i];
	   if(i != j-1) cout<<",";
   }
return 0;
}