**Number of 1 Bits**
```
int hammingWeight(uint32_t n) {
int res = 0;
while(n > 0){ //while loop works until it reaches 0
n = (n & (n-1));  //Applying Brian Kerringam's algorithm with AND Bitwise operation to get total numbers of ones in a given number
res++;
}
return res;
}
```
* Use while loop for iterating until number becomes null.
* Inside while loop apply Brian Kernighan's algorithm with AND Bitwise operation to get total numbers of ones in a given number.
* Increment the result and the counter result is our final output i.e. number of 1's.