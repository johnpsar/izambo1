#include<string>

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
  Post( string,string, string,int);
  ~Post();
  void Print_creator();

private:
  int id;
    string post_title;
    string post_creator;
  Date* post_date;
    string post_content;

};

class Thread
{
public:
  Thread(string, string,int);
  Thread();
  ~Thread();

private:
  int post_count;
    string thread_subject;
  Date *thread_date;
    string thread_creator;
  Post **post_array;

};


class Forum
{

  private:
    string forum_title ;
    int thread_count;
    Thread **thread_array;
  public:
    Forum( string name,int count);
    ~Forum();



  };
