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

/*??????????????????????????????????????????????????????????????????????????0??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????     ??????????????????????????????????????????????????????????????????????100*/
int main()
{
	void ls(char c[],char,char);//????????????
	char c[101]={'\0'};
	cin.getline(c,101);
	char t1,t2;//??????????????
	t1=c[0];
	for(int i=0;i<101;i++)
		if(c[i]!=c[0])
	    {t2=c[i];break;}
	ls(c,t1,t2);
	return 0;
}

void ls(char c[],char t1,char t2)
{
	int i,j;
	if(c[0]!=' ')
	{
		for(i=0;c[i]!='\0';i++)
	    {
			if(c[i]==t2)//?????
			{
				for(j=i-1;j>=0;j--)//?????????
			    {
				if(c[j]==t1)
				{cout<<j<<' '<<i<<endl;
				c[i]=c[j]=' ';break;}//?????????????????
			    }
				break;
			}
		}
		ls(c,t1,t2);//??????????????
	}
}