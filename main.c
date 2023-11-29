
#include <stdio.h>

int tot=0;
float final;
void avarage(int marks[10]){
    for(int a=0;a<10;a++){
        tot=tot+marks[a];

    }
    final=tot/10;
    printf("The average of the student marks is = %.2f",final);
}

void main() {
     int marks[10];

     for(int x=0;x<10;x++){
        printf("Enter marks of student:");
        scanf("%d",&marks[x]);
        printf("\n");


    }

    printf("\n");
    printf("Student Marks : ");
    for(int i=0;i<10;i++){
        printf("%d,",marks[i]);

   }
    printf("\n");
    avarage(marks);



}
