// Online C compiler to run C program online
#include <stdio.h>
#include <time.h>


int main() {
    // Write C code here
    srand(time(0));
    int numbers[50];
    int random;
    int min=1000;
    int max=0;
    int con=0;
    for(int x=0;x<50;x++){
        random=rand()%1000;
        numbers[x]=random;

    }
    printf("Array Elements:");
    printf("\n\n");
    for(int i=0;i<50;i++){
        printf("%d,",numbers[i]);

    }
     printf("\n\n");
     while(con<50){
         if(numbers[con]>max){
             max=numbers[con];
         }else if(numbers[con]<min){
             min=numbers[con];
         }
            con++;
     }

     printf("maximum value : %d",max);
     printf("\n");
     printf("minimum value : %d",min);
     return 0;
}
