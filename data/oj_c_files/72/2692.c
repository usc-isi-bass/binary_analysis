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

int main(int argc, char* argv[])
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[20][20];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int k=0;k<n;k++)
	{
		for(int l=0;l<m;l++)
		{
			if((k==0&&l==0) && a[k][l]>=a[k][l+1]&&a[k][l]>=a[k+1][l]){
				printf("%d %d\n",k,l);
			}
			else if((k==0&&l!=m-1&&l!=0)&&a[k][l]>=a[k][l-1]&&a[k][l]>=a[k+1][l]&&a[k][l]>=a[k][l+1]){
				printf("%d %d\n",k,l);
			}
			else if((k==0&&l==m-1)&&a[k][l]>=a[k][l-1]&&a[k][l]>=a[k+1][l]){
				printf("%d %d\n",k,l);
			}
			else if((k!=n-1&&k!=0&&l==0)&&a[k][l]>=a[k][l+1]&&a[k][l]>=a[k+1][l]&&a[k][l]>=a[k-1][l]){
				printf("%d %d\n",k,l);
			}
			else if((k!=n-1&&l!=m-1&&k!=0&&l!=0)&&a[k][l]>=a[k][l+1]&&a[k][l]>=a[k-1][l]&&a[k][l]>=a[k+1][l]&&a[k][l]>=a[k][l-1]){
				printf("%d %d\n",k,l);
			}
			else if((k!=n-1&&k!=0&&l==m-1)&&a[k][l]>=a[k][l-1]&&a[k][l]>=a[k+1][l]&&a[k][l]>=a[k-1][l]){
				printf("%d %d\n",k,l);
			}
			else if((k==n-1&&l==0)&&a[k][l]>=a[k][l+1]&&a[k][l]>=a[k-1][l]){
				printf("%d %d\n",k,l);
			}
			else if((k==n-1&&l!=m-1&&l!=0)&&a[k][l]>=a[k][l-1]&&a[k][l]>=a[k][l+1]&&a[k][l]>=a[k-1][l]){
				printf("%d %d\n",k,l);
			}
			else if((k==n-1&&l==m-1)&&a[k][l]>=a[k-1][l]&&a[k][l]>=a[k][l-1]){
				printf("%d %d\n",k,l);
			}
		}
	}
	return 0;
}