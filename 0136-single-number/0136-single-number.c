

int singleNumber(int* nums, int numsSize){
    int res = nums[0];
    for(int i= 1; i < numsSize; i++){
    res ^= nums[i];  //res = res ^ nums[i] >> XOR with 0th index's value and iterate through given array to get single number/odd occuring number
    }
    return res;
}