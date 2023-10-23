#include <stdio.h>
void echangeE(int * pEntierA, int * pEntierB) {
	int vStock = *pEntierA;
	*pEntierA = *pEntierB;
	*pEntierB = vStock;
	
	
} //echangeE()

int main() {
	
	int vEntierA;
	int vEntierB;
	printf("Veuillez saisir le 2valeurs : ");
	
	scanf("%d  %d" , &vEntierA , &vEntierB);
	
	echangeE(&vEntierA,&vEntierB);
	
	printf( "changement = %d %d\n" , vEntierA,vEntierB);
	
return 0;

} //main()