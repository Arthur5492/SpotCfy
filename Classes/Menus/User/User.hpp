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
  ~User(){
    delete AtualUser;
  };

  void CompleteScreen();//Complete Screen
  void UserBox();//User box
  void Exit();//To exit User menu

  void Name();
  void Username();
  void Password();
  bool Premium();
  void PremiumQuestion(bool wich, bool hide);
  void PremiumCourse(bool yesno);

  void YesNo_Box(bool Yes_No,bool hide);





};

#endif
