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

//????
int ji(int a,int b);
int main()
{
	int jinzhi1=0; //????1
	int jinzhi2=0;  //????2
	int p=0; //????
	int i=0; //???
	int j=0; //?????
	char n[100];   //?????????
	char m[100];  //?????????
	long s=0;   //?????????
	cin>>jinzhi1>>n>>jinzhi2;
	p=strlen(n);
	//???????????
	while(i<p)
	{
		(int) n[i];
		if(n[i]>96)     //??????????,???s?????
		{
            s=s+(n[i]-87)*ji(jinzhi1,(p-i-1));
		}
		else
		{
			if(n[i]>64)
			{
				s=s+(n[i]-55)*ji(jinzhi1,(p-i-1));
			}
			else
			{
				s=s+(n[i]-'0')*ji(jinzhi1,(p-i-1));
			}
		}
		i=i+1;
	}


	i=0;//?????
	if(s==0)
	{
        cout<<0<<endl;
    }
    else
    {
    while(s!=0) //????
	{
        m[i]=s%jinzhi2;
		s=(s-m[i])/jinzhi2;
		i+=1;
	}
	for(j=0;j<i;j++)  //?????????????
	{
		if(m[i-1-j]>9)
		{
			m[i-1-j]=m[i-1-j]+55;
			cout<<m[i-1-j];
		}
		else
		{
			m[i-1-j]=m[i-1-j]+48;
			cout<<m[i-1-j];
		}
    }
    }
	return 0;
}

int ji(int a,int b) //???????? 
{
	int i=0;
	int ji=1;
	for(i=0;i<b;i++)
	{
		ji=ji*a;
	}
	return ji;
}