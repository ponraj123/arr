#include <stdio.h>
int main(void) {
	int n,i,j,co=0;
	scanf("%d",&n);
	int arr[n],val;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
		if(arr[i]==arr[j])
		{
		co=1;
		val=arr[i];	
		break;		
		}
		if(co==1)
		break;
	}
	printf("%d",val);
	return 0;
}
