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

//1????'\0'
//2???????
//3??????
//4?cin.get();
//5?double??
//6?
int main()
{
	int n=0;
	cin>>n;
	int q=0;
	while(q<n)
	{
		int a[110][110]={0},(*p)[110]=a;
		int o=n,sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>*(*(p+i)+j);
			}
		}
		while(o>0)
		{
			int min[110][2]={0},(*q)[2]=min;
			memset(min,10000,sizeof(min));
			for(int i=0;i<o;i++)
			{
				for(int j=0;j<o;j++)
				{
					if(*(*(p+i)+j)<*(*(q+i)))
						*(*(q+i))=*(*(p+i)+j);
				}
			}
			for(int i=0;i<o;i++)
			{
				for(int j=0;j<o;j++)
				{
					*(*(p+i)+j)-=*(*(q+i));
				}
			}
			for(int j=0;j<o;j++)
			{
				for(int i=0;i<o;i++)
				{
					if(*(*(p+i)+j)<*(*(q+j)+1))
						*(*(q+j)+1)=*(*(p+i)+j);
				}
			}
			for(int j=0;j<o;j++)
			{
				for(int i=0;i<o;i++)
				{
					*(*(p+i)+j)-=*(*(q+j)+1);
				}
			}
			sum+=*(*(p+1)+1);
			for(int i=0;i<o;i++)
			{
				for(int j=1;j<o;j++)
				{
					*(*(p+i)+j)=*(*(p+i)+j+1);
				}
			}
			for(int i=1;i<o;i++)
			{
				for(int j=0;j<o;j++)
				{
					*(*(p+i)+j)=*(*(p+i+1)+j);
				}
			}
			o--;
		}
		cout<<sum<<endl;
		q++;
	}
	return 0;
}