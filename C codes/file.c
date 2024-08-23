#include <stdio.h>
int main()
{
    FILE *sf,*df;
    char sfn[100],dfn[100],data[100];

    printf("Enter the name of the Source file : ");
    scanf("%s",&sfn);

    sf = fopen(sfn,"r");

    if(sf == NULL){
        printf("No such file");
        return 1;
    }

    printf("Enter the name of the Distination file : ");
    scanf("%s",&dfn);

    df = fopen(dfn,"a");

    if(df == NULL){
        printf("No such file");
        return 1;
    }

    while(fgets(data,100,sf)){
        fputs(data,df);
    }

    fclose(sf);
    fclose(df);

    printf("Contents copied to %s file successfully",dfn);


    return 0;
}
