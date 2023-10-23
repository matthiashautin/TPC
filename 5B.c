#include <stdio.h>
int saisie(char * pChaineA, char * pChaineB) {
	scanf("%s %s", pChaineA, pChaineB);
}


int echangeE(char * pStringA, char * pStringB) {
	for (int i=0; i<25; i++) {
		char vCaractere = pStringA[i];
			pStringA[i]= pStringB[i];
			pStringB[i] = vCaractere;
	}
}
	
int main() {
	
	char vEntierA[25];
	char vEntierB[25];
	
	printf("Veuillez saisir le 2 String : ");
	
	char * vPtrA = vEntierA;
	char * vPtrB = vEntierB;
	
	saisie(vPtrA,vPtrB);
	
	echangeE(vPtrA,vPtrB);
	
	printf( "changement de mot = %s %s\n" , vPtrA,vPtrB);
	
return 0;

} //main()