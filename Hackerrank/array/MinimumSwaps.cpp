int minimumSwaps(vector<int> arr) {
    size_t swaps = 0, n = arr.size();
    for (size_t i = 0; i < n; ++i)
        while (arr[i] != i + 1) {
            int correct_index = arr[i] - 1;
            swap (arr[i], arr[correct_index]);
            swaps ++;
        }
    return swaps;
}
