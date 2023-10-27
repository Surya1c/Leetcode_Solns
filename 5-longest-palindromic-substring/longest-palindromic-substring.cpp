class Solution {
public:
    string lps(string s, int sws){
        // Sliding window loop
        for (int start = 0, end = sws-1; end != s.size(); ++start, ++end){
            // Two pointer method
            for (int left = start, right = end; left <= right; ++left, --right) {
                if (s.at(left) != s.at(right))
                    break;
					
                if (left+1 >= right-1)
                    return s.substr(start, sws);
            }
        }
        return "";
    }
    
    string longestPalindrome(string s) {
        int sliding_window_size = (int) s.size();    
		
        for (; sliding_window_size != 0; sliding_window_size--) {
            string longest_palindromic_substring = lps(s, sliding_window_size);
			
            if (!longest_palindromic_substring.empty()) {
                return longest_palindromic_substring;
                break;
            }
        }
        return "";
    }
};