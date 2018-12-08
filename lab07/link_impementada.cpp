//Clse lista
#include <iostream>
#include<stdlib.h>
using namespace std;

class Link
{
	public:
		string value;
		Link(const string& v,Link* p=0,Link* s=0):
			value(v),prev(p),succ(s) {}
    void print();
		Link* insert(Link* n);
		Link* erase();
		Link* find(const string& s);
		const Link* find(const string& s) const;
		Link* next() const { return prev; }
		
	private:
		Link* prev;
		Link* succ;
};

/*Link* Link::insert(Link* n)
{
	if(n==0) return this;
	if(this==0) return n;
	
	n->succ=this;
	if(this->prev) this->prev->succ=n;
	n->prev=this->prev;
	
	this->prev=n;
	return n;
}*/

Link* Link::insert(Link* n)
{
	Link* p=this;
	if(n==0) return p;
	if(p==0) return n;
	
	n->succ=p;
	if(p->prev) p->prev->succ=n;
	
	n->prev=p->prev;
	p->prev=n;
	
	return n;
}
void Link::print(){
  Link* p=this;
  while(p){
    cout<<p->value<<endl;
    p=p->succ;
  }

}

int main(){
	Link* nord_gods=new Link("Thor");
	Link* nord_gods2=new Link("Odin");
  Link* nord_gods3=new Link("Freia");
	nord_gods3=nord_gods3->insert(nord_gods);
	nord_gods3=nord_gods3->insert(nord_gods2);
	nord_gods3->print();
	
}
