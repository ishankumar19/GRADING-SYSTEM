#include <stdio.h>

int main() {
    int e, m, c, p, total , per;

    printf("ENTER YOUR MARKS IN ENGLISH\n");
    scanf("%d", &e);

    printf("ENTER YOUR MARKS IN MATHEMATICS\n");
    scanf("%d", &m);

    printf("ENTER YOUR MARKS IN CHEMISTRY\n");
    scanf("%d", &c);

    printf("ENTER YOUR MARKS IN PHYSICS\n");
    scanf("%d", &p);

    printf("THE TOTAL AMOUNT OF MARKS SCORED BY YOU IS %d\n", e + m + c + p);
    total=e + m + c + p;
    per= total/4;
    printf("THE PERCENTAGE OBTINED BY THE STUDENT IS %d\n",per);
    if (per>=90){
        printf("YOU HAVE PASSED WITH AN A GRADE");
    }
    else if(per>=80){
        printf("YOU HAVE PASSED WITH AN B GRADE");
    }
    else if(per>=60){
        printf("YOU HAVE PASSED WITH AN C GRADE");
    }
    else if(per>=45){
        printf("YOU HAVE PASSED WITH AN D GRADE");
    }
    else{
        printf("YOU HAVE FAILED");
    }
    
    return 0;
}
