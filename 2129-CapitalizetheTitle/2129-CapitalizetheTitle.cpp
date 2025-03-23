// Last updated: 3/23/2025, 10:47:02 PM
class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
    string word, result;
    
    while (ss >> word) {
        if (!result.empty()) result += " "; 

        if (word.length() <= 2) {
            for (char &c : word) c = tolower(c); 
        } else {
            word[0] = toupper(word[0]); 
            for (size_t i = 1; i < word.size(); i++) {
                word[i] = tolower(word[i]); 
            }
        }
        result += word;
    }
    
    return result;
    }
};