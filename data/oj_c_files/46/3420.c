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

/*????
????????????????row?col?
???row??????col???????????????
??????row?col??0<row<100, 0<col<100?
????
????????????????????
????
4 4
 1  2  3 4
12 13 14 5
11 16 15 6
10  9  8 7
*/
int main(){
	int n,m,sum=0;
	int str[100][100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		cin>>str[i][j];
	for(int k=0;k<(n+1)/2;k++){
	for(int k1=k;k1<m-k;k1++){
		cout<<str[k][k1]<<endl;
		sum++;
		if(sum==n*m)
			return 0;}
	for(int k2=k+1;k2<n-k;k2++){
		cout<<str[k2][m-k-1]<<endl;
	          sum++;
			if(sum==n*m)
				return 0;}
	for(int k3=m-k-2;k3>=k;k3--){
		cout<<str[n-k-1][k3]<<endl;
		          sum++;
				if(sum==n*m)
					return 0;}
	for(int k4=n-k-2;k4>k;k4--){
		cout<<str[k4][k]<<endl;
		          sum++;
				if(sum==n*m)
					return 0;}
	}
	return 0;
}
