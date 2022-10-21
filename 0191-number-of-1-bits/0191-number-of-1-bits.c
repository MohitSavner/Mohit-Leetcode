int hammingWeight(uint32_t n) {
    int res = 0;
    while(n > 0){ //while loop works until it reaches 0
        n = (n & (n-1));  //Applying Brian Kernighan's algorithm with AND Bitwise operation to get total numbers of ones in a given number
        res++;
        }  
    return res;     
}