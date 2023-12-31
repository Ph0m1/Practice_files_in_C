#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int *make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(int argc, char* argv[])
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while(scanf("%d", &size)==1&&size>0){
        pa = (int *)malloc(size * sizeof(int));
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if(pa){
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }
    printf("Done.\n");
    return 0;
}

int *make_array(int elem, int val){
    int *p = (int *)malloc(elem * sizeof(int));
    for (int i = 0; i < elem;i++)
        p[i] = val;
    return p;
}
void show_array(const int ar[], int n){
    for (int i = 0; i < n;i++){
    if(i%8==0)
        printf("\n");
    printf("%d\t", ar[i]);
    }
}