#include<stdio.h> 
#include<stdlib.h>
int main(void) 
{ 
	int i,j,n,m=0; 
	printf("�п�J�Ʀr:\n"); 
	scanf("%d",&n); 
	for (i=2;i<=n;i++) 
	{	 
		m=0; 
		for(j=1;j<=n;j++) 
	{ 
		if((i%j)==0)m++; 
		if (m>2) break; 
	} 
		if (m<=2) 
		printf("%d  ",i); 
	} 
	return 0; 
}
