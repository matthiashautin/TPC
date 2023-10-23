#include <stdio.h>
#include <math.h>
void saisie(double * pVar, char * pMessage ) {
	
	scanf( "%lf", pVar );
	printf( "%s", pMessage);

	
	if ( *pVar < 0 ) {
		*pVar = -*pVar;
	}

} // saisie(.)

int main() {
	
	double pE;
	
	saisie(&pE, "Veuillez saisir le 1ere reel : ");
	printf("%lf\n", sqrt(pE));

} //main()