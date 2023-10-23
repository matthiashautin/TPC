#include <stdio.h>
void saisie( int * pVar ) {
	
	printf( "Veuillez saisir un nombre entier : " );
 	scanf( "%d", pVar );
	
	if ( *pVar < 0 ) {
		*pVar = -*pVar;
	}

} // saisie(.)


int main( void ) {
	
	int pE;
	
	saisie(&pE);
	printf("La valeur saisie est : %d\n", pE);

	
	
} //main()