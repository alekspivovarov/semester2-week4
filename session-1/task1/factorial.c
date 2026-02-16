
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    long int f[20];      // array declaration

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
   for (int i = 0; i < 20; i++) {   
      if (i == 0 || i == 1) {    // conditional block if i == 0 or 1 execute the next block
         f[i] = 1;  // sets the array element at position i to 1
      } else {  // else clause
         f[i] = 1;
         for (int j = 2; j <= i; j++) { // Inner loop that multiplies all numbers from 2 up to i
            f[i] *= j; // factorial multiplication: multiply the current value of f[i] by j and store result back in f[i] 
         }
      }
   }

   for (int i = 0; i < 20; i++) {
      printf("%2d! = %10ld\n", i, f[i]);
   }
    return 0;
 }
