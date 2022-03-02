#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int intP, intCircle, intSquare, intToss, intRM, i;
    float fltPi, fltX, fltY, fltR;
    char ch;
    intRM = RAND_MAX;

    do {
        intCircle = 0;
        do {
            printf("Enter the number of tosses (2 <= N <= 5000) :");
            scanf("%d", &intToss );
        } while ( (intToss < 2) || (intToss > 5000));

        intSquare = intToss;
        for (i=0; i<intToss; i++) {
            intP = rand();
            fltX = ((float)intP)/intRM;
            intP = rand();
            fltY = ((float)intP)/intRM;
            fltR = sqrt((fltX * fltX) + (fltY * fltY));
            if (fltR <=1)
                intCircle = intCircle + 1;
        }
        fltPi = 4 * ( (float) intCircle) / intSquare;
        printf("\nThe value of pi is : %f\n", fltPi);
        printf("Do you want to continue? (Y/N) :");
        scanf(" %c", &ch);

    } while ( (ch == 'y') || (ch == 'Y'));
    printf("Thank you\n");

    return (0);
}
