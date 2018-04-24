#ifndef BOOK_CPP
#define BOOK_CPP

#include "Book.h"
namespace Solver
{
	void Book::openPage(bool manual)
	{
		if(manual)
		{
			
		}
		else
		{
			
		}
	}
	void Book::initBook()
	{
		addChapter(0); //1st chapter empty
		addChapter(0); //empty
		addChapter(4); //3rd chapter 4 problems
	}
	void Book::addChapter(int problems)
	{
		chapters.push_back(new Chapter(problems));
	}
	Chapter* Book::getChapter(int n)
	{
		return chapters.at(n);
	}
}
#endif
