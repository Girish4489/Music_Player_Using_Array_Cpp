#include<iostream>
#include "music_head.h"
using namespace std;
int main()
{
	int choice,num;
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t......! Music Player !...\n";
	cout<<"\n\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	while(1)
	{	

		cout<<"\n\n\n";
		cout<<"1 : List of Musics\n";
		cout<<"2 : Play at One Time\n";
		cout<<"3 : Choose The Song\n";
		cout<<"4 : Play Loop\n";
		cout<<"5 : Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1: display();
					break;
			case 2: play_onetime();
					break;
			case 3: 
					cout<<"\n----------------------------------\n";
					cout<<"\n";
					display();
					cout<<"\n----------------------------------\n";
					cout<<"\nEnter the song number  : ";
					cin>>num;
					num=num-1;
					choose_song(num);
					break;
			case 4: play_loop();
					break;
			case 5: exit(0);
					break;
			default: cout<<"Invalid choice\n";
		}
		cout<<"\n\n------------------------------------\n";		
	}

}
