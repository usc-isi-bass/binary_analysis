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
	int i,num;//num????,i????
	cin>>num;//??
	if(num!=1)//??num????1,???????
	{
		for(i=0;num!=1;i++)
		{
			if(num%2==0) {cout<<num<<"/2="<<num/2<<endl;num=num/2;}//??????
			else {cout<<num<<"*3+1="<<num*3+1<<endl;num=num*3+1;}
		}
		cout<<"End";//??END
	}
	else cout<<"End"<<endl;//?num?1,??end

	return 0;

}
