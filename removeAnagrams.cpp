class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
         int i=1;int last=0;
        for( i;i<words.size();i){
           // cout<<i<<" "<< words[i]<<endl;
           if(last<0){i++,continue;};
           else
                vector<int>freq1(26,0);
                vector<int>freq2(26,0);
                string s1=words[i];
                string s2=words[i-1];
                for(auto j:s1)  freq1[(int)j-97]++;
                for(auto j:s2)  freq2[(int)j-97]++;
                bool flag=false;
                for(int j=0;j<26;j++){
                    if(freq1[j]!=freq2[j]){
                        flag=true;
                        break;
                    }
                }
                if(!flag){
                // words.erase(words.begin()+i-1);
                    last=i-1;
                    i=1;
                }
                else {
                    i++;
                }
        }
        return words;
    }
};
