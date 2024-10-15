#include <stdio.h>
int parent[1001];

int init(int n) {
  for(int i=0; i<n; i++)
    parent[i] = i;
}

int find(int a) {
  if(parent[a] != a)
    parent[a] = find(parent[a]);
  return parent[a];
}

void union_sets(int a, int b) {
  int rootX = find(a);
  int rootY = find(b);
  parent[rootX] = rootY;
}

int main() {
  int n, m, i, a, b;
  scanf("%d %d", &n, &m);
  init(n);

  for(i=0; i<m; i++) {
    scanf("%d %d", &a, &b);
    if(find(a) != find(b))
      union_sets(a, b);
  }

  scanf("%d %d", &a, &b);
  if(find(a) != find(b))
    printf("NO");
  else
    printf("YES");

  return 0;
}