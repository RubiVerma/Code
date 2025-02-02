#include<stdio.h>
int main()
{
	char fname[20],mname[20],lname[13];
	printf("Enter the name(first middle last): ");
	scanf("%s %s %s",fname,mname,lname);
	printf("%c.%c.%s",fname[0],mname[0],lname);
	return 0;
}
