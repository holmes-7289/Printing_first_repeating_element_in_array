/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int count(int *, int);

int main()
{
    int a[20],n=20;
    float t=0;
    for (int i = 0; i < n; i++) {
        /* code */
        a[i] = rand()%10;
    }
    for (int i = 0; i < n-1; i++) {
        /* code */
        printf("%d,",a[i]);
    }
    printf("%d\n",a[n-1]);
    t=clock();
    //printf("\nbefore Time = %f",t);
    count(a,n);
    //printf("\nAfter Time = %f",t);
    t=clock()-t;
    printf("\nTime taken = %f",t);
    

    return 0;
}

int count(int *a, int n){
    int co[9];
    int q=-1, che=0;
    for(int i=1;i<10;i++){
        co[i]=0;
    }
    for (int i = 0; i < n; i++) {
        /* code */
        if(co[a[i]]!=0 && che==0){
            q=a[i];
            che++;
        }
        co[a[i]]++;
    }
    printf("Counting Array:\t");
    for (int i = 1; i < 10; i++) {
        /* code */
        printf("%d : %d,  ",i,co[i]);
    }
    
    printf("1st repeating Element %d",q);
    
    
    
}
