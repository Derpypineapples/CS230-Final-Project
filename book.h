#ifndef CLIENTTYPE_HPP
#define CLIENTTYPE_HPP


#include <string>
#include <sstream>
using namespace std;


class book {
   private:
      
      string name;
      string author;
      string isbn;
      
   public:
    book(string n, string a, string i);

      //accessors
      string getName() const;
      string getAuthor() const;
      string getISBN() const;

      //mutators
      void setName(string name);
      void setAuthor(string name);
      void setISBN(string name);
      
      string toString() const;
};


book::book(string n, string a, string i) {
   this->name = n;
   this->author = a;
   this->isbn = i;
}

string book::getName() const{
   return name;
}

string book::getAuthor() const{
   return author;
}

string book::getISBN() const{
   return isbn;
}

void book::setName(string n) {
   this->name = n;
}

void book::setAuthor(string a) {
   this->author = a;
}

void book::setISBN(string i) {
   this->isbn = i;
}

string book::toString() const {
   ostringstream buffer;

   buffer << "Name: " << this->name << "\n"
          << "Author: " << this->author << "\n"
          << "ISBN: " << this->isbn << "\n";
   return buffer.str();
}


#endif
