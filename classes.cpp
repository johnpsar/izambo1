#include<iostream>
#include<cstring>
#include"classes.h"
#include"text.h"
using namespace std;

int __id=0;//global id


///////////////////////////////////////////////////////////////////////////////
//FORUM

//Constructor for Forum
Forum::Forum( string name,int count){
  int i;
    forum_title=name;
    thread_count=count;

  thread_array=new Thread*[count];
  for(i=0;i<count;i++){
    thread_array[i]=new Thread("subject","creator",4,i);
  }
  cout<<"Forum with title: " <<forum_title<< " has just been created!"<<endl<<endl<<endl;
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

void Forum::Print_thread(int i){
  thread_array[i]->Print_thread_subject();
  thread_array[i]->Print_thread_creator();
  thread_array[i]->Print_thread_date();

  cout<<"\n\n";
}

void Forum::Print_post(int i){
  thread_array[1]->post_array[i]->Print_title();
  thread_array[1]->post_array[i]->Print_creator();
  thread_array[1]->post_array[i]->Print_content();
}



///////////////////////////////////////////////////////////////////////////////
//THREAD

//Constructor for Thread
Thread::Thread( string sub, string crea,int post_c,int thread_number){
  int i,d,m,y;
  int x=0;
  post_count=post_c;
  if(thread_number==1){
  thread_subject="\"Κανόνες και χρήσιμες πληροϕορίες\"";
}
  else{
    thread_subject="\"Οροι χρησης\"";
  }
  thread_creator=get_rand_name(x++);//kano x++ gia na allazei timi gia to epomeno rand
  thread_date.set(12,2,19);
  thread_date.get(d,m,y);
   post_array=new Post*[post_count];
 for(i=0;i<post_count;i++){
    post_array[i]=new Post("TITLOS","CREATOR","LMAO THIS IS CONTENT",i);

    }
    cout<<":::::::::::::::::::::::::::::::::::::"<<endl;

    cout<<"Thread with subject: " <<thread_subject <<" has just been created!"<<endl;
    cout<<"Thread creator is : "<<thread_creator<<endl;
    cout<< "Thread creation Date is : "<< d<<"/"<<m<<"/"<<y<<endl;

    cout<<":::::::::::::::::::::::::::::::::::::"<<endl<<endl<<endl;

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

void Thread::Print_thread_creator(){
  cout<<"Thread creator is : "<<thread_creator<<endl;
}
void Thread::Print_thread_subject(){
  cout<<"Thread subject is : "<<thread_subject<<endl;
}
void Thread::Print_thread_date(){
  int d,m,y;
  thread_date.get(d,m,y);
  cout<< "Thread creation Date is : "<< d<<"/"<<m<<"/"<<y<<endl;
}

int Thread:: get_post_count(){
  return post_count;
}





///////////////////////////////////////////////////////////////////////////////
//POST

//Constructor for Post
Post::Post(const string title,const string creator,const string content,int idd){
  int d,m,y;
  id=idd;
  __id++;
  post_title=get_rand_title(__id);
  post_creator=get_rand_name(__id);
  cout<<"######################################"<<endl;
  cout<< "Post number: "<<__id<<" was created "<<endl;

  post_content=get_rand_text(__id);
 post_date.set(12,12,2019);
  post_date.get(d,m,y);
  cout<< "Post creator is : "<< post_creator<<endl;
  cout<< "Post title is : "<<post_title<<endl;
  cout<< "Post : "<<post_content<<endl;
  cout<<"Post creation date is : "<<d<<"/"<<m<<"/"<<y<<endl;
  cout<<"######################################"<<endl<<endl<<endl;

};


//Destructor for Post
Post::~Post(){
  cout<<"Post number: "<<id<<" is about to be deleted"<<endl;
};

void Post::Print_creator(){
  cout<<post_creator<<endl;
}

void Post::Print_title(){
  cout<<post_title<<endl;
}

void Post::Print_content(){
  cout<<post_content<<endl;
}
string Post::get_content(){
  return post_content;
}

///////////////////////////////////////////////////////////////////////////////

//DATE

//Constructor for date
Date::Date(){
  day=0;
  month=0;
  year=0;
};

//Destructor for date
Date::~Date(){};

void Date::set(int i, int j, int k)
{
month = i;
day = j;
year = k;
}
void Date::get(int& i, int& j, int& k)
{
i = month;
j = day ;
k = year;
}


///////////////////////////////////////////////////
//TREE

btree::btree(){
    treeroot=NULL;
  }

btree::~btree(){
   destroy_tree();
  }

void btree::insert(string creat,string cont,TreeNode *leaf){
  //TODO an einai =0 tote apla na auksaneii tin lista

    if((creat).compare(leaf->creator)<0){
      if(leaf->left!=NULL){
        insert(creat,cont,leaf->left);
      }
      else{
        leaf->left=new TreeNode;
        leaf->left->creator=creat;
        leaf->left->left=NULL;
        leaf->left->right=NULL;
      }
    }
    else if((creat).compare(leaf->creator)>0){
        if(leaf->right!=NULL){
          insert(creat,cont,leaf->right);
        }
        else{
          leaf->right=new TreeNode;
          leaf->right->creator=creat;
          leaf->right->right=NULL;
          leaf->right->left=NULL;
        }
      }
    else if((creat).compare(leaf->creator)==0){
      insert_list(leaf,cont);
    }

    }

    void btree::insert(string creat,string cont){
    	if(treeroot != NULL){
    		insert(creat,cont,treeroot);
    	}else{
        ListNode *newlist=new ListNode();
        newlist->next=NULL;
        newlist->content=cont;
    		treeroot = new TreeNode;
        treeroot->creator=creat;
    		treeroot->left = NULL;
    		treeroot->right = NULL;
        treeroot->headref=newlist;

    	}
    }

    void btree::inorder_print(TreeNode *leaf){
  	if(leaf != NULL){
  		inorder_print(leaf->left);
  		cout << leaf->creator << " , ";
  		inorder_print(leaf->right);
  	}
  }


    void btree::inorder_print(){
      inorder_print(treeroot);
      cout<<endl;
    }

    void btree::destroy_tree(TreeNode *leaf){
      if (leaf!=NULL){
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
      }
    }

    void btree::destroy_tree(){
      destroy_tree(treeroot);
      cout<<"\n";
    }

    void btree::insert_list(TreeNode *leaf,string cont){
      ListNode* last=leaf->headref;
      ListNode* temp=new ListNode();
      temp->content=cont;
      temp->next=NULL;

      if(leaf->headref==NULL){
        leaf->headref=temp;
      }
      else{
        while(last->next!=NULL){
          last=last->next;
        }
        last->next=temp;
      }

    }

    void btree::print_list(TreeNode *leaf){
      ListNode *temp=leaf->headref;
    do{
      cout<<temp->content<<endl;
      temp=temp->next;
    }while(temp!=NULL);

}
  void btree::print_list(){
    print_list(treeroot);
  }

  /* Function to merge given two binary trees*/
TreeNode *btree::MergeTrees(TreeNode * t1, TreeNode * t2)
{
  if(t2 != NULL){
    if(t2->left!=NULL)
    insert(t2->left->creator,t2->left->headref->content,t1);//inorder_print(leaf->left);
    cout << "WTF IT WORKS "<< endl;
    if(t2->right!=NULL)
    insert(t2->right->creator,t2->right->headref->content,t1);//inorder_print(leaf->right);
  }
return t1;
}
