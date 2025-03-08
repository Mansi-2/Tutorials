#include <stdio.h>
#include <stdlib.h>

// Define a structure to store polynomial terms
typedef struct Term {
    int coeff;  // Coefficient
    int exp;    // Exponent
    struct Term *next; // Pointer to the next term
} Term;

// Function to create a new term
Term* createTerm(int coeff, int exp) {
    Term* newTerm = (Term*)malloc(sizeof(Term));
    newTerm->coeff = coeff;
    newTerm->exp = exp;
    newTerm->next = NULL;
    return newTerm;
}

// Function to add a term to the polynomial
int addTerm(Term** poly, int coeff, int exp) {
    Term* newTerm = createTerm(coeff, exp);
    if (*poly == NULL) {
        *poly = newTerm;
    } else {
        Term* temp = *poly;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newTerm;
    }
}

// Function to display the polynomial
void displayPolynomial(Term* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    Term* temp = poly;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->exp);
        temp = temp->next;
        if (temp != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Main function
int main() {
    Term* poly = NULL;
    int n, coeff, exp;

    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        addTerm(&poly, coeff, exp);
    }

    printf("The polynomial is: ");
    displayPolynomial(poly);

    // Free memory
    Term* temp;
    while (poly != NULL) {
        temp = poly;
        poly = poly->next;
        free(temp);
    }

    return 0;
}
