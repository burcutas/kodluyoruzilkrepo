#include <stdio.h>

int main() {
int a,i,j,k,sayi,b=0;
    
    printf("enter a number:");
    scanf("%d",&a);


    for(b=0;a!=0;){
    b=(b*10)+(a%10);
    a=a/10;
    }
    while(b!=0){
        
    switch(b%10) {
        case 0 :
            printf("zero ");
            //printf("\n");
        break;
        case 1:
            printf("one ");
            //printf("\n");
        break;
        case 2:
            printf("two ");
           // printf("\n");
        break;
        case 3:
            printf("three ");
           // printf("\n");
        break;
        case 4:
            printf("four ");
           // printf("\n");
        break;
        case 5:
            printf("five ");
           // printf("\n");
        break;
        case 6:
            printf("six ");
            //printf("\n");
        break;
        case 7:
            printf("seven ");
          //  printf("\n");
        break;
        case 8:
            printf("eight ");
            //printf("\n");
        break;
        case 9:
            printf("nine ");
            //printf("\n");
        break;
    }
    b=b/10;
    }
    
}

