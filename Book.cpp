#ifndef BOOK_CPP
#define BOOK_CPP

#include "Book.h"
namespace Solver
{
	void Book::initBook()
	{
		addChapter(0); //1st chapter empty
		addChapter(0); //empty
		addChapter(4); //3rd chapter currently has 4 problems
	}
	void Book::addChapter(int problems) //add chapter to vector with specified number of problems
	{
		Chapter temp(problems);			//create temp chapter 
		chapters.push_back(temp);		
	}
	Chapter& Book::getChapter(int n)	//return reference to chapter of interest
	{
		return chapters.at(n);
	}
}
#endif
