#ifndef REGISTER_HPP
#define REGISTER_HPP

#include "../GetAcc/GetAcc.cpp"

class Register : public Box
{
private:
  void Message(string message,int color, bool talk);//Message in a static location, with a color, and if is talked
  void Message(string message,int color,int variation, bool talk);//With variation in X position
  //Message in a static location, with a color and a variation in x
////////////////////////////////////////////////////////////////////////////////////////////
  protected:
    string get_name;//Take name from user
    string get_username;//Take username from user
    int    get_id;//Take id from user
    string get_password;//Take password from user

    vector <string> m_AllUsers;
    vector<GetAcc> Users;//Get user data
    GetAcc ids;//To know how many id's we have
    GetAcc Createacount;
////////////////////////////////////////////////////////////////////////////////////////////
  public:
    Register(){};
    ~Register(){};
    void RegisterBox();//Main Box from register big word
    void Logo();//Logo in top left
    void Name();//To insert Name
    void Username();//To insert username
    void Password();//To insert password
    bool Confirm();//Confirm if want to create
////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
    //Database Functions
    void LoadAllUsersData();//Load all users data
    void CheckUsernameEqual();//Check if there is any user equal in database
    void CreateAccount();//Create the txt account!!
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
    bool CompleteRegister()
    {
      system("cls");
      LoadAllUsersData();
      RegisterBox();
      Logo();
      Message("Welcome to Register Menu!!",2,true);sleep(1);
        Message("Press anything to continue<-<-",2,true);
          _getch();
            select->Play("wait from 0",400);
            Message("Sorry for using idiot colors",2,3,true);
              sleep(1);

      Name();
      Username();
      Password();
      if(Confirm()==true)//Checa se usuario quis criar conta
      return true;//True, usuario quis criar então execute o save
        else return false;//False = não quis criar
    }


};


#endif
