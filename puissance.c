#include <stdio.h>
//définir la fonction puissance 
double vTab[] = { 1.1, -2.2, 3.0, -4.44, -5.0, 6.6, 7.77 };

double Puissance(double pReel, unsigned int pEntier) {
	
	double resultat = 1;
	
	if(pEntier == 0) {
		return 1;
		
	} else {	
		
		for(int i =1; i <= pEntier; i++) {
			resultat = resultat * pReel;
		}
	return resultat;
	}
}

// utilisation de la fontion puissance
int main( void )	{

printf( "Les valeurs du tableau sont: \n" );
int vNbEle = sizeof(vTab)/sizeof(double );
   
	for(int vIndice = 0; vIndice<vNbEle; vIndice++) {
		
		for(int vI = 0; vI < 4; vI++ ) {
			printf( "%.1lf\t", Puissance(vTab[vIndice], vI));
			
		}
		printf("\n");
	}
 	
  return 0;
} // main()
