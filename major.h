

struct afc
{
	double data;
	afc* next;
};
class major
{ private:
	afc* head;
	afc* tail;
public:
	major();
	void create_node(double);
	void display();
	void add_first(double);
	void insert_last(double);
	void delete_start();
	void delete_last();
	void delete_add(int,double );
};