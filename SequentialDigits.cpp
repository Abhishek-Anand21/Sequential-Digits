class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string num = "123456789";
        
        string lo = to_string(low);   // converting to string
        string hi = to_string(high);
        
        int l1 = lo.length();      // finding length low
        int h1 = hi.length();      // finding length high
        
        while(l1 <= h1) {
            for(int i=0;i<num.length()-l1+1 ; i++) {
                int val = stoi(num.substr(i,l1));     // substr -> getting substring of length l1 , stoi -> converting string to int
                if(val>=low && val<=high)
                    ans.push_back(val);
            }
            l1++;
        }
        return ans;
    }
};
