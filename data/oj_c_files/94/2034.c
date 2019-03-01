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
	int a[100],b[100];//a???????b???????
	int n;//n??a?????
	int count=0,temp;//count??b??????temp?????????
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]%2)
			b[count++]=a[i];//???a?????b
	}
	for(int i=0;i<count;i++)//?b?????
		for(int j=count-1;j>i;j--)
			if(b[j-1]>b[j])
			{
				temp=b[j-1];
				b[j-1]=b[j];
				b[j]=temp;
			}
	for(int i=0;i<count;i++){//????????????????','
		if(i)
			cout << ',';
		cout<<b[i];
	}
	cout << endl;
	return 0;
}
