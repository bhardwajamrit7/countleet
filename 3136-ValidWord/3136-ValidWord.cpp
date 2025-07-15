// Last updated: 7/15/2025, 11:11:55 AM
class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        int vowels=0;
        int consonants=0;
        for(int i=0;i<word.size();i++){
            if(isalpha(word[i])){
                if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'||word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                vowels++;
             }
                else{
            consonants++;
                }
           }else if(!isdigit(word[i])){
            return false;

           }
        } 

           return vowels>=1 &&consonants>=1;
    }
};