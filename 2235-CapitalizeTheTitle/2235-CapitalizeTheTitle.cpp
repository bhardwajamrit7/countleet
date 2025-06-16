// Last updated: 6/16/2025, 11:46:27 AM
class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        int start = 0;  

        for (int i = 0; i <= n; i++) {
            if (i == n || title[i] == ' ') { 
                int wordLength = i - start;
                
                for (int j = start; j < i; j++) {
                    title[j] = tolower(title[j]);
                }

                if (wordLength > 2) {
                    title[start] = toupper(title[start]);
                }

                start = i + 1;  
            }
        }
        return title;
    }
};