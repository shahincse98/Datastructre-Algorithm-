#include <stdio.h>

void selection_sort(int A[], int n)
{
    int temp, i, j, index_min;

    for(i = 0; i < n-1; i++) {
        index_min = i;

        for(j = i+1; j < n; j++) {
            if(A[j] < A[index_min]) {
                index_min = j;
            }
        }

        if(index_min != i) {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

int main()

{
    int i, n;
    printf("Enter number of element: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter number: ");

    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("The number are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    selection_sort(A, n);

    printf("\nThe sorted number are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
