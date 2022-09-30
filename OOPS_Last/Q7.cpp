#include <iostream>
using namespace std;
 
bool isVowel(char ch)
{
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        return false;
 
    return true;
}

string replaceConsonants(string s)
{
    for (int i = 0; i < s.length(); i++) {
 
        if (!isVowel(s[i])) {
 
                
                s[i] = (char)(s[i] + 1);
        }
 
                if (isVowel(s[i]))
                    s[i] = (char)(s[i] + 1);
            } 
            return s;
}
int main()
{
    string s = "Boy";
 
    cout << replaceConsonants(s);
 
    return 0;
}