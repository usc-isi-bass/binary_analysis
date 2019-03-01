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
/*?? 
???m�n?????????????????????????????????????????????????????
??????????????????)?
 
???? 
???????????????m?5?m?20???n?5?n?20?? 
??m????m�n????????????????????????????????
 
???? 
?????????????????????m???????n??????????? */
{
	int mount[22][22];
	int i,j,s=0;
	int m,n;
	int temp;
	int pr[400],pc[400];

	for (i=0;i<22;i++)
		for (j=0;j<22;j++)
			mount[i][j]=0;
	cin >> m >> n;
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++)
			cin >> mount[i][j];
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++)
			if ( mount[i][j]>=mount[i-1][j])
				if (mount[i][j]>=mount[i+1][j])
					if (mount[i][j]>=mount[i][j-1])
						if (mount[i][j]>=mount[i][j+1])
						{
							pr[s]=i-1;
							pc[s]=j-1;
							s++;
						}
	for (i=0;i<s;i++)
		for (j=s-1;j>=i+1;j--)
			if (pr[j-1]>pr[j])
			{
				temp=pr[j];
				pr[j]=pr[j-1];
				pr[j-1]=temp;

				temp=pc[j];
				pc[j]=pc[j-1];
				pc[j-1]=temp;
			}
	for (i=0;i<s;i++)
		if (pr[i]==pr[i+1])
			if (pc[i]>pc[i+1])
			{
				temp=pc[j];
				pc[j]=pc[j+1];
				pc[j+1]=temp;
			}
	for (i=0;i<s;i++)
		cout << pr[i] <<" "<< pc[i] << endl;
	return 0;
}