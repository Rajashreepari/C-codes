#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int min_i;
for(int i=0;i<n-1;i++){
min_i=i;
for(int j=i+1;j<n;j++){
if(a[j]<a[min_i]){
min_i=j;
}
}
int t=a[i];
a[i]=a[min_i];
a[min_i]=t;
}
printf("after sorting : \n");
for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}
}



