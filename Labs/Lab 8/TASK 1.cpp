/*Name: Urooj Baloch
ID:23K-0071
*/
#include<iostream>
#include<string>
using namespace std;

class Book{
 protected:
  string title;
  string author;
  string publisher;
 public:
  Book(string title, string author, string publisher):title(title),author(author),publisher(publisher)
  {
  }
  
  void display()
  {
   cout<<"Title: "<<title<<endl;
   cout<<"Author: "<<author<<endl;
   cout<<"Publisher: "<<publisher<<endl; }
};

class FictionBook:public Book{
 private:
  string genre;
  
  string protagonist;
	
 public:
  FictionBook(string ttl, string atr, string pbl, string genre, string protagonist):Book(ttl, atr, pbl), genre(genre), protagonist(protagonist)
  {}
  
  void display()
  {
   cout<<"Title: "<<title<<endl;
   cout<<"Author: "<<author<<endl;
   cout<<"Publisher: "<<publisher<<endl;
   cout<<"Genre: "<<genre<<endl;
   cout<<"Protagonist: "<<protagonist<<endl; 
  }
  
};
int main()
{
 FictionBook f1("Maala"," Nimra Ahmed","Kitab Nagri","Fiction","Kashmala Mubeen");
 f1.display();
}


