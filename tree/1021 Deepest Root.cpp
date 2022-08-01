#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 10010, M = N * 2;
int h[N], e[M], ne[M], idx;
int p[N];
int n;

void add(int a, int b)
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++;
}

int find(int x)
{
    if (x != p[x]) p[x] = find(p[x]);
    return p[x];
}

int dfs(int u, int father)
{
    int depth = 0;

    for (int i = h[u]; ~i; i = ne[i])
    {
        int j = e[i];
        if (j == father) continue;
        depth = max(depth, dfs(j, u) + 1);
    }
    return depth;
}

int main()
{
    cin >> n;

    memset(h, -1, sizeof h);

    for (int i = 1; i <= n; i ++ ) p[i] = i;
    int cnt = n;

    for (int i = 0; i < n - 1; i ++ )
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (find(a) != find(b))
        {
            cnt --;
            p[find(a)] = find(b);
        }
        add(a, b), add(b, a);
    }

    if (cnt > 1) printf("Error: %d components\n", cnt);
    else
    {
        int max_depth = -1;
        vector<int> nodes;
        
        for (int i = 1; i <= n; i ++ )
        {
            int depth = dfs(i, -1);
            if (depth > max_depth)
            {
                max_depth = depth;
                nodes.clear();
                nodes.push_back(i);
            }
            else if (depth == max_depth)
                nodes.push_back(i);
        }

        for (auto v : nodes) cout << v << endl;

    }

    return 0;
}