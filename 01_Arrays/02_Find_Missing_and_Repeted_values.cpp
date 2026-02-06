class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<int> freq((n*n)+1, 0);
        int first = -1, second = -1;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                freq[grid[i][j]]++;
            }
        }
        for(int k = 1; k<freq.size(); k++){
            if(freq[k] > 1) first = k;
            if(freq[k] == 0) second = k;
        } 
        return {first, second};
    }
};