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
	char a[100][90];//?????????????
	int n,i,j,m;//n???????ij??????m???
	cin>>n;
	cin.get();
	for(i=0;i<=n-1;i++)
	{
		cin.getline(a[i],90,'\n');
	}
	for(i=0;i<=n-1;i++)//?????????
	{
		m=1;
		if(a[i][0]!='_'&&a[i][0]!='a'&&a[i][0]!='b'&&a[i][0]!='c'&&a[i][0]!='d'&&a[i][0]!='e'&&a[i][0]!='f'&&a[i][0]!='g'
			&&a[i][0]!='h'&&a[i][0]!='i'&&a[i][0]!='j'&&a[i][0]!='k'&&a[i][0]!='l'&&a[i][0]!='m'&&a[i][0]!='n'&&a[i][0]!='o'
			&&a[i][0]!='p'&&a[i][0]!='q'&&a[i][0]!='r'&&a[i][0]!='s'&&a[i][0]!='t'&&a[i][0]!='u'&&a[i][0]!='v'&&a[i][0]!='w'
			&&a[i][0]!='x'&&a[i][0]!='y'&&a[i][0]!='z'&&a[i][0]!='A'&&a[i][0]!='B'&&a[i][0]!='C'&&a[i][0]!='D'&&a[i][0]!='E'
			&&a[i][0]!='F'&&a[i][0]!='G'&&a[i][0]!='H'&&a[i][0]!='I'&&a[i][0]!='J'&&a[i][0]!='K'&&a[i][0]!='L'&&a[i][0]!='M'
			&&a[i][0]!='N'&&a[i][0]!='O'&&a[i][0]!='P'&&a[i][0]!='Q'&&a[i][0]!='R'&&a[i][0]!='S'&&a[i][0]!='T'&&a[i][0]!='U'
			&&a[i][0]!='V'&&a[i][0]!='W'&&a[i][0]!='X'&&a[i][0]!='Y'&&a[i][0]!='Z')
			m=0;
		j=1;
		while(a[i][j]!='\0')//??????????
		{
			if(a[i][j]!='_'&&a[i][j]!='a'&&a[i][j]!='b'&&a[i][j]!='c'&&a[i][j]!='d'&&a[i][j]!='e'&&a[i][j]!='f'&&a[i][j]!='g'
			&&a[i][j]!='h'&&a[i][j]!='i'&&a[i][j]!='j'&&a[i][j]!='k'&&a[i][j]!='l'&&a[i][j]!='m'&&a[i][j]!='n'&&a[i][j]!='o'
			&&a[i][j]!='p'&&a[i][j]!='q'&&a[i][j]!='r'&&a[i][j]!='s'&&a[i][j]!='t'&&a[i][j]!='u'&&a[i][j]!='v'&&a[i][j]!='w'
			&&a[i][j]!='x'&&a[i][j]!='y'&&a[i][j]!='z'&&a[i][j]!='A'&&a[i][j]!='B'&&a[i][j]!='C'&&a[i][j]!='D'&&a[i][j]!='E'
			&&a[i][j]!='F'&&a[i][j]!='G'&&a[i][j]!='H'&&a[i][j]!='I'&&a[i][j]!='J'&&a[i][j]!='K'&&a[i][j]!='L'&&a[i][j]!='M'
			&&a[i][j]!='N'&&a[i][j]!='O'&&a[i][j]!='P'&&a[i][j]!='Q'&&a[i][j]!='R'&&a[i][j]!='S'&&a[i][j]!='T'&&a[i][j]!='U'
			&&a[i][j]!='V'&&a[i][j]!='W'&&a[i][j]!='X'&&a[i][j]!='Y'&&a[i][j]!='Z'&&a[i][j]!='0'&&a[i][j]!='1'&&a[i][j]!='2'
			&&a[i][j]!='3'&&a[i][j]!='4'&&a[i][j]!='5'&&a[i][j]!='6'&&a[i][j]!='7'&&a[i][j]!='8'&&a[i][j]!='9')
			m=0;
			j++;
		}
		cout<<m<<endl;
	}
	return 0;
}
