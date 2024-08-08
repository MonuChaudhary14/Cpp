#include <iostream>
#include <cstring>
using namespace std;

class code /*This class is called abstract class because it contain atleast one pure virtual class*/
{
protected:
    string title;
    float rating;

public:
    code(string s, float r)
    {
        title = s;
        rating = r;
    }
    // virtual void display()
    // {
    //     /*If virtual is not used then the output will be of this class(base class)*/
    // }
    virtual void display() = 0; /*This is called pure virtual function or do nothing function*/
};

class video : public code
{
    float videolength;

public:
    video(string s, float r, float vl) : code(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl; /*while using do nothing function we must have to define display function if we want to display it*/
        cout << "Ratings " << rating << " out of 5" << endl;             /*If do nothing function is not used, then then we have a choice of not to do display the output of this class instead we can use the display function of base class*/
        cout << "Lenght of this video is " << videolength << " minutes " << endl;
    }
};

class text : public code
{
    int words;

public:
    text(string s, float r, int wc) : code(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings " << rating << " out of 5" << endl;
        cout << "Number of words in this text is " << words << " words " << endl;
    }
};

int main()
{
    string title;
    float rating, videolen;
    int words;

    // For video
    title = ":My first video";
    videolen = 4.12;
    rating = 4.99;

    video djvideo(title, rating, videolen);
    djvideo.display();

    cout << endl
         << endl;
    // For text
    title = ":My first text";
    rating = 5.00;
    words = 50000;

    text djtext(title, rating, words);
    djtext.display();

    cout << endl
         << endl;
    code *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    cout << endl
         << endl;
    tuts[1]->display();

    return 0;
}

// Rules for virtual function
// 1.They cannot be static
// 2.They are accessed by object pointer
// 3.Virtual functions can be a friend of another class
// 4.A virtual function in base class might not be used
// 5.If a virtual function is defined in a bse class, there is no need of redefining it in the derived class
// like if title is not defined in the derievd class then it will take it run display of base class for title only