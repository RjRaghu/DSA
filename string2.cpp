//Program to find the maximum number of occured character
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string in which you want to find out which alphabet occurs the most: ";
    getline(cin, s);
    int freq[51];
    for (int i = 0; i < 51; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'A']++;
    }
    char ans = 'A';
    int maxf = 0;
    for (int i = 0; i < 51; i++)
    {
        if (freq[i] > maxf)
        {
            maxf = freq[i];
            ans = i + 'A';
        }
    }
    cout << maxf << endl
         << ans;
}