#pragma once
#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H
#include <windows.h>
//
//#include <iostream>
//#include <cstdlib>
//#include <math.h>
using namespace std;

namespace Solver
{
	class Calculator
	{
		int choice;
		int chapter;
		int problem;
		int menu;
		bool exit = false;
		double temp;
	public:
		void menuprint();
		void choices();
		void openPDF(string path);
		void startup(LPCTSTR lpApplicationName);
		
		//PlaylistNode();
		//PlaylistNode(string id, string songname, string artist, int length);
		//void InsertAfter(PlaylistNode* ptr);
		//void SetNext(PlaylistNode* ptr);
		//string GetID();
		//string GetSongName();
		//string GetArtistName();
		//int GetSongLength();
		//PlaylistNode* GetNext();
		//void PrintPlaylistNode();

	//private:
		//string uniqueID;
		//string songName;
		//string artistName;
		//int songLength;
		//PlaylistNode* nextNodePtr;
	};

	
	/*class Playlist
	{
	private:
	PlaylistNode *head;
	PlaylistNode *tail;

	public:
	Playlist();
	void AddSong(string id, string songname, string artistname, int length);
	bool RemoveSong(string id);
	void PrintList();
	bool ChangePosition(int oldPos, int newPos);
	void SongsByArtist(string artist);
	int TotalTime();
	};*/
}
#endif /* main_h */
