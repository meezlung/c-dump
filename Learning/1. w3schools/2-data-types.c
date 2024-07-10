#include <stdio.h>
#include <stdint.h>

int main() {
   // (1)
   // Data Types
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


   // (2)
   // Characters
   char my_grade = 'A';
   printf("%c\n", my_grade);

   // Can also utilize ASCII conversion
   char a = 65, b = 66, c = 67;
   printf("%c, %c, %c\n", a, b, c);

   // Don't assign strings in char format specifiers (idk pointers)
   char *my_text = "Hello";
   printf("Tangina %c\n", *my_text);

   // Instead, do this
   char my_text_final[] = "Hello";
   printf("Tangina %s\n", my_text_final);
   printf("First letter %c\n", my_text_final[0]);
   printf("Second letter %c\n", my_text_final[1]);
   printf("Third letter %c\n", my_text_final[2]);
   printf("Fourth letter %c\n", my_text_final[3]);
   printf("Fifth letter %c\n", my_text_final[4]);
   printf("Sixth letter? %c\n", my_text_final[5]); // '\0' or the Null Terminator

   // Modification as well
   my_text_final[1] = 'a';
   printf("%s\n", my_text_final);

   // (3)
   // Numbers
   int my_num = 1000;
   printf("%d\n", my_num);

   float my_num_float = 3.1415926535;
   printf("%.10f\n", my_num_float); // Less precise than double

   // Floats are only precise for 6-7 decimal digits

   float my_num_float_final = 3.1415926535;
   printf("%.7f\n", my_num_float_final); // This rounds up the decimal digit


   double my_num_double = 3.1415926535;
   printf("%.10f\n", my_num_double);

   // Though super precise than float, it consumes more space 
   double my_num_double_final = 3.1415926535;
   printf("%.7f\n", my_num_double_final);


   // Scientific Numbers
   float f1 = 35e3;
   double d1 = 12E4;

   printf("%f\n", f1);
   printf("%lf\n", d1); 

   #define MILLION 1000000
   #define FIVE_MILLION (5 * MILLION)

   // Setting specific types for integers
   int16_t my_int = 5000;
   int32_t my_int_2 = FIVE_MILLION;
   
   printf("%d\n", my_int);
   printf("%d\n", my_int_2);

   // (5)
   // Memory Size
   int my_int_size = 5;
   int16_t my_int_size_16 = 5;
   int32_t my_int_size_32 = 5;
   int64_t my_int_size_64 = 5;
   float my_float_size;
   double my_double_size;
   char my_char_size;

   // Compiler always expects the "sizeof" to always return a "long unsigned int (%lu)"
   printf("%lu bytes\n", sizeof(my_int_size)); // 4 bytes (by default to modern systems)
   printf("%lu bytes\n", sizeof(my_int_size_16)); // 2 bytes
   printf("%lu bytes\n", sizeof(my_int_size_32)); // 4 bytes
   printf("%lu bytes\n", sizeof(my_int_size_64)); // 8 bytes
   printf("%lu bytes\n", sizeof(my_float_size));
   printf("%lu bytes\n", sizeof(my_double_size));
   printf("%lu bytes\n", sizeof(my_char_size));


   return 0;
}