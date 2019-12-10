#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
string get_rand_text(int i){//gia seed sto srand
    string article[5] = {"the ", "a ", "one ", "some ", "my "};
    string nounPerson[5] = {"boy ", "girl ", "dog ", "cat ", "person "};
    string nounPlace[5] = {"town ", "cafe ", "shop ", "store ", "house "};
    string verb[5] = {"drove ", "jumped ", "ran ", "walked ", "striked "};
    string preposition[5] = {"to ", "from ", "over ", "across ", "on "};
    string sentence;
    int word, word1, word2, word3, word4, word5;

    srand(time(NULL)+i);

    word = rand() % 5;
    word1 = rand() % 5;
    word2 = rand() % 5;
    word3 = rand() % 5;
    word4 = rand() % 5;
    word5 = rand() % 5;

    //this is where the strings from the arrays add up to make a sentence
    sentence = article[word];
    sentence = sentence + nounPerson[word1];
    sentence = sentence + verb[word2];
    sentence = sentence + preposition[word3];
    sentence = sentence + article[word4];
    sentence = sentence + nounPlace[word5];
    cout<<sentence<<endl;
    return sentence;
}
