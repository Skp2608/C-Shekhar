#include<stdio.h>
int main()
{
	int *p,arr[5]={-1,-2,-3,-4,-5};
	for(p=arr+4;p>=arr;p--)
	printf("%d",arr[p-arr],*p);
	return 0;
}
