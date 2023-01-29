#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string currentWord;
    vector<string> wordList;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> currentWord;
        wordList.push_back(currentWord);
    }
    
    for (int i = 0; i < n; i++) {
        if (wordList[i].length() > 10) {
            cout << wordList[i][0] << wordList[i].length() - 2 << wordList[i].back() << "\n";
        }
        else {
            cout << wordList[i] + "\n";
        }
    }
}