#include <stdio.h>

int main(){
	int a[7];
	int i, j;
	printf("Enter elements ");
	for(i = 0; i < 6; i++ ){
		scanf("%d", &a);
	}
	printf("entered elements \n");
	for (i=0; i<6; i++){
		printf("%d\n", a[i]);
	}
return 0;  
}
