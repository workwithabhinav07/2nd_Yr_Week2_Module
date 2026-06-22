/*An online store keeps product IDs sorted in ascending order. A customer wants to know whether a
particular product exists in inventory.*/
#include <stdio.h>
#include <stdlib.h>

 void bubbleSort(int *product_id ,int  N,int target_id ){
     int mid,start =0, end =N-1;

      while(start <= end ){
        mid = start + ( end- start)/2;
        if(target_id == *(product_id + mid)){
            printf("Product Available");
            break;
        }
        else{
            if (target_id > *(product_id + mid) ){
                start = mid+1; // ignoring left half
            }
            else end = mid-1; // ignoring right half 
        }
    }
   if ((end<start) == 1)  printf("Product Not Available");

 }
int main(){
    int N,target_id,i;
   
    Top:
    printf("Enter number of product: ");
    scanf("%d",&N);
    if (N<=0) goto Top;
    int *product_id = malloc(N*sizeof(int));// allocating memory to store product id
    // check pointer is not NULL
    if(product_id == NULL){
        fprintf(stderr,"Memory allocation fail");
        return 1;
    }
    printf("Enter Product Id: \n");
    for(i =0 ; i<N ;i++){
        scanf("%d",product_id+i);
    }
    printf("Enter target product id: ");
    scanf("%d",&target_id); 
    bubbleSort(product_id ,  N , target_id);

free(product_id);
return 0;
}

