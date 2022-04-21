class NODE{
      int size;
      NODE* next;
public:
        NODE(int);
        virtual void show_node();
        void insert(NODE*&);
        NODE* move_next();
        virtual ~NODE();
        void set_size(int x){ size = x; }
        int get_size(){ return size; }
      };