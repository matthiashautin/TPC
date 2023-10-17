#include <stdio.h>

//intialisation d'un tableau de type double
double vTab[] = { 1.1, -2.2, 3.0, -4.44, -5.0, 6.6, 7.77 };
double vSommePos = 0;
double vSommeNeg = 0;
double vSommeNul = 0;

// afftab programme en C &
int main( void )	{

//la dernière valeur du tableau
int vNbEle = sizeof(vTab)/sizeof(double );
	
//pour toutes les valeurs du tableau
for(int vIndice = 0; vIndice<vNbEle; vIndice++) {
		
	if(vTab[vIndice] > 0) {
		vSommePos = vSommePos + 1;
 	} else if (vTab[vIndice] < 0) {
 		vSommeNeg = vSommeNeg + 1;
 	} else {
 		vSommeNul = vSommeNul + 1;
 	}
	
}	

printf("Les sommes positives: %.lf\n" , vSommePos);
printf("Les sommes negatives: %.lf\n" , vSommeNeg);
printf("Les sommes nulles: %.lf\n" , vSommeNul);

	
  return 0;
} // main()
