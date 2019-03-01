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
	int n,sum=0;
	char word[41]={0};
	char*p=word;            //???????word
	cin>>n;
	         //???????
	cin>>p;                //???p????,??
	sum+=strlen(p);        //sum????????
	cout<<p;  
	         //?????n-1???
	for(int i=1;i<n;i++)
	{
		cin>>p;
		sum+=strlen(p)+1;    //???,?????1
		if(sum>80)           //??80???
		{
			cout<<endl<<p;   //??
			sum=strlen(p);   //?????????
		}
		else cout<<' '<<p;
	}
	return 0;
}


