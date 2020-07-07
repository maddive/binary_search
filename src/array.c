#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m) {
  return k < A[m];
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = 0; //最小の初期値
  ub = n; //最大の初期値

  while(ub - lb > 1) {
    int mid = (lb + ub) / 2;
    if(p(mid)) {
      ub = mid;
    } else {
      lb = mid;
    }
  }

  printf("%d\n", ub);
  return 0;
}
