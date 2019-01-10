int isSubset(char *arr_1, char *arr_2){
  int i,j;
  int *rec = calloc(26,sizeof(int));
  
  for(i=0;i<strlen(arr_1);i++){
    j = (int) arr_1[i] - 65;
    if(rec[j]==0){
      rec[j] = 1;
  }
  
  for(i=0;i<strlen(arr_2);i++){
    j = (int) arr_2[i] - 65;
    if(rec[j]==0){
      return 0;
    }
  }
  
  free(rec);
  
  return 1;
}
