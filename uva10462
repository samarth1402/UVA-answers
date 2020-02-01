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

//dsu
ll par[107];
ll size[107];

void init ()
{
	for (ll i = 0; i < 107; i++)
	{
		par[i] = i;
		size[i] = 1;
	}
}

ll root (ll i)
{
	while (par[i] != i)
	{
		par[i] = root(par[i]);
		i = par[i];
	}
	return i;
}

void merge (ll a, ll b)
{
	ll r_a = root(a);
	ll r_b = root(b);

	if (size[r_a] < size[r_b])
	{
		size[r_b] += size[r_a];
		par[r_a] = r_b;
	}
	else
	{
		size[r_a] += size[r_b];
		par[r_b] = r_a;
	}
}

//kruskal
pair <ll, pll> p[207];
vector<ll> inGraph;
ll nodes, edges, treeSize = 0;

ll kruskal (ll mode, ll notInc = -1)		//mode 0 : second MST. mode 1: first MST
{
	ll u, v, cost, mincost = 0;
	treeSize = 0;
	for (ll i = 0; i < edges; i++)
	{
		if (i == notInc)		continue;	//in finding the second best MST, we exclude one of edges of best MST
		u = p[i].S.F;
		v = p[i].S.S;
		cost = p[i].F;
		if (root(u) != root(v))
		{
			mincost += cost;
			if (mode == 1)		inGraph.pb(i);	//noting the edges in best MST
			treeSize++;
			merge(u,v);
		}
	}
	return mincost;
}

bool isValid ()
{
	return (treeSize == nodes-1);
}

void solve(ll T)
{

cin >> nodes >> edges;
for (ll i = 0; i < edges; i++)
{
	ll u, v, weight;
	cin >> u >> v >> weight;
	p[i] = MP(weight,MP(u,v));
}
sort(p, p+edges);

inGraph.clear();
init();
ll minCost = kruskal(1);

if (!isValid())		//checks is MST is possible (i.e all nodes are connected)
{
	cout << "Case #" << T << " : No way\n";
	return;
}

ll minCost2 = LONG_MAX;
for (ll i = 0; i < inGraph.size(); i++)	//for finding sec best MST, we try to make MST excluding one of the edges of best MST
{
	init();
	ll tCost = kruskal(0, inGraph[i]);
	if (isValid())				minCost2 = min(minCost2, tCost);
}

if (minCost2 == LONG_MAX)
{
	cout << "Case #" << T << " : No second way\n";
	return;
}

cout << "Case #" << T << " : " << minCost2 << '\n';
return;

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


ll t;
cin >> t;
for (ll i = 1; i <= t; i++)
{
	solve (i);
}

}
