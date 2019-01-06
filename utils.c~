#include <stdio.h>
#define N 3

void print_array (int Arr[N][N]) /*print the original array*/
{
	int i, j;
	
	printf("\n the original matrix: \n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			printf("%d \t",Arr[i][j]);
		printf("\n");
	}
}

int check_same_num (int Arr[][N], int n2) /*check if the array don't have the same numbers*/
{
	int i, j, r, c;

	for (i=0; i<N; i++)
		for (j=0; j<N; j++)
			for (r=0; r<=i; r++)
				for (c=0; c<=j; c++)
					if ((Arr[i][j]==Arr[r][c]) && (r!=i) && (c!=j))
						return 0;
	return 1; 
}

int check_r (int Arr[][N], int sum) /*check if all rows' sum is equal to the sum of the magic square*/
{
	int i, j, temp=0;

	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			temp+=Arr[i][j];
		if (temp!=sum)
			return 0;
		temp=0;
	}
	return 1;
}

int check_c (int Arr[][N], int sum) /*check if all columns' sum is equal to the sum of the magic square*/
{
	int i, j, temp=0;

	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			temp+=Arr[j][i];
		if (temp!=sum)
			return 0;
		temp=0;
	}
	return 1;
}

int check_rx (int Arr[][N], int sum) /*check if the right X sum is equal to the sum of the magic square*/
{
	int i, temp=0;

	for (i=0; i<N; i++)
		temp+=Arr[i][i];
	if (temp!=sum)
		return 0;
	return 1;
}

int check_lx (int Arr[][N], int sum) /*check if the left X sum is equal to the sum of the magic square*/
{
	int i, temp=0;

	for (i=N-1; i>=0; i--)
		temp+=Arr[N-1-i][i];
	if (temp!=sum)
		return 0;
	return 1;
}

void check_array (int Arr[][N], int n2, int sum) /*check if the array is magic square or not*/
{
	if ((check_same_num(Arr,n2)==1) && (check_r(Arr, sum)==1) && (check_c(Arr, sum)==1) && (check_rx(Arr, sum)==1) && (check_lx(Arr, sum)==1))
		printf("\n ************** \n  Magic Square \n ************** \n");
	else
		printf("\n ****************** \n  Not Magic Square \n ****************** \n");
}



