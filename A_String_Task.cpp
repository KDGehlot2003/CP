#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char> v;
    string vowles = "AOYEUIaoyeui";
    for (int i=0;i<vowles.size();i++) {
        v.push_back(vowles[i]);
    }
    string ans;
    for (int i=0; i<s.size();i++ ){
        int cnt = count(v.begin(), v.end(), s[i]); 
        if (cnt > 0) { 
            continue;
        } 
        else { 
            ans+=tolower(s[i]);
        } 
    }
    string final_ans;
    for (int i =0; i<ans.size();i++) {
        final_ans = final_ans + '.' + ans[i];
    }
    cout<<final_ans;
    return 0;
}


// "A", "O", "Y", "E", "U", "I"
// deletes all the vowels,
// inserts a character "." before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.