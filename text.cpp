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

    return sentence;
}

string get_rand_name(int i){
  string name[5]={"John","Rob","Mike","Donald","George"};
  string surname[5]={" Bush"," Trump"," Nikolaj"," Armstrong"," Varoufakis"};

  int word,word1;

  srand(time(NULL)+i);

  word =rand()%5;
  word1=rand()%5;

  string sentence;

  sentence=name[word];
  sentence=sentence+surname[word1];
  return sentence;
}

string get_rand_title(int i){
  string title[6]={"Laughing Name","The Obsessed Dragon","Sorcerer of Window","The Slave's Destruction","The Slave's Return","The Abyss of the Flame"};

  int random;
  srand(time(NULL)+i);

  random=rand()%6;
  string sentence=title[random];
  return sentence;
}
