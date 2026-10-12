#include <iostream>
using namespace std;
//Base class
class Media{
public:
    // Virtual function to achieve run-time polymorphism
 virtual void play(){
     cout<<"Playing media....."<<endl;
 } 
 };
//Derived class Audio
class Audio: public Media {
    public:
    // Overriding the base class play() function
    void play() override{
    cout<<"Playing audio file....."<<endl;
}
};
//derived class video
class Video: public Media {
    public:
    // Overriding the base class play() function
    void play() override{
    cout<<"Playing video file....."<<endl;
}
};
int main() {
     // Base class pointer
    Media* media;
    Audio audio;
    Video video;
 // Pointer refers to Audio object
    media =&audio;
    media->play(); // Calls Audio's play()
  // Pointer refers to Video object
    media =&video;
    media->play(); // Calls Video's play()
    
    return 0;
}
