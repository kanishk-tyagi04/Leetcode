class Solution {
public:
    int compress(vector<char>& chars) {
        int writePointer = 0;
        int charCount = 1;
        for (int i = 1; i < chars.size() + 1; i++) {
            if (i < chars.size() && chars[i] == chars[i - 1]) {
                charCount += 1;
            }
            else {
                chars[writePointer] = chars[i - 1];
                writePointer += 1;
                
                if (charCount > 1) {
                    for (char c : to_string(charCount)) {
                        chars[writePointer] = c;
                        writePointer += 1;
                    }
                }

                charCount = 1;
            }
        }
        return writePointer;
    }
};
