#include <stdio.h>

int main() {
   /*
   Data Type     Bytes             Description
   int           2 or 4 bytes      Whole numbers, without decimals 
   float         4 bytes           Fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits.
   double        8 bytes           Fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits.
   char          1 byte            Stores a single character/letter/number, or ASCII values
   */

   /*
   Format Specifier       Data Type           Description  
   %d or %i               int                 If you don't need to work with octal or hexadecimal values, %d is much safer route. Else, use %i as it is
   %f                     float
   %lf                    double
   %c                     char
   %s                     strings (text) 
   
   */

  float my_float_number = 3.500000000000;
  double my_double_number = 3.500000000000;

  printf("Float: %.2f\n", my_float_number); 
  printf("Double: %.4lf\n", my_double_number);

  return 0;
 }