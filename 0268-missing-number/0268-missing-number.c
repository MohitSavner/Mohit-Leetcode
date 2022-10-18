
int missingNumber(int* nums, int numsSize) {
    int sum = (numsSize*(numsSize+1))/2; //Sum of Natural number series >> (n*(n+1))/2
    for(int i=0; i < numsSize; i++){
        sum -= nums[i]; //Subtracting the total Sum from the Natural no. array series to get Missing number
    }
    return sum;
}