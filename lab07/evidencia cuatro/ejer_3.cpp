bool find(const string& a ){
    Link* b=this;
  while(b->prev!=NULL){
    if(b->prev->value==a||b->value==a){
        return true;
		}
        b=b->prev;}
  while(b->succ!=NULL){
    if(b->succ->value==a||b->value==a){
        return true;
		}
        b=b->succ;
		}
return false;
}
