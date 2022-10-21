
int powof2(int n){
  int i = 1;
  while(i*2<= n){
    i = i*2;
  }
  return i;
}


int findTheWinner(int n, int k){
    if(n == 1) return 1;
    return (findTheWinner(n-1, k) + k - 1) % n + 1;
}

/*
int findTheWinner(int n, int k){
  
  
  int res = powof2(n);
  int l = n - res;
  return (2*l+1);
}
*/