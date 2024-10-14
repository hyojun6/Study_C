#include <stdio.h>
long long num, length; //현제 우박수, 우박수길이
long long result_num, max_length; //출력될 우박수, 길이
int max = 100000001
long long memo[max];

void memoreset() {
  for(int i=0; i<=max; i++)
    memo[i] = -1;
}

void f(long long n) {
  if(n==1) {
    length++;
    if(length>max_length) {
      result_num = num;
      max_length = length;
    } else if(length==max_length) {
      if(num<max_length) {
        result_num = num;
        max_length = length;
      }}}
  else if(n%2==0){
    n/=2;
    length++;
    f(n);
  } else {
    n=n*3+1;
    length++;
    f(n);
  }
}

int main(void) {
  long long a,b;
  scanf("%lld %lld", &a, &b);
  memoreset();
  for(long long i=a; i<=b; i++) {
    length = 0;
    num=i;
    f(i);
  } 

  printf("%lld %lld", result_num, max_length);
  return 0;
}