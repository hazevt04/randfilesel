#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include <time.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

int main( int argc, char **argv ) {
   gsl_rng *rng = gsl_rng_alloc( gsl_rng_taus2 );

   int num_rands = 5;

   int max_num = 255;

   int rand;

   gsl_rng_set( rng, time( NULL ) );

   printf( "Generated random numbers: " ); 
   for( int i = 0; i < num_rands; i++ ) {
      rand = gsl_rng_uniform_int( rng, max_num );
      printf( "%0d ", rand ); 
   } 
   printf( "\n" ); 
   return EXIT_SUCCESS;
}

