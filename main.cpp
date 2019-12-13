#include <iostream>
#include <ctime>
#include "classes.h"
#include "text.h"
using namespace std;

int main() {
    srand(time(NULL));
    string temp_creat,temp_cont;
    int rand_num = rand();
    int i,j,number_of_threads=2,number_of_posts;
    Forum forum1("Αντικειμενοστραφής Προγραμματισμός", number_of_threads);

    cout << "Now printing thread number 1 : " << endl;
    forum1.Print_thread(1);
    for (i = 0; i < (rand_num % 2 + 1); i++) {

	forum1.Print_post((rand_num + i) % 3);
	cout << endl;
}
  cout <<"22222222222222222222222222222222222222222222222222222222222222222"<<endl;
  cout <<"22222222222222222222222222222222222222222222222222222222222222222"<<endl;

	// TODO print posts


  //  for(i=0;i<number_of_threads;i++){
    btree *tree1=new btree();
    btree *tree2=new btree();
    number_of_posts=forum1.thread_array[1]->post_count;
    cout <<  "SKRT:" << number_of_posts << endl;
      tree1->insert("LMAO1","NOP1");
      tree1->insert("LMAO2","NOP2");
      tree1->insert("LMAO3","NOP3");
      //tree1->insert((forum1.thread_array[1]->post_array[0]->post_creator),(forum1.thread_array[1]->post_array[0]->post_content));//2
      //tree1->print_list();


    // for (j=0;j<number_of_posts;j++){
      //   //tree2->insert((forum1.thread_array[1]->post_array[j]->post_creator),(forum1.thread_array[1]->post_array[j]->post_content));
      // }
      // cout<< "THIS IS TREE1\n";
      // tree1->print_list();//TODO lathos simeio
      // cout<<"THIS IS TREE2\n";
      // tree2->print_list();
      //tree1->tree_enhance(tree2->get_treeroot(),1);
      cout<<"tree1 inorder"<<endl;
      tree1->inorder_print();
      //cout<<"tree2 inorder"<<endl;
      //tree2->inorder_print();


    }
