class Solution {
public:
    bool halvesAreAlike(string s) {
        int len= s.length();
        int a=0,b=0;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0,j=len-1 ; i<len/2;i++,j--){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                a++;
            }
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                b++;
            }
        }
        return a==b?true: false;
    }
};