#include <iostream>
using namespace std;

/*

class BaseClass
{
protected:
    int var_base = 10;

public:
    int var_base_public = 20;
    virtual void display()
    {
        cout << "The value of var_base in BaseClass is: " << var_base_public << endl;
    }
};

class DerivedClass : public BaseClass
{
private:
    int var_derived = 30;

public:
    int var_derived_public = 40;
    void display()
    {
        cout << "The value of var_base in DerivedClass is: " << var_base_public << endl;
        cout << "The value of var_derived in DerivedClass is: " << var_derived_public << endl;
    }
};

int main()
{
    BaseClass *base_ptr;
    BaseClass base_obj;
    DerivedClass derived_obj;

    base_ptr = &derived_obj;
    base_ptr->display();

    return 0;
}
    */

// Virtual functions + creation rules

/*
class Home
{
protected:
    string title;
    float rating;

public:
    Home(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display()
    {
        cout << "The title of the home is: " << title << endl;
        cout << "The rating of the home is: " << rating << endl;
    }
};

class Apartment : public Home
{
private:
    float video_length;

public:
    Apartment(string t, float r, float v) : Home(t, r)
    {
        video_length = v;
    }
    void display()
    {
        cout << "The title of the apartment is: " << title << endl;
        cout << "The rating of the apartment is: " << rating << endl;
        cout << "The video length of the apartment is: " << video_length << endl;
    }
};

class HomeText : public Home
{
private:
    int words;

public:
    HomeText(string t, float r, int w) : Home(t, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The title of the home text is: " << title << endl;
        cout << "The rating of the home text is: " << rating << endl;
        cout << "The number of words in the home text is: " << words << endl;
    }
};

int main()

{

    string title;
    float rating, video_length;
    int words;

    title = "Beautiful Home";
    video_length = 5.5;
    rating = 4.5;
    Apartment apartment(title, rating, video_length);
    title = "Cozy Home";
    words = 1000;
    rating = 4.0;
    HomeText home_text(title, rating, words);

    Home *tuts[2];
    tuts[0] = &apartment;
    tuts[1] = &home_text;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
*/

// Abstract classes and pure virtual functions

class Home
{
protected:
    string title;
    float rating;

public:
    Home(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display() = 0; // pure virtual function
};

class HomeVideo : public Home
{
private:
    float video_length;

public:
    HomeVideo(string t, float r, float v) : Home(t, r)
    {
        video_length = v;
    }
    void display()
    {
        cout << "The title of the home video is: " << title << endl;
        cout << "The rating of the home video is: " << rating << endl;
        cout << "The video length of the home video is: " << video_length << endl;
    }
};

class HomeText : public Home
{
private:
    int words;

public:
    HomeText(string t, float r, int w) : Home(t, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The title of the home text is: " << title << endl;
        cout << "The rating of the home text is: " << rating << endl;
        cout << "The number of words in the home text is: " << words << endl;
    }
};

int main()

{

    string title;
    float rating, video_length;
    int words;

    title = "Beautiful Home";
    video_length = 5.5;
    rating = 4.5;
    HomeVideo home_video(title, rating, video_length);
    title = "Crazy Home";
    words = 1000;
    rating = 4.0;
    HomeText home_text(title, rating, words);

    Home *tuts[2];
    tuts[0] = &home_video;
    tuts[1] = &home_text;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}