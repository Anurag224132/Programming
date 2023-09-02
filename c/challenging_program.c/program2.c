#include <stdio.h>

int main() {
    int i, j, k;
    for (i =3; i >= 1; i--) 
    {
        for (j = 1; j <= i; j++) 
        {  
            printf("*\t");
            if(i==2)
            {
                printf("    ");
            }
        }
        printf("\n");
        if(i==2) printf("\t");
        else printf("    ");
    } 

    return 0;
}


