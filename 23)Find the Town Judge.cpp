class Solution {
public:
    int findJudge(int n, vector<vector<int>>&a) {
        vector<bool> v(n + 1, true);
        // A person believing other person cannot be judge
        for(int i = 0; i < a.size(); i++)
            v[a[i][0]] = false;
        int res = -1;
        for(int i = 1; i <= n; i++)
        {
            if(v[i])
            {
              //If there are 2 or more persons who doesn't believe anyone then there can't be any judge 
                if(res != -1)
                    return -1;
                res = i;
            }
        }
        int cnt = 0;
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i][1] == res)
                cnt++;
        }
        if(cnt == n - 1)
            return res;
        return -1;
    }
};
