#include <windows.h>
#include <iostream>
//#include<dos.h>
#include<string.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
	LPCSTR name[10]={
							"s1.wav",
							"s2.wav",
							"s3.wav"
							};
void play_loop()
{
	//char ch;
	while(1)
	{
			for (int i=0;i<3;i++)
			{
				cout<<"\nSong :"<<(i+1);
				PlaySound(name[i], NULL, SND_FILENAME); //SND_FILENAME or SND_LOOP
			}	
	}
}
void play_onetime()
{
	cout<<"Sound playing... enjoy....!!!\n";
	for (int i=0;i<3;i++)
	{
		cout<<"\nSong :"<<(i+1);
		PlaySound(name[i], NULL, SND_FILENAME); //SND_FILENAME or SND_LOOP	
	}
}
void display()
{
	cout<<"\n";
	cout<<"\n The songs List is :\n";
	for (int i=0;i<3;i++)
	{
		cout<<name[i];
		cout<<"\n";		
	}
}
void choose_song(int num)
{	
//	int num;
	if (num<3){
	
		cout<<"Sound playing... enjoy....!!!\n";
		PlaySound(name[num], NULL, SND_FILENAME);
	}
	else{
		cout<<"Select Valid Song.\n";
	}	
}
