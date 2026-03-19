

#include <stdio.h>

int main()
{

    char insertion1[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s\n", insertion1);

    char insertion2[6];

    insertion2[0] = 'V';
    insertion2[1] = 'R';
    insertion2[2] = 'A';
    insertion2[3] = 'J';
    

    printf("%s\n",insertion2);

    char insertion3[5];

    printf("Enter string :");
    scanf("%s",&insertion3);


    printf("%s",insertion3);

   

    return 0;
}