

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for(int i=0 ;i<numsSize-1;i++){
        for(int j=i; j<numsSize ;j++){
            if(target = nums[i]+nums[j]){
                returnSize[0]=i;
                returnSize[1]=j;
                retrun *returnSize;
            }
        }
    }
}