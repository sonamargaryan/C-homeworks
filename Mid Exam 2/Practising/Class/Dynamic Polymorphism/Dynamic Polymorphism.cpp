#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
protected:
	string OwnerName;
    int ContentQuality;
public:
	YouTubeChannel (string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
		ContentQuality = 0;
	}
	void GetInfo () {
		cout << "Name: " << Name << "\n";
		cout << "Owner Name: " << OwnerName << "\n";
		cout << "Subscribers Count: " << SubscribersCount << "\n";
		cout << "Videos: " << "\n";
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << "\n";
		}
	}
	void Subscribe () {
		SubscribersCount ++;
	}
	void Unsubscribe () {
		if (SubscribersCount > 0)
			SubscribersCount --;
	}
	void PublishVideo (string title) {
		PublishedVideoTitles.push_back (title);
	}
    void CheckAnalytics () {
        if (ContentQuality < 5)
            cout << Name << " has a bad quality content." << "\n";
        else 
            cout << Name << " has a good content." << "\n";
    }
};

class CookingYouTubeChannel : public YouTubeChannel {
public:
	CookingYouTubeChannel( string name, string ownerName) : YouTubeChannel (name, ownerName) {

	}
	void Practice () {
		cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << "\n";
        ContentQuality ++;
	}
};

class SingersYouTubeChannel : public YouTubeChannel {
public:
	SingersYouTubeChannel( string name, string ownerName) : YouTubeChannel (name, ownerName) {

	}
	void Practice () {
		cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << "\n";
        ContentQuality ++;
	}
};
 
int main () {
	CookingYouTubeChannel cookingYouTubeChannel ("Amy's Kitchen", "Amy");
	SingersYouTubeChannel singersYouTubeChannel ("JohnSings", "John");

    cookingYouTubeChannel.Practice ();
    singersYouTubeChannel.Practice ();
    singersYouTubeChannel.Practice ();
    singersYouTubeChannel.Practice ();
    singersYouTubeChannel.Practice ();
    singersYouTubeChannel.Practice ();
    singersYouTubeChannel.Practice ();
    singersYouTubeChannel.Practice ();

    YouTubeChannel * yt1 = &cookingYouTubeChannel;
    YouTubeChannel * yt2 = &singersYouTubeChannel;

    yt1 -> CheckAnalytics ();
    yt2 -> CheckAnalytics ();

	return 0;
}
