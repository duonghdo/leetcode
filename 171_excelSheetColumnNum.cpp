class Solution {
public:
    int titleToNumber(string s) {
    	int colnum = 0;
        for (int i = 0; i < s.size(); i++)
        {
        	colnum += (int(s[i] - 'A') + 1) * pow(26, s.size() - 1 - i);
        }
        return colnum;
    }
};