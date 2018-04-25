#ifndef BOOK_H
#define BOOK_H
#include "Chapter.h"

using namespace std;
namespace Solver
{
	class Book
	{
		
//		vector<Chapter*> chapters; //vector of chapters
		
		public:
			
			string path; //path to pdf file
			string pathManual; //path to manual of book
			string name; //name of book
			
			string searchAppend = "#search=";
			string pageAppend = "#page=";
			
			vector<Chapter*> chapters; //vector of chapters
			
			void openPage(bool manual);
			void initBook();
			void addChapter(int problems);
			Chapter* getChapter(int n);
			
			Book(int choice)
			{
				path = "files/";
				pathManual = "files/";
				switch(choice)
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
				for(int i=0; i<chapters.size(); i++)
				{
					delete chapters.at(i);
				}
			}
	};
}

#endif
