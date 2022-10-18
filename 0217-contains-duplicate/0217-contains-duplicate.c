
int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b); //Comparing two values if no difference then its Duplicate
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp); //using quick sort where 2 indices are compared
    for (int i = 1; i < numsSize; i++){
    if(nums[i] == nums[i-1])  //Comparing current and previous indices to get duplicate
    return true; 
    }
  return false;    
}
