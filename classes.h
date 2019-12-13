
#include <string>

using namespace std;
typedef struct ListNode{
  string content;
  ListNode *next;
}ListNode;

typedef struct TreeNode{
    string creator;
    ListNode *headref;
    TreeNode *left;
    TreeNode *right;

  }TreeNode;

  class btree{
public:
    btree();
    ~btree();
    TreeNode *MergeTrees(TreeNode * , TreeNode * ); 

    void insert_list(TreeNode *,string);
    void insert(string,string);
    TreeNode *search (string);
    void destroy_tree();
    void inorder_print();
    void print_list();
  private:
    void print_list(TreeNode*);
    TreeNode *search(string,TreeNode *leaf);
    void insert(string,string,TreeNode *leaf);
    void inorder_print(TreeNode *leaf);
    void destroy_tree(TreeNode *leaf);
    TreeNode *treeroot;
  };


class Date {
public:
    Date();
    ~Date();
    void set(int, int, int);
    void get(int &, int &, int &);

private:
    int day, month, year;
};

class Post {
public:
    Post();
    Post(string, string, string, int);
    ~Post();
    void Print_creator();
    void Print_title();
    void Print_content();
    string get_content();
    string post_creator;
    string post_content;
private:
    int id;
    string post_title;
  //  string post_creator; TODO make private again
    Date post_date;
    //string post_content;
};

class Thread {
public:
    Thread(string, string, int, int);
    Thread();
    ~Thread();
    void Print_thread_creator();
    void Print_thread_subject();
    void Print_thread_date();
    int get_post_count();
    Post **post_array;
    int post_count;//TODO kano private

private:

    string thread_subject;
    Date thread_date;
    string thread_creator;
    // Post **post_array;
};

class Forum {
private:
    string forum_title;
    int thread_count;


public:
    Forum(string name, int count);
    ~Forum();
    void Print_thread(int);
    void Print_post(int);
    Thread **thread_array;
};
