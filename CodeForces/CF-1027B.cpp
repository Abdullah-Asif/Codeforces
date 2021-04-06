



void solve() {
	ll x, y;
	scanf("%lld%lld", &x, &y);
	x--;y--;
	ll ans = 0;
	if ((x + y) % 2 == 0) {
		ans += (x / 2) * n;
		if (x % 2 == 0) {
		} else {
			ans += (n + 1) / 2;
		}
		ans += y / 2;
	} else {
		ans += (n * n + 1) / 2;
		ans += (x / 2) * n;
		if (x % 2 == 0) {
 
		} else {
			ans += n / 2;
		}
		ans += y / 2;
	}
	printf("%lld\n", ans + 1);
}
 