int totalWays(int n, string str)
{
    vector<int> idx;
    int cntWays = 1;
    int i=n;
    for (int i = 0; i < n; i++) 
        if (str[i] == '0')
            idx.push_back(i);

    int m = idx.size();
    if (m == 0 or m % 2)return 0;
    for (int i = 2; i < m; i += 2)
        cntWays = cntWays * (idx[i]- idx[i - 1]);
    return cntWays;
}