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
	int n,i,j,k,p=0,q,r,e;
	cin>>n;
	float s,m1,m2,m3,m4,m5,m6,f,g;
	float l[50];//??
	float x[10];
	float y[10];
	float z[10];//??
	float a1[50][2];
	float a2[50][2];
	float a3[50][2];
	float b1[50][2];
	float b2[50][2];
	float b3[50][2];//????????
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];//??
	for(j=0;j<n-1;j++)
	{
		for(k=j+1;k<n;k++)
		{
			l[p]=sqrt((x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k])+(z[j]-z[k])*(z[j]-z[k]));
			a1[p][0]=x[j];a2[p][0]=y[j];a3[p][0]=z[j];b1[p][0]=x[k];b2[p][0]=y[k];b3[p][0]=z[k];
			a1[p][1]=j;a2[p][1]=j;a3[p][1]=j;b1[p][1]=k;b2[p][1]=k;b3[p][1]=k;
			p=p+1;
		}//????????
	}
	for(q=0;q<p-1;q++)
	{
		for(r=q+1;r<p;r++)
		{
			if(l[q]<l[r])
			{
				s=l[q];
				l[q]=l[r];
				l[r]=s;
				f=a1[q][1];
				a1[q][1]=a1[r][1];
				a1[r][1]=f;
				g=b1[q][1];
				b1[q][1]=b1[r][1];
				b1[r][1]=g;
				m1=a1[q][0];
				a1[q][0]=a1[r][0];
				a1[r][0]=m1;
				m2=a2[q][0];
				a2[q][0]=a2[r][0];
				a2[r][0]=m2;
				m3=a3[q][0];
				a3[q][0]=a3[r][0];
				a3[r][0]=m3;
				m4=b1[q][0];
				b1[q][0]=b1[r][0];
				b1[r][0]=m4;
				m5=b2[q][0];
				b2[q][0]=b2[r][0];
				b2[r][0]=m5;
				m6=b3[q][0];
				b3[q][0]=b3[r][0];
				b3[r][0]=m6;
			}//??????
			if(l[q]==l[r]&&a1[q][1]>=a1[r][1])
			{
				f=a1[q][1];
				a1[q][1]=a1[r][1];
				a1[r][1]=f;
				g=b1[q][1];
				b1[q][1]=b1[r][1];
				b1[r][1]=g;
				m1=a1[q][0];
				m1=a1[q][0];
				a1[q][0]=a1[r][0];
				a1[r][0]=m1;
				m2=a2[q][0];
				a2[q][0]=a2[r][0];
				a2[r][0]=m2;
				m3=a3[q][0];
				a3[q][0]=a3[r][0];
				a3[r][0]=m3;
				m4=b1[q][0];
				b1[q][0]=b1[r][0];
				b1[r][0]=m4;
				m5=b2[q][0];
				b2[q][0]=b2[r][0];
				b2[r][0]=m5;
				m6=b3[q][0];
				b3[q][0]=b3[r][0];
				b3[r][0]=m6;
			}
			if(l[q]==l[r]&&b1[q][1]>=b1[r][1])
			{
				f=a1[q][1];
				a1[q][1]=a1[r][1];
				a1[r][1]=f;
				g=b1[q][1];
				b1[q][1]=b1[r][1];
				b1[r][1]=g;
				m1=a1[q][0];
				m1=a1[q][0];
				a1[q][0]=a1[r][0];
				a1[r][0]=m1;
				m2=a2[q][0];
				a2[q][0]=a2[r][0];
				a2[r][0]=m2;
				m3=a3[q][0];
				a3[q][0]=a3[r][0];
				a3[r][0]=m3;
				m4=b1[q][0];
				b1[q][0]=b1[r][0];
				b1[r][0]=m4;
				m5=b2[q][0];
				b2[q][0]=b2[r][0];
				b2[r][0]=m5;
				m6=b3[q][0];
				b3[q][0]=b3[r][0];
				b3[r][0]=m6;}
			//???????????
		}
	}
	for(e=0;e<p;e++)
	{
		cout<<"("<<a1[e][0]<<","<<a2[e][0]<<","<<a3[e][0]<<")-("<<b1[e][0]<<","<<b2[e][0]<<","<<b3[e][0]<<")=";
		printf("%.2f\n",l[e]);//??
	}
	getchar();
	getchar();
	return 0;
}