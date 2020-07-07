#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m) {
  int i;
  int sum = 0;
  for(i = 0; i < n; i++) {
    sum += A[i] / m;
  }
  return k <= sum;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = 0; //最小の初期値
  ub = 1000000000; //最大の初期値

  while(ub - lb > 1) {
    int mid = (lb + ub) / 2;
    if(p(mid)) {
      lb = mid;
    } else {
      ub = mid;
    }
  }

  printf("%d\n", lb);
  return 0;
}
