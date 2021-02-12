#include <iostream>
#include <list>
using namespace std;

// Object oriented programming.

class YouTubeChannel
{

public:
	string Name;
	string OwnerName;
	int SubscriberCount;
	list<string> PublishedVideoTitles;
};

int main()
{
	YouTubeChannel YTChannel;
	YTChannel.Name = "CodeBeauty";
	YTChannel.OwnerName = "Saldina";
	YTChannel.SubscriberCount = 1800;
	YTChannel.PublishedVideoTitles = 
	{ 
		"C++ for beginners Video 1",
		"HTML & CSS Video 1",
		"C++ OOP Video 1"
	};

	cout 
		<< "Name: " << YTChannel.Name << endl 
		<< "OwnerName: " << YTChannel.OwnerName << endl 
		<< "SubscriberCount: " << YTChannel.SubscriberCount << endl 
		<< "PublishedVideoTitles: " << endl;
	for (string VideoTitles : YTChannel.PublishedVideoTitles)
	{
		cout << VideoTitles << endl;
	}

	system("pause>0");
}
