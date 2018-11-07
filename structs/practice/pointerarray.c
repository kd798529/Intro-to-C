#include <stdio.h>

int main(void)
{
    char a[128];
    

    a[0] = 'B';
    a[1] = 'e';
    a[2] = 'e';
    a[3] = 'j';
    a[4] = '\0';

    printf("%s\n", a);
    
    return 0;
    
}