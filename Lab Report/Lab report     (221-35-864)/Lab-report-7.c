//Write a program in C to merge two arrays of same size sorted in decending order

#include<stdio.h>

int main(){
    int n;
    printf("How many numbers:");
    scanf("%d",&n);

    int a[n],b[n];
    int n2=n+n;
    int c[n2];

    printf("Enter numbers for 1st Array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter numbers for 2nd Array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    printf("\n");


    for(int i=0;i<n;i++){
        c[i]=a[i];
        c[i+n]=b[i];
    }
    printf("Merged Array: ");
    for(int i=0;i<n2;i++){
        printf("%d ",c[i]);
    }
    printf("\n");

    for(int i=0;i<n2;i++){
        for(int j=i+1;j<n2;j++){
            if(c[i]>c[j]){
                int tem = c[i];
                c[i] = c[j];
                c[j] = tem;
            }
        }
    }

    
    printf("Merge Array Sorted in Descending Order : ");
    for(int i=n2-1;i>=0;i--){
        printf("%d ",c[i]);
    }
    printf("\n");

    return 0;
}
