class Solution {
public:
    string reverseVowels(string s) {
        vector<int> positions;

        stack<char> vowels;

        vector<char> v{'a', 'e', 'i', 'o', 'u'};

        for (int i{0}; i<s.length(); ++i) {
            for (char x:v) {

                if (x==s[i] || x-32==s[i]) {
                    positions.push_back(i);
                    vowels.push(s[i]);
                }
            }
        }

        for (int x:positions) {
            s[x] = vowels.top();
            vowels.pop();
        }

        return s;        
    }
};
