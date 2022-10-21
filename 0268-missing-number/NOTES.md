**Missing Number in Natural number series {0, 1, 2, ........... , n}**
```
int missingNumber(int* nums, int numsSize) {
int sum = (numsSize*(numsSize+1))/2; //Sum of Natural number series >> (n*(n+1))/2
for(int i=0; i < numsSize; i++){
sum -= nums[i]; //Subtracting the total Sum from the Natural no. array series to get Missing number
}
return sum;
}
```
* Sum of Natural number series >> (n*(n+1))/2.
​
* Subtracting the total Sum from the Natural no. array series to get Missing number by using sum -=nums[i].
* Time Complexity: O(n) ;
* Auxiliary Space: O(1)