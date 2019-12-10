
using namespace std;

class Date
{
public:
  Date(int, int, int);
  ~Date();

private:
  int day,month,year;
};


class Post
{
public:
  Post();
  Post(const char*,const char*,const char*,int);
  ~Post();
  void Print_creator();

private:
  int id;
  const char* post_title;
  const char* post_creator;
  Date* post_date;
  const char* post_content;
};

class Thread
{
public:
  Thread(const char*,const char*,int);
  Thread();
  ~Thread();
  void set_thread_subject(char *);
  char* get_thread_subject();
  void set_thread_creator(char *);
  char * get_thread_creator();
private:
  const char* thread_subject;
  Date *thread_date;
  const char* thread_creator;
Post **post_array;

};


class Forum
{

  private:
    string forum_title ;
    int thread_count;
    Thread **thread_array;
  public:
    Forum( char* name,int count);
    ~Forum();

    void set_forum_title(const char*);
    void set_thread_count(int );
    void print_forum_title();
    void print_thread_count();


  };
