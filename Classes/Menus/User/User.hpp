#ifndef USER_HPP
#define USER_HPP

#include "../Piano/Piano.cpp"

class User : public Box
{
private:
  void Message(string message,int color, bool talk);//Message in a static location, with a color
  void Message(string message,int color,int variation,bool talk);//Message in a static location, with a color

protected:
Login *AtualUser;


public:
  User(Login* us) :AtualUser(us)  {};
  ~User(){};

  void CompleteScreen();//Complete Screen
  void UserBox();//Userbox screen


};

#endif
