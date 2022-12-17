#include "Register.hpp"
///Register parts
void Register::RegisterBox()
{
  Color(3);
  MakeBox(80,1,40,50);
  MakeASCII("menus/Register/register.txt",82,3);
  MakeBox(80,1,10,50);
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Register::Logo()
{
  Color(2);
  MakeBox(1,0,13,48);
  MakeASCII("menus/Register/SpoCfy.txt",2,1);
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Register::Name()
{
  Message("Ok, now digit your name",2,true);
  Color(1);
  MakeBox(82,17,3,46);
  while (true)
  {
    get_name=SafeCin("Name:",3,get_name,83,19);//Title, Color title, variable,x and y position
    select->Play("wait from 0",500);
      if (get_name.length()==0 ||get_name=="/"||get_name=="@" ||get_name=="~"||get_name==" ")
      {
        Message("Please insert a valid name",4,true);
        continue;
      }

    if(get_name=="  ")
      get_name=="Anonymous";
      break;
  }

  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Register::Username()
{
  Message("Now, a unique username!!",2,true);
  Color(1);
  MakeBox(82,22,3,46);
  CheckUsernameEqual();
}
////////////////////////////////////////////////////////////////////////////////////////////
void Register::Password()//Password part
{
  Color(1);
  MakeBox(82,27,3,46);
  while(true)
  {
  Message("Last, a good 8 digits password >:)",2,4,true);
  get_password=SafeCin("Password:",3,get_password,83,29);//Title, Color title, variable,x and y position
  select->Play("wait from 0",500);
    if(get_password.length()<7)
    {
      Message("Please make a better EIGHT digits password",4,7,true);
      sleep(3);
      continue;
    }
      else if(get_password.find(' ')!=string::npos)
        {
          Message("We don't like SPACES here in password",4,true);
          sleep(2);
          continue;
        }
  break;
  }
}
////////////////////////////////////////////////////////////////////////////////////////////
bool Register::Confirm()
{
  Color(1);
  MakeBox(82,32,8,46);
  Color(3);
  gotoxy(82,34);
    cout<<"Name:"<<get_name;
      gotoxy(82,36);
        cout<<"Username:"<<get_username;
          gotoxy(82,38);
            cout<<"Password:"<<get_password;
  Color(4);
  gotoxy(98,33);
    cout<<"Press enter in YES to confirm";
    Message("Use arrow keys to select",2,true);
      gotoxy(114,39);
        Color(2);
        cout<<"YES";
        Color(7);
      gotoxy(121,39);
        cout<<"NO";
      gotoxy(114,39);
  bool ch=true;
  while(true)
  {
    if(_kbhit)
    {
      int c=0;
        c=_getch();
          if(c==ENTER)
          {
            if(ch==true)
            {
              select->Play("from 0",500);
                get_id=ids.GetIDMAX();
                get_id+=1;
                Createacount.Create(get_id,get_name,get_username,get_password);
                Message("Account Suceffuly created!!",3,true);sleep(2);
                system("cls");
                return true;
            }
              else{
                select->Play("from 0",500);
                Message("Ok,backing to Login :(",3,1,true);
                sleep(2);
                system("cls");
                RegisterBox();
                Logo();sleep(1);
                system("cls");
                return false;
              }
            break;
          }
          if(c==KEY_LEFT)
          {
            option->Play("from 0",500);
            gotoxy(114,39);
              Color(2);
              cout<<"YES";
              Color(7);
            gotoxy(121,39);
              cout<<"NO";
            gotoxy(114,39);
            ch=true;
          }
          if(c==KEY_RIGHT)
          {
            option->Play("from 0",500);
            gotoxy(114,39);
              Color(7);
              cout<<"YES";
              Color(2);
            gotoxy(121,39);
              cout<<"NO";
              ch=false;
          }
    }

  }

}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
///Database parts and a random Message function
void Register::LoadAllUsersData()//Load all user data, to check if have any password
{
  Users.resize(ids.GetIDMAX());
  for(size_t i=0;i<ids.GetIDMAX();i++)
  {
    Users.at(i).Load(i);
    string temp =  Users.at(i).GetUsername();
    m_AllUsers.push_back(temp);
  }
}
////////////////////////////////////////////////////////////////////////////////////////////
void Register::CheckUsernameEqual()
{
  while (true)
  {
      get_username=SafeCin("Username:",3,get_username,83,24);//Title, Color title, variable,x and y position
      select->Play("wait from 0",500);
      if(get_username.length()==0 ||get_username=="/"||get_username=="@" ||get_username=="~"||get_username==" ")
        {
          Message("Please insert a valid Username",4,true);
          sleep(3);
          Message("a UNIQUE username:",2,true); 
          continue;
        }
          else if(find(m_AllUsers.begin(),m_AllUsers.end(),get_username)!=m_AllUsers.end())
          {
            Message("This username is already used!",4,1,true);
            sleep(3);
            continue;
          }
        break;
  }
}
////////////////////////////////////////////////////////////////////////////////////////////
void Register::Message(string message,int color, bool talk)//Message in a static location, with a color
{
  gotoxy(80,14);
      cout<<"                                                  ";
        gotoxy(91,14);
          Color(color);
          if (talk==true)
            Talk(message);
              else cout<<message;
          Color(7);
}
void Register::Message(string message,int color,int variation,bool talk)//Message in a static location, with a color
{
  gotoxy(80,14);
      cout<<"                                                  ";
        gotoxy(91-variation,14);
          Color(color);
            if (talk==true)
              Talk(message);
                else cout<<message;
          Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
