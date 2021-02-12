#include <iostream>
#include <list>
using namespace std;

// Object oriented programming.

class YouTubeChannel
{

public:
	YouTubeChannel(string name, string ownername)
	{
		Name = name;
		OwnerName = ownername;
		SubscriberCount = 0;
	}

	void GetInfo()
	{
		cout
			<< "Name: " << Name << endl
			<< "OwnerName: " << OwnerName << endl
			<< "SubscriberCount: " << SubscriberCount << endl
			<< "PublishedVideoTitles: " << endl;
		for (string VideoTitles : PublishedVideoTitles)
		{
			cout << VideoTitles << endl;
		}
	}

	void Subscribe()
	{
		SubscriberCount++;
	}

	void UnSubscribe()
	{
		if (SubscriberCount > 0)
			SubscriberCount--;
	}

	void PublishVideo(string title)
	{
		PublishedVideoTitles.push_back(title);
	}

private:
	string Name;
	string OwnerName;
	int SubscriberCount;
	list<string> PublishedVideoTitles;
};

int main()
{
	YouTubeChannel YTChannel("CodeBeauty", "Saldina");
	YTChannel.PublishVideo("C++ for beginners");
	YTChannel.PublishVideo("HTML & CSS for beginners");
	YTChannel.PublishVideo("C++ OOP");

	YTChannel.Subscribe();
	YTChannel.Subscribe();
	YTChannel.UnSubscribe();

	YTChannel.GetInfo();

	system("pause>0");
}
