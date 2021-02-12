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

	YouTubeChannel(string name, string ownername)
	{
		Name = name;
		OwnerName = ownername;
		SubscriberCount = 0;
	}

	void GetInfo()
	{
		cout
			<< "\nName: " << Name << endl
			<< "OwnerName: " << OwnerName << endl
			<< "SubscriberCount: " << SubscriberCount << endl
			<< "PublishedVideoTitles: " << endl;
		for (string VideoTitles : PublishedVideoTitles)
		{
			cout << VideoTitles << endl;
		}
	}
};

int main()
{
	YouTubeChannel YTChannel("CodeBeauty", "Saldina");
	YTChannel.PublishedVideoTitles.push_back("C++ for beginners");
	YTChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
	YTChannel.PublishedVideoTitles.push_back("C++ OOP");

	YouTubeChannel YTChannel2("AmySings", "Amy");

	YTChannel.GetInfo();
	YTChannel2.GetInfo();

	system("pause>0");
}
