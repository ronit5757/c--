#include<iostream>
#include<iomanip>
#include<bits/stdc++.h> //for strings 
#include<cstring>
using namespace std;
class cwh
{
    protected:
    char title[50];
    float rating;
    public:
    cwh(char *s, float r)
    {
        strcpy(title , s); 
        rating = r;
    }
    virtual void display()
    {
        
    }
};
class cwhvideo : public cwh
{
    float videolength;
    public:
    cwhvideo(char *s,float r, float vl) : cwh(s,r)
    {
        videolength= vl;
    }
    void display()
    {
        cout<<"THE VIDEO HAS AMZING TITLE OF "<<title<<endl;
        cout<<"THE RATING OF THIS VIDEO IS = "<<rating<<" out of 5 stars "<<endl;
        cout<<"THE VIDEO HAS LENGTH OF TOTAL "<<videolength<<" minutes "<<endl;
    }
};
class cwhtext : public cwh
{
    int words;
    public:
    cwhtext(char *s, float r, int w) : cwh(s,r) 
    {
        words = w;
    }
    void display()
    {
        cout<<"THE text tutorial HAS AMZING TITLE OF "<<title<<endl;
        cout<<"THE RATING OF THIS text tutorial IS = "<<rating<<" out of 5 stars "<<endl;
        cout<<"THE TOTAL NUMBER OF WORDS USED IN THIS TEXT TUTORIAL ARE = "<<words<<endl;
    }
};
int main()
{
    char * title = new char[50];
    char * title1 = new char[50];
    int words;
    float rating, videolength,rating1;
    title = "c++ tutorials ";
    title1 = "python tutorials";
    rating1=4.5;
    words = 5030;
    rating = 4.9; 
    videolength = 5.39;
    cwhtext efgh(title1, rating1, words);
    cwhvideo abcd(title,rating,videolength);
    //abcd.display(); this will obviously run the video constructor 
    cwh * p[2]; //two pointers for class cwh are created 
    p[0] = &abcd;
    p[1] = &efgh;
    p[0]->display();
    p[1]->display();
    //if virtual function was not m,ade in cwh , these pointers were showing value of display method of class cwh onnly
    //but now due to virtual function they will show the value respective to the addresses they are newly assigned 

 
    return 0;
}