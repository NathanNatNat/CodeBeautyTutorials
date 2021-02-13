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
	int SubscriberCount;
	list<string> PublishedVideoTitles;

protected:
	string OwnerName;
};

// Derived Class, Inheriting from YouTubeChannel.
class CookingYouTubeChannel : public YouTubeChannel
{

public:
	CookingYouTubeChannel(string Name, string OwnerName) : YouTubeChannel(Name, OwnerName)
	{

	}

	void Practice()
	{
		cout << OwnerName << " is Practicing cooking, learning new recipes, experimenting with spices..." << endl;
	}
};

int main()
{
	CookingYouTubeChannel CookingYTChannel("Amy's Kitchen", "Amy");
	CookingYouTubeChannel CookingYTChannel2("John's Kitchen", "John");
	//CookingYTChannel.PublishVideo("Apple Pie");
	//CookingYTChannel.PublishVideo("Chocolate cake");
	//CookingYTChannel.Subscribe();
	//CookingYTChannel.Subscribe();
	//CookingYTChannel.GetInfo();
	CookingYTChannel.Practice();
	CookingYTChannel2.Practice();

	system("pause>0");
}
