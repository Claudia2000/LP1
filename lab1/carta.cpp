#include <iostream>
#include <string>
using namespace std ;

int main() {
  
cout<< "Dear"<< endl;
string receptor;
cout << "Enter the name of the recipient of the letter"<< endl;
cin>> receptor;

cout<< "******************************"<<endl;
cout<< "Dear "<< receptor << endl;
cout<< "How are you? I'm fine. I miss you! The last time we met, you forgot a notebook, it seems like your job. Let's meet! I also have to tell you many things, I have many plans and ideas that you will love."<<endl;
cout << "Have you see (Enter the name of another friend)...";
string amigo2;
cin>> amigo2;

cout<< "******************************"<<endl;
cout<< "Dear "<< receptor<<"\n" << "How are you? I'm fine. I miss you! The last time we met, you forgot a notebook, it seems like your job. Let's meet! I also have to tell you many things, I have many plans and ideas that you will love." << "\n"<< "Have you see " << amigo2 << ", please ask (him/her)..." ;
string sexo;
cin>> sexo;

cout<< "******************************"<<endl;
cout<< "Dear "<< receptor<<"\n" << "How are you? I'm fine. I miss you! The last time we met, you forgot a notebook, it seems like your job. Let's meet! I also have to tell you many things, I have many plans and ideas that you will love." << "\n"<< "Have you see " << amigo2 <<"?"<< ", please ask "<< sexo<< " to call me."<<endl;
cout<< "******************************"<<endl;

cout<< "Enter the sender's age.";
int age;
cin>> age;
int constante;
if (age<=17)
cout<< "Next year next year you'll be "<< age+1;
else if (age>=18 & age<70)
cout<< "You are able to vote"<<endl;
else
cout<< "I hope you are enjoying retirement"<<endl;

cout<< "******************************"<<endl;
cout<< "Dear "<< receptor<<"\n" << "How are you? I'm fine. I miss you! The last time we met, you forgot a notebook, it seems like your job. Let's meet! I also have to tell you many things, I have many plans and ideas that you will love." << "\n"<< "Have you see " << amigo2 <<"?"<< ", please ask "<< sexo<< " to call me."<<endl;

if (age<=17)
cout<< "Next year next year you'll be "<< age+1<<"."<<endl;
else if (age>=18 & age<70)
cout<< "You are able to vote."<<endl;
else
cout<< "I hope you are enjoying retirement."<<endl;

cout<< "******************************"<<endl;
cout<< "Dear "<< receptor<<"\n" << "How are you? I'm fine. I miss you! The last time we met, you forgot a notebook, it seems like your job. Let's meet! I also have to tell you many things, I have many plans and ideas that you will love." << "\n"<< "Have you see " << amigo2 <<"?"<< ", please ask "<< sexo<< " to call me."<<endl;

if (age<=17)
cout<< "Next year next year you'll be "<< age+1<<"."<<endl;
else if (age>=18 & age<70)
cout<< "You are able to vote."<<endl;
else
cout<< "I hope you are enjoying retirement."<<endl;

cout<<"Yours sincerely (Your name)"<<endl;
string tu;
cin>> tu;

cout<< "******************************"<<endl;
cout<< "Dear "<< receptor<<"\n" << "How are you? I'm fine. I miss you! The last time we met, you forgot a notebook, it seems like your job. Let's meet! I also have to tell you many things, I have many plans and ideas that you will love." << "\n"<< "Have you see " << amigo2 <<"?"<< ", please ask "<< sexo<< " to call me."<<endl;

if (age<=17)
cout<< "Next year next year you'll be "<< age+1<< "."<<endl;
else if (age>=18 & age<70)
cout<< "You are able to vote."<<endl;
else
cout<< "I hope you are enjoying retirement."<<endl;

cout<<"Yours sincerely, "<< tu<< "."<<endl;

return 0;
}

