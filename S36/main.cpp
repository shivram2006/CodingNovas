#include <iostream>
using namespace std;

// =====================================================
// 🎵 NODE CLASS (Each song in playlist)
// =====================================================
class Song {
public:
    string title;     // Song name
    Song* next;       // Next song
    Song* prev;       // Previous song

    // Constructor
    Song(string name) {
        title = name;
        next = NULL;
        prev = NULL;
    }
};

// =====================================================
// 🎧 PLAYLIST CLASS (Doubly Linked List)
// =====================================================
class Playlist {

private:
    Song* head;   // First song
    Song* tail;   // Last song

public:

    // Constructor
    Playlist() {
        head = NULL;
        tail = NULL;
    }

    // =====================================================
    // 🟢 ADD SONG AT END (Normal add)
    // =====================================================
    void addSong(string name) {

        Song* newSong = new Song(name);

        // If playlist empty
        if (head == NULL) {
            head = tail = newSong;
        }
        else {
            tail->next = newSong;
            newSong->prev = tail;
            tail = newSong;
        }

        cout << "[Added] " << name << endl;
    }

    // =====================================================
    // 🟢 ADD SONG AT BEGINNING
    // =====================================================
    void addAtStart(string name) {

        Song* newSong = new Song(name);

        if (head == NULL) {
            head = tail = newSong;
        }
        else {
            newSong->next = head;
            head->prev = newSong;
            head = newSong;
        }

        cout << "[Added at Start] " << name << endl;
    }

    // =====================================================
    // 🔴 DELETE SONG
    // =====================================================
    void deleteSong(string name) {

        if (head == NULL) {
            cout << "Playlist is empty!\n";
            return;
        }

        Song* temp = head;

        // Traverse to find song
        while (temp != NULL && temp->title != name) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Song not found!\n";
            return;
        }

        // If deleting head
        if (temp == head) {
            head = head->next;
            if (head != NULL) head->prev = NULL;
            else tail = NULL; // list empty
        }
        // If deleting tail
        else if (temp == tail) {
            tail = tail->prev;
            tail->next = NULL;
        }
        // Middle node
        else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }

        cout << "[Deleted] " << name << endl;
        delete temp;
    }

    // =====================================================
    // 🔍 SEARCH SONG
    // =====================================================
    void searchSong(string name) {

        Song* temp = head;
        int pos = 1;

        while (temp != NULL) {
            if (temp->title == name) {
                cout << "Found '" << name << "' at position " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }

        cout << "Song not found!\n";
    }

    // =====================================================
    // ▶️ DISPLAY FORWARD (Next button)
    // =====================================================
    void displayForward() {

        Song* temp = head;

        cout << "Playlist (Forward): ";

        while (temp != NULL) {
            cout << temp->title << " <-> ";
            temp = temp->next;
        }

        cout << "END\n";
    }

    // =====================================================
    // ⏪ DISPLAY BACKWARD (Previous button)
    // =====================================================
    void displayBackward() {

        Song* temp = tail;

        cout << "Playlist (Backward): ";

        while (temp != NULL) {
            cout << temp->title << " <-> ";
            temp = temp->prev;
        }

        cout << "START\n";
    }
};

// =====================================================
// 🔵 MAIN FUNCTION (REAL-LIFE SIMULATION)
// =====================================================
int main() {

    Playlist myPlaylist;

    cout << "=== Music Playlist System 🎵 ===\n";

    // Add songs
    myPlaylist.addSong("Song A");
    myPlaylist.addSong("Song B");
    myPlaylist.addSong("Song C");

    myPlaylist.addAtStart("Intro Song");

    // Display
    myPlaylist.displayForward();
    myPlaylist.displayBackward();

    // Search
    myPlaylist.searchSong("Song B");

    // Delete
    myPlaylist.deleteSong("Song B");

    // Display again
    myPlaylist.displayForward();
    myPlaylist.displayBackward();

    return 0;
}