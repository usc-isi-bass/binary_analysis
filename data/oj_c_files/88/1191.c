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
	char in[31];
	int out[30];
	int i,j,k,l=0,flag1,flag2;
	cin.getline(in,31);
	for(i=0;i<30;i++)//???
	{out[i]=0;}
	for(i=0;i<31;i++)//???????
	{
		if(in[i]>='0'&&in[i]<='9')//???????
		{
			flag1=i;
			for(j=i;j<31;j++)
			{
				if(!(in[j]>='0'&&in[j]<='9'))//????????
				{	
					flag2=j-1;
					i=j;
					break;
				}
			}
			for(k=flag2;k>=flag1;k--)//?????
			{
				
				out[l]=out[l]+(in[k]-'0')*(int)pow(10.0,(double)(flag2-k));
				
			}
			l++;
		}
	if(in[i]=='\0')
		break;
	}
	for(i=0;i<l-1;i++)
		cout<<out[i]<<endl;
	cout<<out[l-1];
	return 0;
}