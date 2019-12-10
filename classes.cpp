#include<cstring>
#include<iostream>
#include"classes.h"
using namespace std;
///////////////////////////////////////////////////////////////////////////////
//FORUM

//Constructor for Forum
Forum::Forum( char* name,int count){
  int i;
    forum_title=name;
    thread_count=count;
    cout<<"Forum with title: " <<forum_title<< "has just been created!"<<endl;
  Thread thread_array[count];
  for(i=0;i<count;i++){
    thread_array[i]=Thread("subject","creator",4);
  }
  }
//Destructor for Forum
Forum::~Forum(){
  cout<< "Forum with title:"<< forum_title <<"is about to be destroyed!"<<endl;
};

  void Forum::set_forum_title(const char* name){
    name=new char[strlen(name)+1];
  //  strcpy(forum_title,name);
  }

  void Forum::set_thread_count(int x){
      thread_count=x;
    }


  void Forum::print_forum_title(){
      cout<<"Forum title is:"<<forum_title<<endl;
    }


  void Forum::print_thread_count(){
    cout<<"Thread count is:"<< thread_count<<endl;
  }

///////////////////////////////////////////////////////////////////////////////
//THREAD

//Constructor for Thread
Thread::Thread(const char* sub,const char* crea,int post_count){
  int i;
  thread_subject=sub;
  thread_creator=crea;
  cout<<"Thread with subject:" <<thread_subject <<"has just been created!"<<endl;
  thread_date= new Date(21,12,2019);
  Post post_array[post_count];//default Constructor called
 for(i=0;i<post_count;i++){
    post_array[i]=Post("TITLOS","CREATOR","LMAO THIS IS CONTENT",i);
    post_array[i].Print_creator();
    }
};

Thread::Thread(){
  thread_subject=" ";
  thread_creator=" ";
  thread_date=new Date(21,12,2019);
  cout<<"default thread Constructor called"<<endl;
};
//Destructor for Thread
  Thread::~Thread(){
    cout<< "Thread with subject: "<< thread_subject <<"is about to be destroyed!";
    cout<<endl;
};

/*
void Thread::set_thread_subject(char *theme){
    theme=new char[strlen(nam)+1];
    strcpy(thread_subject,theme);
}

char *Thread::get_thread_subject(){
  return thread_subject;
}

void Thread::set_thread_creator(char *creator){
  creator=new char[strlen(creator)+1];
  strcpy(thread_creator,creator);
}

char* Thread::get_thread_creator(){
  return thread_creator;
}
*/

///////////////////////////////////////////////////////////////////////////////
//POST

//Constructor for Post
Post::Post(const char* title,const char*creator,const char*content,int idd){
  id=idd;
  post_title=title;
  post_creator=creator;
  post_content=content;
  post_date=new Date(12,2,2019);
  cout<< "Post number:"<<id<<"was created "<<endl;
};
Post::Post(){
  id=0;
  post_title=" ";
  post_creator=" ";
  post_content=" ";
  post_date=new Date(12,2,2019);
  cout<<"default post Constructor"<<endl;
};

//Destructor for Post
Post::~Post(){
  cout<<"Post number:"<<id<<"is about to be deleted"<<endl;
};

void Post::Print_creator(){
  cout<<post_creator<<endl;
}
///////////////////////////////////////////////////////////////////////////////

//DATE

//Constructor for date
Date::Date(int d,int m,int y){
  day=d;
  month=m;
  year=y;
};

//Destructor for date
Date::~Date(){};
