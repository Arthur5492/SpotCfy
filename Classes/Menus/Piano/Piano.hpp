#ifndef PIANO_HPP
#define PIANO_HPP

#include "../../Mainmenu/Mainmenu.cpp"

class Piano : public Box
{
private:
  char ch;//Detect wich key pressed

  string left;
  string right;
public:
  Piano(){};
  ~Piano(){};

  void ConstructMenu();
  void TopText();
  void SideText();

  void Keys();

  void Key(string CurrentKey,int x1,int x2,int x3,int x4,int x5);//Toca nota natural

  void KeyS(string CurrentKey,int x1);//Toca nota acidentada(# e b)

  void PickKey(string Note,int x1,int x2,int x3,int x4,int x5);//Para Nota natural
  void PickKey(string Note,int x1);//Para Nota acidentada(# e b)

  void PlayCurrent(Music at,bool multiplenotes);//Play music at note

};



#endif
