int findMinOpeartion(vector<vector<int>>matrix, int n)
{
	vector<int> a(n,0), b(n,0);
    int i=0,j=0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)     {
			a[i] += matrix[i][j];
			b[j] += matrix[i][j];
		}
	int mx = max(*max_element(a.begin(),a.end()),*max_element(b.begin(),b.end()));
	// for (int i = 0; i < n; ++i) {
	// 	mx = max(mx, b[i]);
	// 	mx = max(mx, a[i]);
	// }
	int count = 0;
    i=0,j=0;
	while(i < n && j < n) 
    {
		int minus = min(mx - a[i],mx - b[j]);
		matrix[i][j] += minus;
		a[i] += minus;
		b[j] += minus;

		count += minus;

		if (b[j] == mx)
			++j;
		if (a[i] == mx)
			++i;
	}
	return count;
}