#include <stdio.h>

double vTab[] = { 1.1, -2.2, 3.0, -4.44, -5.0, 6.6, 7.77 };




// afftab programme en C &
int main( void )	{

printf( "Les valeurs du tableau sont: \n" );
int vNbEle = sizeof(vTab)/sizeof(double );
   
	for(int vIndice = 0; vIndice<vNbEle; vIndice++) {
		printf( "%.2lf\n", vTab[vIndice] );
 	}
 	
  return 0;
} // main()
