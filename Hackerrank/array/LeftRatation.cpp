vector<int> rotLeft(vector<int> a, int d) {
    int n = a.size();
    d = d % n; 

    vector<int> newarr(n);
    size_t k = 0;

    for (size_t i = d; i < n; ++i)
        newarr[k++] = a[i];

    for (size_t i = 0; i < d; ++i)
        newarr[k++] = a[i];

    return newarr;
}
