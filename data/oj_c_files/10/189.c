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
	int n,i,height[30],num[30],j,max = -1;
	cin>>n;
	for (i = 0;i < n;i++)
		cin>>height[i];
	for (i = 0;i < n;i++)	
		num[i] = 1;
	

	for (i = 1;i < n;i++)
		for (j = i-1;j >=0 ;j--)
		{
			if (height[j]>=height[i]&& num[j]+1 > num[i])
				num[i] = num[j] + 1;
				
			
		}
	for (i = 1;i < n;i++)
		if(num[i]>max)
			max = num[i];
	cout<<max<<endl;
	

}
