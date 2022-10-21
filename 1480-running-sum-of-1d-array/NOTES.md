**Running Sum od 1d Array**
```
int* runningSum(int* nums, int numsSize, int* returnSize){
*returnSize = numsSize; //Deferencing to numsSize to avoid heap overflow
/* Example:
returnSize = 2;
int *arr = malloc(sizeof(int) * (*returnSize));   //Occcurs in main funtion.
*/
for(int i = 1; i < numsSize; i++){
nums[i] = nums[i-1] + nums[i];    //Adding 0th to 1st index and so on.. and returning to respective index of given array.
}
return nums;
}
```
* Deferencing to numsSize to avoid heap overflow.
* Adding 0th to 1st index and so on.. and returning to respective index of given array.
​
Time Complexity: O(n) ;
Space Complexity: O(1)
​