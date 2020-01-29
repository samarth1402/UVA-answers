#include <bits/stdc++.h>
using namespace std;

#define llint   long long
#define ll      long long
#define M       1000000007
#define pb      push_back
#define MP      make_pair
#define pll     pair<llint, llint>
#define F       first
#define S       second

llint dx4[4] = {0, 1, 0, -1};
llint dy4[4] = {1, 0, -1, 0};
llint dy8[8] = {1, 1, 1, 0, -1, -1, -1, 0};
llint dx8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//freopen("input.txt",  "r",  stdin);     freopen("output.txt", "w", stdout);

double n, p;
while (cin >> n >> p)
{
    double ans = pow (p, 1.0/n);
    cout << fixed << setprecision(0) << ans << '\n';
}

}


