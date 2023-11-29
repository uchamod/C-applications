#include <stdio.h>
#include <stdlib.h>

int main()
{
    int std;
    printf("Number of students:");
    scanf("%d",&std);
    int index[std];
    int marks[std];
    int pass[0];
    int fail[0];
    for(int x=0;x<std;x++){
        printf("Enter index:");
        scanf("%d",&index[x]);
        printf("Enter marks:");
        scanf("%d",&marks[x]);
    }

    for(int i=0;i<std;i++){
        if(marks[i]>=35){
            pass[i]=index[i];

        }else{
            fail[i]=index[i];

        }

    }
    int passize=sizeof(pass);
    int failsize=sizeof(fail);

    for(int p=0;p<passize;p++){
        printf("Students who passed the examination:\n %d",pass[p]);
    }

     for(int f=0;f<failsize;f++){
        printf("Students who failed the examination:\n %d",fail[f]);
    }




    return 0;
}
