/*
//Solution using recursion
//n = 2 -> the winner index is (0 + k) % 2 (base-0)
//n = 3 -> the winner index is (f(2) + k) % 3 (base-0)
//with n -> the winner index is (f(n-1) + k) % n (base-0)
//

int findTheWinner(int n, int k){
    if(n == 1) return 1;
    return (findTheWinner(n-1, k) + k - 1) % n + 1;
}
*/
//Solution in Linear time
int findTheWinner(int n, int k){
    int result = 0;
    for(int i = 1; i<=n; ++i)
        result = (result + k) % i;
    return result + 1;
}