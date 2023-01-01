class Solution {
public:
bool wordPattern(string pattern, string s) {

    vector<string>word;                    
    string temp="";
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            word.push_back(temp);
            temp="";
        }
        else
        {
            temp=temp+s[i];
        }
    }
    
    word.push_back(temp);                
    
    if(word.size()!=pattern.size())
    {
        return false;
    }
    
    unordered_map<char,int>mp1;
    unordered_map<string,int>mp2;
    
    for(int i=0;i<pattern.length();i++)
    {
        if(mp1[pattern[i]]==0)
        {
            mp1[pattern[i]]=i+1;
        }
        
        if(mp2[word[i]]==0)
        {
            mp2[word[i]]=i+1;
        }
        
        if(mp1[pattern[i]]!=mp2[word[i]])
             return false;
    }
    
    return true;
}
};
