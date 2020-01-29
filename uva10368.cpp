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

void swap_winner (string &ans)
{
    if (ans == "Ari")      ans = "Rich";
    else                        ans = "Ari";
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//freopen("input.txt",  "r",  stdin);     freopen("output.txt", "w", stdout);

ll t;
cin >> t;
while (t--)
{
ll a, b;
cin >> a >> b;
if (b > a)  swap (a, b);

string ans = "Ari";

while (true)
{
    if (a/b > 1 || a%b == 0)
    {
        cout << ans << '\n';
        break;
    }

    a = a%b;
    swap (a, b);
    swap_winner(ans);
}


}

}


//(45, 19) a/b > 1 comes 2 times
