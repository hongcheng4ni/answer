int* nextFibonacci(int *arr){
  int i=0;
  int p_fn, fn, n_fn;
  int ans[3];

  for(i=0;i<3;i++){
    p_fn  = 1;
    fn  = 1;
    n_fn  = 2;
    while(fn < arr[i]){
      n_fn  = p_fn  + fn;
      p_fn  = fn;
      fn  = n_fn;
    }

    ans[i]=n_fn;
    printf("%d\n",ans[i]);
  }


  return ans;
}
