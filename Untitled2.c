#include<stdio.h>
#include<stdlib.h>
main()
{
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
int  i,j;
int *ret_arr = (int*)malloc(2 * sizeof(int));

if (ret_arr==NULL||nums==NULL||numsSize<2){
    *returnSize=0;
    return NULL;
}
for (i=0; i<numsSize;i++){
    for (j=i+1;j<numsSize; j++){
        if (nums[i]+nums[j]==target){
            *returnSize=2;
            ret_arr[0]=i;
            ret_arr[i]=j;
            return ret_arr;
        }
    }
}
*returnSize=0;
free(ret_arr);
return NULL;
}
}
