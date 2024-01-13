bool isPalindrome(int x){
    long int sum =0; 
    int rem =0;
if(x < 0 || (x%10 == 0 && x != 0)) //Eliminates Negative, eq0 numbers tc
    return false;
while(x > sum)
{
  rem = x%10; // Provides Remainder
  sum = sum*10 + rem; // Sum = Total remaining digits in a given number
  x = x/10; //Extracting Last digit from LSB to get remaining number
}
return (x == sum || x == sum/10); //Palindrome Number returns true
}
//Time Complexity: O(n)
