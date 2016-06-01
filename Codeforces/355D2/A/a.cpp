#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;
typedef pair<int,int> pii;
typedef pair<lint,lint> pll;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    int n, h;
    scanf("%d%d", &n, &h);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x <= h) ans++;
        else ans += 2;
    }
    printf("%d\n", ans);
    return 0;
}
