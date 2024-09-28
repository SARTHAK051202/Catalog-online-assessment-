#include <stdio.h>  

// Function to compute the constant term of the polynomial  
int compute_constant(int *roots, int num_roots) {  
    int constant = 1; // Initialize constant term as 1  
    for (int i = 0; i < num_roots; i++) {  
        constant *= roots[i]; // Multiply each root to obtain the constant term  
    }  
    return constant; // Return the calculated constant term  
}  

int main() {  
    // Example roots representing two different test cases  
    int roots_case1[] = {1, 2, 3}; // Roots for the first scenario  
    int roots_case2[] = {2, 3, 4}; // Roots for the second scenario  
    
    int size_case1 = sizeof(roots_case1) / sizeof(roots_case1[0]);  
    int size_case2 = sizeof(roots_case2) / sizeof(roots_case2[0]);  
    
    // Calculate the constant term for each test case  
    int constant_case1 = compute_constant(roots_case1, size_case1);  
    int constant_case2 = compute_constant(roots_case2, size_case2);  
    
    // Output the results for both test cases  
    printf("Constant term from test case 1: %d\n", constant_case1);  
    printf("Constant term from test case 2: %d\n", constant_case2);  
    
    return 0;  
}