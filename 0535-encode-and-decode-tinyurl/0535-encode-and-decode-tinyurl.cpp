class Solution {
public:
    unordered_map<int, string>um;
    int id=1;
    // Encodes a URL to a shortened URL.
    string encode(string longURL) {
        um[id]=longURL;
        string shortURL = "https://tinyurl.com/"+to_string(id);
        id++;
        return shortURL;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortURL) {
        int shortURL_id=stoi(shortURL.substr(shortURL.find_last_of("/")+1));
        return um[shortURL_id];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));