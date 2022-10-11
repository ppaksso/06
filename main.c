#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int factorial(int n)
{
	int res=1;
	int i;
	
	for (i=1;i<=n;i++)
	  res=res*i;
	
	return res; 

}

int com(int n, int r)
{
	int a,b,c;
	int result;
	
	a = factorial(n);
	b = factorial(n-r);
	c = factorial(r);
	
	result= a/(b*c);
	
    return result;
	
}


	

int main(int argc, char *argv[]) {
	
	int n,r,combination;
	
	printf("enter n and r");
	scanf("%d %d",&n,&r);
	
	printf("the result is %d", com(n,r));
	
	return 0;
}
