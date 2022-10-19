/*
  Method 1: Brute force approach
    Time Complexity: O(n^2)
    Space Complexity: O(1)
    
    
    int numIdenticalPairs(int* nums, int numsSize){
    int counter = 0;
    for(int i = 0; i < numsSize; i++){ 
        for(int j= i+1; j < numsSize ; j++){
             if(nums[i] == nums[j] && i < j)
            counter++ ;
        }
       
    }
    return counter;
}
*/ 

/*
  Method 2: Optimized Approach
    Time Complexity: O(n)
    Space Complexity: O(n)
*/

int numIdenticalPairs(int* nums, int numsSize){
  int Counter = 0;
  unsigned short int CounterArray[101];
    for(unsigned short int j=0 ; j < 101; j++){
      CounterArray[j] = 0;
    }
    for(unsigned short int i = 0; i < numsSize; i++){
      CounterArray[nums[i]]++;
    }
    for(unsigned short int i = 0; i < 101; i++){
    unsigned short int res = (CounterArray[i]*(CounterArray[i]-1)/2); //Sum of n-1 number series {1,2,3,....n-1} formula
    Counter += res;
  }
    return Counter;
}