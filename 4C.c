#include <stdio.h>
#include <math.h>
void saisie(char * pChaine) {
	
	printf("Veuillez saisir une chaine de 13 caractère: ");
	scanf( "%13s", pChaine );
	

} // saisie(.)

int longueur(char * pChaineA) {
	
	int Somme = 0;
	
	while( pChaineA[Somme] != '\0' && Somme< 13) {
		Somme = Somme + 1;
	}
	return Somme;
	

} //longueur()

int main( void ) {
	char vChaine[13];
	saisie(vChaine);
	printf("%d\n",longueur(vChaine));
	return 0;
} //main()