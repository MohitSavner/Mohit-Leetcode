

int singleNumber(int* nums, int numsSize){
    int x=0;
    for(int i=0; i < numsSize; i++){
    x ^= nums[i];  //x = x ^ nums[i] >> XOR (Masking with 0) with given array indices to get single number
    }
    return x;
}