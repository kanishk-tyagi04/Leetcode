class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_set<char>us;
        for(char c : jewels){
            us.insert(c);
        }
      //  int count=0;
        for(char s : stones){
            if(us.find(s) != us .end()){
                count++;
            }
        }
        return count;
    }
};