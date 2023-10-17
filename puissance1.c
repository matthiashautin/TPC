#include <stdio.h>
#define Tableau { 1.1, -2.2, 3.0, -4.44, -5.0, 6.6, 7.77 }
#define LIMITE 3
//définir la fonction puissance 
double vTab[] = Tableau;

double Puissance(double pReel, unsigned int pEntier) {

	if(pEntier == 0) {
		return 1;
		
	} else if(pEntier == 1) {
		return pReel;
		
	} else if(pEntier > 0) {
		pReel = Puissance(pReel, pEntier-1)*pReel;
		return pReel;	
	} else {
		pReel = Puissance(pReel, pEntier+1)*pReel;
		return 1/pReel;	
	}
}

// utilisation de la fontion puissance
int main( void )	{

printf( "Les valeurs du tableau sont: \n" );
int vNbEle = sizeof(vTab)/sizeof(double );
   
	for(int vIndice = 0; vIndice<vNbEle; vIndice++) {
		
		for(int vI = 0; vI <= LIMITE; vI++ ) {
			printf( "%.2lf\t", Puissance(vTab[vIndice], vI));
			
		}
		printf("\n");
	}
 	
  return 0;
} // main()