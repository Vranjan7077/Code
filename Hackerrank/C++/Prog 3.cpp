/*
Pointer
*/
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function    
    *a = *a + *b;
    *b =abs(*a - *b -*b);// where the abs is the function which is used to return the absolute or round off value of the parameter.
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}

/*
input: 
4 
5 
output:
9
1
*/

