#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main()
{
	int A,B,C;

	cin >> A;
	cin >> B;
	cin >> C;

	if(A < B && A < C && B < C)
	{
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
	}

	if(A < B && A < C && C < B)
	{
		printf("%d\n",A);
		printf("%d\n",C);
		printf("%d\n",B);
	}

	if(B < A && B < C && A < C)
	{
		printf("%d\n",B);
		printf("%d\n",A);
		printf("%d\n",C);
	}

	if(B < A && B < C && C < A)
	{
		printf("%d\n",B);
		printf("%d\n",C);
		printf("%d\n",A);
	}

	if(C < A && C < B && A < B)
	{
		printf("%d\n",C);
		printf("%d\n",A);
		printf("%d\n",B);
	}

	if(C < A && C < B && B < A)
	{
		printf("%d\n",C);
		printf("%d\n",B);
		printf("%d\n",A);
	}

	printf("\n");
	printf("%d\n",A);
	printf("%d\n",B);
	printf("%d\n",C);

	return 0;
}//fim main
