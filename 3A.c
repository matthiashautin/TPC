#include <stdio.h>
void saisie( int * pVar ) {
	
	printf( "Veuillez saisir un nombre entier : " );
 	scanf( "%d", pVar );
	

} // saisie(.)


int main( void ) {
	
	int pE;
	
	saisie(&pE);
	printf("%d x 3 = %d\n", pE,  pE* 3);

	
	
} //main()