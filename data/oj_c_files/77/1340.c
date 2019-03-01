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
	char boy,girl,children[102]={'\0'};
	int sum,i,j;//sum???????????
	cin.getline(children,101,'\n');
	sum=strlen(children);
	boy=children[0];
	girl=children[sum-1];
	while(children[sum-1]!='\0')
	{
		j=0;
		while(children[j]!=girl&&j<sum)//???????????
			j++;
		i=j-1;
		while(children[i]!=boy&&i>=0)//?????????????????
			i--;
		children[i]='\0';//??????
		children[j]='\0';
		if(j==sum-1)//????????
			cout<<i<<" "<<j;
		else
			cout<<i<<" "<<j<<endl;
	}
	return 0;
}
