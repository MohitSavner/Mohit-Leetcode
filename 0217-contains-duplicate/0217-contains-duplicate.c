
int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp); //using quick sort where 2 indices are compared
    for (int i = 1; i < numsSize; i++){
    if(nums[i] == nums[i-1])  //Comparing current and previous indices
    return true; 
    }
  return false;    
}
