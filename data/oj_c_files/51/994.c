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
	int n,len,i,j;
	char a[501];
	char s[500][6]={0};
	int times[500]={0};
	cin>>n;
	cin>>a;
	len=strlen(a);
	for(i=0;i<=len-n;i++)//?????n-gram
	{
		for(j=0;j<n;j++) s[i][j]=a[i+j];
		s[i][n]='\0';
		times[i]++;
	}
	//for(i=0;i<=len-n;i++) cout<<s[i]<<endl;
	for(i=0;i<=len-n;i++)
		for(j=0;j<i;j++)//??????
		{
			if(strcmp(s[i],s[j])==0)
			{
				times[j]++;
				times[i]=0;
				break;
			}
		}
	//for(i=0;i<=len-n;i++) cout<<times[i]<<endl;
	int max=1;
	for(i=0;i<=len-n;i++) if(times[i]>max) max=times[i];
	if(max==1) {cout<<"NO"<<endl;return 0;}
	cout<<max<<endl;
	for(i=0;i<=len-n;i++) if(times[i]==max) cout<<s[i]<<endl;
	return 0;
}