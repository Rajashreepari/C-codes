#include <stdio.h>
int main()
{
    int n,key,found=0;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of element : ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&key);

    //searching
    int ind;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            found = 1;
            ind = i;
            break;
        }
    }
    if(found==1){
        printf("Key found!\n");
        printf("key found at index : %d",ind);
    }
    else{
        printf("Key not found");
    }



    return 0;
}


