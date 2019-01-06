#include <stdio.h>
#define N 3

int n2 = N*N;
int Arr[N][N];
int sum = ((N*N+1)*N)/2; /*the sum of the magic square need to have with N*/

/*functions*/
void print_array (int Arr[N][N]);
int check_same_num (int Arr[][N], int n2);
int check_r (int Arr[][N], int sum);
int check_c (int Arr[][N], int sum);
int check_rx (int Arr[][N], int sum);
int check_lx (int Arr[][N], int sum);
void check_array (int Arr[][N], int n2, int sum);


void main()
{
	int i, j, count=0, k;

	printf("\n enter %d numbers for magic square between 1 to %d, don't enter same numbers: \n", n2, n2);

/*kelet*/	
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++) 
		{
			k=scanf("%d",&Arr[i][j]);
			if (k==-1)
				break;
			if ((Arr[i][j]<1) || (Arr[i][j]>n2) || (k=0)) /*if the kelet is not in range or not 'int'*/
			{
				printf("\n error input \n");
				exit(0);
			}
			count++;
		}
	}

	if (count!=n2) /*if there wasn't enough or too much numbers in the kelet*/
	{
		if (count < n2)
			printf("\n not enough numbers \n");
		else
			printf("\n too much numbers \n");
		exit(0);
	}
/*end kelet*/
	print_array(Arr);
	check_array(Arr,n2,sum);
}
