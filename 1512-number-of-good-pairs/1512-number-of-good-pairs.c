/*
  Method 1: Brute force approach
    Time Complexity: O(n^2)
    Space Complexity: O(1)
    */
    
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
    

/*
  Method 2: Optimized Approach
    Time Complexity: O(n)
    Space Complexity: O(n)


int numIdenticalPairs(int* nums, int numsSize){
    int gpair = (numsSize*(numsSize-1)/2);
    for(int i = 0; (i < numsSize); i++){
      
    }
       
    }
    return counter;
}
*/