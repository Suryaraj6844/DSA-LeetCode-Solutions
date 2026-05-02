class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        reverse(s.begin(), s.end());
        string str = "";
        for(int i = 0; i<n; i++){
            while(i < n && s[i] == ' ') i++;
            string word = "";
            while(i < n && s[i] != ' '){
                word.push_back(s[i++]);

            }
            if(word.size() > 0){
                reverse(word.begin(), word.end());
                str += word + ' ';
            }
        }
        if(str.size() > 0) str.pop_back();
        return str;
    }
};