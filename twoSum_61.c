#include <stdio.h>

int* twoSum(int* nums , int numSize , int target , int* returnSize){

	int* two = (int*) malloc(numSize * sizeof(int));
	*returnSize = 2;
	for(int i = 0 ; i < numSize-1 ; i++){
		for(int j = i+1 ; j < numSize ; j++){
			if(target == nums[i]+nums[j]){
				two[0] = i;
				two[1] = j;
				return two;
			}

		}
	}
	
	return -1;
}

int main(){

	int* nums[] = {3,2,4};
	int* twom = twoSum(nums , 4 ,6 ,2);
	printf("%d ve %d",twom[0],twom[1]);
	
}
