#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5; 
int n, q, mod, z;
int a[N], b[N], c[N], fib[N];
void upd(int &x, int a, int b) {
  if (!x) --z;
  x = (x + a + b)%mod;
  if (!x) ++z;
}
int main() {
  scanf("%d%d%d", &n, &q, &mod);
  fib[1] = fib[2] = 1;
  for (int i=3; i<=n; i++) fib[i] = (fib[i-1] + fib[i-2])%mod;
  for (int i=1; i<=n; i++) scanf("%d", a+i);
  for (int i=1; i<=n; i++) scanf("%d", b+i);
  z = n + 1;
  for (int i=1; i<=n; i++) {
    upd(c[i], a[i], mod-b[i]);
  }
  for (int i=n; i>=2; i--) {
    upd(c[i], mod-c[i-1], mod-c[i-2]);
  }
  while (q--) {
    static char op[2];
    static int l, r;
    scanf("%s%d%d", op, &l, &r);
    if (op[0]=='A') {
      upd(c[l], 1, 0);
      if (r+1<=n) upd(c[r+1], mod-fib[r-l+1], mod-fib[r-l]);
      if (r+2<=n) upd(c[r+2], mod-fib[r-l+1], 0);
    } else {
      upd(c[l], mod-1, 0);
      if (r+1<=n) upd(c[r+1], fib[r-l+1], fib[r-l]);
      if (r+2<=n) upd(c[r+2], fib[r-l+1], 0);
    }
    if (z==n+1) puts("YES");
    else puts("NO");
  }
  return 0;
}
