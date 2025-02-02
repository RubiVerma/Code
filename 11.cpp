#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long fact =1;
	printf("INTEGER: ");
	scanf("%d",&n);
	if(n<0)
	printf("ERROR!");
	else{
		for(i =1;i<=n;++i)
		{
			fact*=i;
		}
	printf("Factorial %d = %llu",n,fact);
	}
return 0;
}
