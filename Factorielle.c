/*
 * Factorielle.c
 */
#include<stdio.h>
int factorielle_iterative(int n);
int factorielle_recursive(int n);
int main(void)
{
	int n;
	do {
			printf("Donner un nombre positif : \n");
	        scanf("%d",&n);

	    } while(n<0);
	printf ("le resultat iterative: %d\n",factorielle_iterative(n));
	printf ("le resultat recursive: %d\n",factorielle_recursive(n));
	return 0;
}
int factorielle_iterative(int n){
    int res=1,i;
    for(i=1;i<=n;i++)
        res*=i;
    return res;
}
int factorielle_recursive(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*factorielle_recursive(n-1);
}
