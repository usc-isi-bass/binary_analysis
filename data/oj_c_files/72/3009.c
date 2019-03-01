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

//============================================================================
// Name        : abc.cpp
// Author      : aaa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int h,li;
	int a[25][25];
	cin>>h>>li;
	for(int i=0;i<h;i++)
		for(int j=0;j<li;j++)
			cin>>a[i][j];
	for(int i=0;i<h;i++){
		if(i==0){
			for(int j=0;j<li;j++)
			{
				if(j==0)
					{
					if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
											cout<<i<<" "<<j<<endl;
					}
				else{
				if(j==li-1)
				{
					if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
											cout<<i<<" "<<j<<endl;
				}
				else
				{
					if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
											cout<<i<<" "<<j<<endl;
				}}
			}}else{
		if(i==h-1){
				for(int j=0;j<li;j++)
				{
					if(j==0)
					{
						if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
												cout<<i<<" "<<j<<endl;
					}
					else{
					if(j==li-1)
					{
						if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
												cout<<i<<" "<<j<<endl;
					}
					else
					{
						if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
												cout<<i<<" "<<j<<endl;
					}}
				}}
		else{
					for(int j=0;j<li;j++)
					{
						if(j==0)
							{if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
													cout<<i<<" "<<j<<endl;}
						else{
						if(j==li-1)
							{if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j])
													cout<<i<<" "<<j<<endl;}
						else
							if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
													cout<<i<<" "<<j<<endl;
					}}
	}}}
	return 0;
}
