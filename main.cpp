#include <iostream>
#include <ctime>
#include "classes.h"
#include "text.h"
using namespace std;

int main() {
    srand(time(NULL));

    int rand_num = rand();
    int i;
    Forum forum1("Αντικειμενοστραφής Προγραμματισμός", 2);

    cout << "Now printing thread number 1 : " << endl;
    forum1.Print_thread(1);
    for (i = 0; i < (rand_num % 2 + 1); i++) {
	cout << "Now printing " << (rand_num % 2 + 1) << "  random posts " <<
	    endl;
	forum1.Print_post((rand_num + i) % 3);
	cout << endl;
	// TODO print posts
    }
}
