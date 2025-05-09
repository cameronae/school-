//This code is an example of using classes and vectors in order to store song duration and names into a vector and be printed out
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
   public:
      void SetDurationAndName(int songDuration, string songName) {
         duration = songDuration;
         name = songName;
      }
      void PrintSong() const {
         cout << duration << " - " << name << endl;
      }
      int GetDuration() const { return duration; }
      string GetName() const { return name; }

   private:
      int duration;
      string name;
};

class Album {
   public:
      void SetName(string albumName) { name = albumName; }
      void InputSongs();
      void PrintName() const { cout << name << endl; }
      void PrintSongsLongerThan(int songDuration) const;

   private:
      string name;
      vector<Song> albumSongs; //creates a vector with Song data type (int duration, string name) and names it album songs
};

void Album::InputSongs() {
   Song currSong;
   int currDuration;
   string currName;

   cin >> currDuration;
   while (currDuration >=  0) {
      cin >> currName;
      currSong.SetDurationAndName(currDuration, currName);
      albumSongs.push_back(currSong);
      cin >> currDuration;
   }
}

void Album::PrintSongsLongerThan(int songDuration) const {
   unsigned int i;
   Song currSong;

   cout << "Songs longer than " << songDuration << " seconds:" << endl;

   for (i = 0; i < albumSongs.size(); ++i){
    if (albumSongs[i].GetDuration() > songDuration){
        albumSongs[i].PrintSong();
    }
   }

}

int main() {
   Album musicAlbum;
   string albumName;

   getline(cin, albumName);
   musicAlbum.SetName(albumName);
   musicAlbum.InputSongs();
   musicAlbum.PrintName();
   musicAlbum.PrintSongsLongerThan(180);

   return 0;
}