#include <stdio.h>
void quicksort(int number[25], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last) // on arret à un nombre strict sup a la valeur du pivot ti i<last
                i++;
            while (number[j] > number[pivot]) // on arret à un nombre inf ou égal à la valeur du pivot
                j--;
            if (i < j) // si i<j on fait la permutation des deux valeurs
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        // la dérnière place de j sera la place de pivot tq i<j implique nmb(i)<nmbre(j)
        temp = number[pivot]; // on fait la permutation entre la dernière case de j et le pivot
        number[pivot] = number[j];
        number[j] = temp;
        // les deux appelles récursives travaillent séparément chaque appel travail sur une partie du tableau
        quicksort(number, first, j - 1); // on fait appel a la fonction pour trier le tableau de first à j-1
        quicksort(number, j + 1, last);  // trier de j+1 a last
    }
}
int main()
{
    int i, count, number[25];
    printf("How many elements are u going to enter?: ");
    scanf("%d", &count);
    printf("Enter %d elements: ", count);
    for (i = 0; i < count; i++)
        scanf("%d", &number[i]);
    quicksort(number, 0, count - 1);
    printf("Order of Sorted elements: ");
    for (i = 0; i < count; i++)
        printf(" %d", number[i]);
    return 0;
}