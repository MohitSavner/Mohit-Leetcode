**Single Number in a given twice repeated element (Odd Occuring Number)**
​
* Initialize res with array's 0th index.
* XOR with 0th index's value and iterate through given array to get single number.
​

Time Complexity: O(n),
Auxiliary Space: O(1)
​

**Properties of XOR:**
X^0 = X
X^Y = Y^X
X^(Y^Z) = (X^Y)^Z
X^X = 0
​

Example:
res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4
​
Since XOR is associative and commutative, above
expression can be written as:
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)
= 7 ^ 0 ^ 0 ^ 0
= 7 ^ 0
= 7
