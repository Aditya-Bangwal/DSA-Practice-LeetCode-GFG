//Given a string str, your task is to find the length of the smallest window that contains all the characters of the given string at least once

set<char> s;
    for (char ch : str) s.insert(ch);
    int n = s.size(); // total distinct characters

    unordered_map<char,int> m;
    int i = 0, j = 0;
    int c = 0; // count of distinct chars in window
    int ans = INT_MAX;

    while (j < str.size()) {
        // expand window
        if (m[str[j]] == 0) c++; 
        m[str[j]]++;
        j++;

        // shrink window when all distinct chars are present
        while (c == n) {
            ans = min(ans, j - i);
            if (m[str[i]] == 1) c--;
            m[str[i]]--;
            i++;
        }
    }

    return ans;
