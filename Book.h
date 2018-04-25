#ifndef BOOK_H
#define BOOK_H
#include "Chapter.h"

using namespace std;
namespace Solver
{
	class Book
	{
		public:
			vector<Chapter> chapters; 	//vector of chapters
			string path; 				//path to pdf file
			string pathManual; 			//path to manual of book
			string name; 				//name of book
			
			const string searchAppend = "#search="; //used to build search queries
			const string pageAppend = "#page=";		//used to build page access queries

			void initBook();				//initialize book, constructs chapters into chapters vector
			void addChapter(int problems); 	//add a chapter to the chapter vector
			
			Chapter& getChapter(int n);		//return reference to chapter of interest from vector
			
			Book(int choice) 				//chooses title of book to construct. 0 = physics, 1 = future implementation
			{
				path = "files/"; 			//specify directory for textbook pdf
				pathManual = "files/";		//specify directory for textbook manual
				
				switch(choice) //choose title of book
				{
					case 0:
						path += "physics.pdf";
						pathManual += "solnphysics.pdf";
						name = "University Physics 13th Edition";
						break;
					default:
						cout << "Book does not exist!" << endl;
						break;
				}
				initBook();
			}
			
			~Book()
			{
				
			}
	};
}

#endif
