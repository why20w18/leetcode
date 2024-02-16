#include <stdio.h>
	
int removeElement(int* nums , int numSize , int val){
        int n = 0;
        for(int i = 0 ; i < numSize ; i++){
                
		if(nums[i] != val){
             	   nums[n] = nums[i];
                   n++;
                }
       		else{
		nums[i] = 0;
		}         
        }
       return n;
}

int main(){

	int nums[] = {3,2,2,3};
	int val = 0;

	printf("enter val >>");
	scanf("%d",&val);
	
	int sonuc = removeElement(nums,4,val);

	printf("\n\nSonuc > %d",sonuc);
		
		
}
