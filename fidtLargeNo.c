#include<stdio.h>

int returnMax(int array[],int n){
    int max=0;
    for(int i=0;i<n;i++){


 if(array[i]>max){
 max=array[i];
 }
    }
 return max;
}
int main(){

int arr[]={1,2,45,6,888,9,8};
int max=returnMax(arr,7);
printf("the max value %d",max);
return 0;
}
