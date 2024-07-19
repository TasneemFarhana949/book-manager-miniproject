#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Book{
    public:
    int id;
    string title;
    string author;


    Book(int ids,string titles,string authors){
        id=ids;
        title=titles;
        author=authors;
    }
};

class Library{
    public:
    vector<Book> books;
    void addBook(int id,string title,string author){
        books.push_back(Book(id,title,author));
        cout<<"Book added successfully";
    }
    void displayBooks(){
        if (books.empty()){
            cout<<"no books are present"<<endl;
            return;
        }
    for(const auto&book : books){
        cout<<"Book ID : "<<book.id<<",Title" << book.title <<" , Authors"<<book.author<<endl;
    }   
    }
    void searchBook(int id){
     for(const auto&book: books){
         if(book.id==id){
            cout<<"Book id:"<<book.id<<",Title"<<book.title<<",Author"<<book.author<<endl;
            return;
         }
     }
     cout<<"Book not found"<<endl;
    }
};


int main()
{
    Library library;
    int choice;
    while(true){
        cout<<"1.Add Book\n2.Display Books\n3.search Book\n4.Exit"<<endl;
        cin>>choice;
        if(choice==1){
             int id;
             string title;
             string author;
             cout<<"Enter Book ID: ";
             cin>>id;
             cout<<"Enter Book Title: ";
             cin>>title;
             cout<<"Enter Book Author: ";
             cin>>author;
             library.addBook(id,title,author);
        }
        else if(choice==2){
            library.displayBooks();     
        }
        else if(choice==3){
            int id;
            cout<<"Enter Book ID to search : ";
            cin>>id;
            library.searchBook(id);
        }
        else if(choice==4){
       break;     
        }

    }
    
    return 0;

}