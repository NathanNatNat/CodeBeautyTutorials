#include <iostream>
#include <list>
using namespace std;

// Object oriented programming.
// Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

class YouTubeChannel
{
private:
	string Name;
	int SubscriberCount;
	list<string> PublishedVideoTitles;

protected:
	string OwnerName;
	int ContentQuality;

public:
	YouTubeChannel(string name, string ownername)
	{
		Name = name;
		OwnerName = ownername;
		SubscriberCount = 0;
		ContentQuality = 0;
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

	void CheckAnalytics()
	{
		if (ContentQuality < 5)
			cout << Name << " has bad quality content." << endl;
		else
			cout << Name << " has great quality content." << endl;
	}
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
		ContentQuality++;
	}
};

class SingersYouTubeChannel : public YouTubeChannel
{
public:
	SingersYouTubeChannel(string Name, string OwnerName) : YouTubeChannel(Name, OwnerName)
	{

	}

	void Practice()
	{
		cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
		ContentQuality++;
	}
};

int main()
{
	CookingYouTubeChannel CookingYTChannel("Amy's Kitchen", "Amy");
	SingersYouTubeChannel SingersYTChannel("JohnSings", "John");

	CookingYTChannel.Practice();
	SingersYTChannel.Practice();
	SingersYTChannel.Practice();
	SingersYTChannel.Practice();
	SingersYTChannel.Practice();
	SingersYTChannel.Practice();

	YouTubeChannel* YT1 = &CookingYTChannel;
	YouTubeChannel* YT2 = &SingersYTChannel;

	YT1->CheckAnalytics();
	YT2->CheckAnalytics();

	system("pause>0");
}
