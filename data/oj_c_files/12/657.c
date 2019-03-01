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
	int shuru[20] = {0};
	
	while (true)
	{
		int i = 1 , j , k , s , no;
		s=0;
		cin>>shuru[0];
		if(shuru[0]==-1)
			break;

		for(i=1;i<=15;i++)
		{
			cin>>shuru[i];
			if(shuru[i]==0)
				break;
			for(j=0;j<i;j++)
				if((shuru[j]==2*shuru[i])||(2*shuru[j]==shuru[i]))
					s++;
		}
		//cout << "yes  " << shuru[0] << endl;
		cout<<s<<endl;
		for(i=0;i<=14;i++)
		shuru[i]=0;
	}
	return 0;
}
