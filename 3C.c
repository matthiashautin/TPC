#include <stdio.h>
#include <math.h>
void saisie( double * pVar ) {
	
	printf( "Veuillez saisir un nombre entier : " );
 	scanf( "%lf", pVar );
	
	if ( *pVar < 0 ) {
		*pVar = -*pVar;
	}

} // saisie(.)

int main( void ) {
	
	double pE;
	
	saisie(&pE);
	printf("%lf\n", sqrt(pE));

} //main()