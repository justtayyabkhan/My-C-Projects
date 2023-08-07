#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr1[3][2], arr2[2][3], result[3][3];
    int i, j, res = 0;
    printf("ENTER THE ELEMENTS OF MATRIX 1");
    // for array 1
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter element of row %d and column %d\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The matrix 1 is:\n");
    for (i = 0; i < 3; i++)

    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", arr1[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    // for array 2
        printf("ENTER THE ELEMENTS OF MATRIX 2");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element of row %d and column %d\n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The matrix 2 is:\n");
    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 3; j++)
        {

            printf("%d", arr2[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                res+=arr1[i][k]*arr2[k][j];
            }
            result[i][j]=res;
        res=0;
    }
        }
        
    printf("RESULT IS:\n");
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("%d", result[i][j]);
        printf("\t");
       }
       printf("\n");
       
    }
    

    return 0;
}