//to find duplicate character in the string

//solution:using hashmap to store count of each character 

string printDuplicates(string s) {
  //Hash map to store count of each character
    unordered_map<char, int> freq;

   // counting number of times each character appeared.
    for (char c : s) {
        freq[c]++;
    }

  
    string ans="";
    // Traverse the map and print characters with count > 1
    for (auto it : freq) {
        if (it.second > 1) {
           ans+=it.first;
        }
    }
  return ans;
}
