int* nextFibonacci(int* arr){
  int i;
  int p_fn, fn, n_fn;
  int ans[strlen(arr)];
  
  for(i=0;i<strlen(arr)){
    p_fn  = 1;
    fn  = 1;
    n_fn  = 2;
    while(arr[i] < fn){
      n_fn  = p_fn  + fn;
      p_fn  = fn;
      fn  = n_fn;
    }
    
    ans[i]=fn;
  }
  
  return ans;
}
