// C code to find the  every segment size of
// array have a search key x
#include<stdio.h>
int loop,finalResult=1;
int arr[]={1,2,1,3,2,6,8,2,9,2,5,5,2,9,0,99,2,22,2,2,9,9,9,9};
int len=sizeof(arr)/sizeof(arr[0]);
int x=2; 
int k=10;
int main()
{
	int i;
	function(arr,len,x,k);
	return 0;
}
int function(int arr[],int len,int x,int k)
{
	int i=0;
	// Calculate loop size
	if(len%k==0)
	{
		loop=len/k;
	}
	else
	{
		loop=(len/k)+1;
	}
//	printf("Loop=%d\n",loop);
	int check[loop],count=0;
	int j=0; // For accessing array elements
	for(i=0;i<loop;i++)
	{
		int m=0; // For continue while loop
		int Flag=0; // For evaluate result
		int checking=0; // For or operation
		while(m<k)
		{
			if(count<len)
			{
			//	printf("j=%d, m=%d\n",j,m);
			//	printf("arr=%d\n",arr[j+m]);
				if(x==arr[j+m])
				{
					Flag=1;
				}
				else
				{
					Flag==0;
				}
				m++;
				checking=checking || Flag;
			}
			else
			{
				break;
			}
			count++;
//			printf("Checking=%d\n",checking);
		}
		check[i]=checking;
//		printf("Chekcing Result=%d\n",check[i]);
		j=(k-1)+j+1;
	}
	int n=0;
	while(n<loop)
	{
		finalResult=finalResult && check[n];
		n++;
	}
	if(finalResult==0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
}
// This code is contributed by Kaustabh Adak

