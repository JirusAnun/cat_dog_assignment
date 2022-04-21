#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
  nt i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
        t->show_node();
	      t=t->move_next();    
     }
}
void LL::add_node(NODE *&A){
          hol->insert(A);
          hol=A;
       size++;
 }


void LL::snap_finger(){
 int kill;

  srand(time(NULL));

  NODE* t=hol;
  for(int j=0;j<size/2;j++){
    kill=rand()%size; //สุ่มฆ่า
     for(int i=0;i<kill;i++){
	      t=t->move_next();  
     }
    while(t->get_size()==0){ t=t->move_next(); }
    t->set_size(0);
    t->show_node();
    t=hol;
  }
}