// TODO na kano sinartiseis gia print sta post kai thread
#include <string>

using namespace std;

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

private:
    int id;
    string post_title;
    string post_creator;
    Date post_date;
    string post_content;
};

class Thread {
public:
    Thread(string, string, int, int);
    Thread();
    ~Thread();
    void Print_thread_creator();
    void Print_thread_subject();
    void Print_thread_date();

    Post **post_array;

private:
    int post_count;
    string thread_subject;
    Date thread_date;
    string thread_creator;
    // Post **post_array;
};

class Forum {
private:
    string forum_title;
    int thread_count;
    Thread **thread_array;

public:
    Forum(string name, int count);
    ~Forum();
    void Print_thread(int);
    void Print_post(int);
};
