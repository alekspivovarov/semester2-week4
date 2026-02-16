/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h> // this is for calloc() and free()

 int main( void ) {
    int n = 5;
    float *a, *b, *d;  // stack-based pointers
    float dot_product = 0.0; // scalar, not a vector

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float) );
    b = calloc( n, sizeof(float) );
    d = calloc( n, sizeof(float) );

    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */

    //initialise the vectors with numerical data
    for (int k = 0; k<n; k++) {
      a[k] = k + 1.0; // a = [1, 2, 3, 4, 5]
      b[k] = (k + 1) * 2.0; // b = [2, 4, 6, 8, 10]
    }

    // compute the dot product
    for (int k = 0; k < n; k++) {
      d[k] = a[k] * b[k]; // store each product in d[k]
      dot_product += d[k]; // Sum up for final result
    }

    printf("Final dot product result: %.1f\n", dot_product);

    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);
    free(d);

    return 0;
 }