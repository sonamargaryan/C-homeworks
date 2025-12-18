/* Հաշվել մինիմալ ջնջումների քանակը, որից հետո 2-ն էլ կդառնան անագրամ */
int makeAnagram (string a, string b) {
    vector<int> freqA (26, 0);
    vector<int> freqB (26, 0);

    for (size_t i = 0; i < a.size (); ++i) 
        freqA[a[i]  - 'a']++; 
    
    for (size_t i = 0; i < b.size (); ++i) 
        freqB[b[i]  - 'a']++; 

    int deletions = 0;
    for (size_t i = 0; i < 26; ++i) 
        deletions += abs(freqA[i] - freqB[i]);

    return deletions;
}
