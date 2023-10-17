#include <stdio.h>
#include <math.h>
#define Tableau { 1.1, -2.2, 3.0, -4.44, -5.0, 6.6, 7.77 }

double vTab[] = Tableau;

void afftab(double pTab[], int pNbCase ) {
	for(int vIndice = 0; vIndice<pNbCase; vIndice++) {
		printf("vTab [%d] =", vIndice);
		printf( "%.2lf\n", vTab[vIndice] );
 	}
}

void afftabint(double pTab[], int pNbCase ) {
	for(int vIndice = 0; vIndice<pNbCase; vIndice++) {
		printf("vTab [%d] =", vIndice);
		printf( "%.0lf\n", fabs((int)vTab[vIndice]));
 	}
	
}


// afftab programme en C &
int main( void )	{

printf( "Les valeurs du tableau sont: \n" );
int vNbEle = sizeof(vTab)/sizeof(double );
	
//appel de la procédure afftab
afftab(vTab,vNbEle);
afftabint(vTab,vNbEle);
	


return 0;
} // main()