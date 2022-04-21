#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"cat_dog.h"
#include"LL.h"
/*1.Create a constructor & Destructor according to its type.   */

/*4.Create a snap_finger (in LL class or in class inherited from LL) to randomly delete half of the node */

int main(int argc, char *argv[])
{
  LL A;
  int i;
  NODE *t;

   for(i=1;i<argc;i+=3) {
     /* modify to argument for cat or dog*/
        if(atoi(argv[i])==0)
            t=new cat(atoi(argv[i+1]),atoi(argv[i+2]));
         else  
           t=new dog(atof(argv[i+1]),atoi(argv[i+2]));
     
                       A.add_node(t);
   }
   A.show_all();
  cout<<endl<<endl<<"=================="<<endl;
   A.snap_finger(); // kill 1/2 (make size=0)
  cout<<"=================="<<endl<<endl;
   A.show_all(); //size =0 type -->dead
  cout<<endl;

    
}

/* Example output  ./LL 5 1 8 1 6 8 4
adding 1
adding 2
adding 3
adding 4
adding 5
adding 6
adding 7
Node data:7
Node data:6
Node data:5
Node data:4
Node data:3
Node data:2
Node data:1

Node 3 is being deleted
Node 4 is being deleted
Node 1 is being deleted
Node 2 is being deleted

Node data:7
Node data:6
Node data:5


Node 7 is being deleted
Node 6 is being deleted
Node 5 is being deleted
*/