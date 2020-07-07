#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m) {
  int i;
  int sum = 1;
  int works = 0;
  for(i = 0; i < n; i++) {
    if(A[i] > m) return 0;
    if(works + A[i] > m) {
      sum++;
      works = A[i];
    } else {
      works += A[i];
    }
  }
  return sum <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  lb = 1; //最小の初期値
  ub = 1000000000; //最大の初期値

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
