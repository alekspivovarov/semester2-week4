
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    
    //Dynamically allocate the matrix a and vectors b and c using size n/
    a = malloc(n * sizeof(float*));
    for (int i = 0; i < n; i++) {
        a[i] = malloc(n * sizeof(float));
    }
    b = malloc(n * sizeof(float));
    c = malloc(n * sizeof(float));


    //Intialise the matrix a and vector b entries to 1. 
    for (int i = 0; i < n; i++) {
        b[i] = 1.0;
        for (int j = 0; j < n; j++) {
            a[i][j] = 1.0;
        }
    }

    //Write code to compute the product. Store your answer in vector c
    for (int i=0; i < n; i++) {
        c[i] = 0.0;
        for (int j = 0; j < n; j++) {
            c[i] += a[i][j] * b[j];
        }
    }

    
    //Print your final answer
    printf("Result: "); 
    for (int i = 0; i<n; i++) {
        printf("%.1f", c[i]);
    }  
    printf("\n");

    //Free the allocated memory
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }

    free(a);
    free(b);
    free(c);

    return 0;
 }
