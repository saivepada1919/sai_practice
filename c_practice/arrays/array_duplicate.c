#include <stdio.h>
int main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n],brr[n],crr[n],temp=0,i;
	printf("enter the elements:");
	for(i=0;i<n;i++)
        {
                brr[i]=0;
		crr[i]=0;
        }
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(i<=n-1)
		{
		if(temp==arr[i+1])
		{
			brr[i]=temp;
		}
		else
		{
			crr[i]=temp;
		}
		}
	}
	
	for(i=0;i<n;i++){
		if(brr[i]!=0){
			printf("%d ",brr[i]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
                if(crr[i]!=0){
                        printf("%d ",crr[i]);
                }
        }
	printf("\n");
	return 0;
}
