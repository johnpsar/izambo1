#include<cstring>
#include<iostream>
#include"classes.h"
#include"text.h"
using namespace std;
///////////////////////////////////////////////////////////////////////////////
//FORUM

//Constructor for Forum
Forum::Forum( string name,int count){
  int i;
    forum_title=name;
    thread_count=count;

  thread_array=new Thread*[count];
  for(i=0;i<count;i++){
    thread_array[i]=new Thread("subject","creator",4);
  }
  cout<<"Forum with title: " <<forum_title<< " has just been created!"<<endl;
  }
//Destructor for Forum
Forum::~Forum(){
  int i;
  for(i=0;i<thread_count;i++){
  delete thread_array[i];
}
delete []thread_array;

  cout<< "Forum with title: "<< forum_title <<" is about to be destroyed!"<<endl;
};



///////////////////////////////////////////////////////////////////////////////
//THREAD

//Constructor for Thread
Thread::Thread( string sub, string crea,int post_c){
  int i;

  post_count=post_c;
  thread_subject=sub;
  thread_creator=crea;
  thread_date= new Date(21,12,2019);
   post_array=new Post*[post_count];
 for(i=0;i<post_count;i++){
    post_array[i]=new Post("TITLOS","CREATOR","LMAO THIS IS CONTENT",i);

    }
    cout<<":::::::::::::::::::::::::::::::::::::"<<endl;

    cout<<"Thread with subject: " <<thread_subject <<" has just been created!"<<endl;
    cout<<":::::::::::::::::::::::::::::::::::::"<<endl<<endl<<endl;

};

Thread::Thread(){
  thread_subject=" ";
  thread_creator=" ";
  thread_date=new Date(21,12,2019);
  cout<<"default thread Constructor called"<<endl;
};
//Destructor for Thread
  Thread::~Thread(){
    int i;
    for(i=0;i<post_count;i++){
      delete post_array[i];
    }
    delete []post_array;
    cout<< "Thread with subject: "<< thread_subject <<" is about to be destroyed!";
    cout<<endl;
};



///////////////////////////////////////////////////////////////////////////////
//POST

//Constructor for Post
Post::Post(const string title,const string creator,const string content,int idd){
  id=idd;
  post_title=title;
  post_creator=creator;
  cout<<"######################################"<<endl;
  cout<< "Post number: "<<id<<" was created "<<endl;

  post_content=get_rand_text(id);
  post_date=new Date(12,2,2019);
  cout<<"######################################"<<endl<<endl<<endl;

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
  cout<<"Post number: "<<id<<" is about to be deleted"<<endl;
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
