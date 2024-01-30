//============================================================================
// Name        : Spiral_Matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int Limit = 0;
	int i = 0;
	int j = 0;
	printf("Enter The Limit : ");
	scanf("%d",&Limit);
	for(i=Limit;i>=1;i--)
	{
		for(j=Limit;j>=i;j--)     //for(j=n;j>=i;j--)
			printf("%d ",j);
		for(j=1;j<(2*i)-1;j++)    //for(j=1;j<(2*i)-1;j++)
			printf("%d ",i);
		for(j=i+1;j<=Limit;j++)   //for(j=i+1;j<=n;j++)
			printf("%d ",j);
		printf("\n");
	}

	for(i=2;i<=Limit;i++)
	{
		for(j=Limit;j>=i;j--)
			printf("%d ",j);
		for(j=1;j<(2*i)-1;j++)    //for(j=1;j<(2*i)-1;j++)
			printf("%d ",i);
		for(j=i+1;j<=Limit;j++)   //for(j=i+1;j<=n;j++)
			printf("%d ",j);
		printf("\n");
	}
	return 0;

}
