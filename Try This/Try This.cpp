#include "../../std_lib_facilities.h"

int main()
{
    vector<string> words;
    for (string temp; cin >> temp;)
        words.push_back(temp);

    vector<string> dislike = { "brocoli", "lechuga", "verde" };
    for (int i = 0; i < words.size(); ++i)
        if (words[i] == dislike[0] || words[i] == dislike[1] || words[i] == dislike[2])
            cout << "BLEEP" << " ";
        else
            cout << words[i] << " ";
    cout << "\n";
}