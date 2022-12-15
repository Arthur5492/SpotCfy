#include "Login.hpp"

void Login::Logo()
{
  Color(2);
    MakeASCII("menus/Login/logo.txt",73,1);
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Login::Username()
{
  Color(11);
  MakeBox(61,26,3,74);
  gotoxy(62,28);
  Color(3);
  cout<<"Username:";
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Login::Password()
{
  Color(11);
  MakeBox(61,30,3,74);
  Color(3);
  gotoxy(62,32);
  cout<<"Password:";
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Login::LoginButton(bool selected)
{
  Color(11);
  if(selected==true)Color(2);
  MakeBox(87,35,3,20);
  gotoxy(94,37);
  Color(3);
    cout<<"LOGIN";
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Login::RegisterButton(bool selected)
{
  Color(11);
  if(selected==true)Color(2);
  MakeBox(87,40,3,20);
  gotoxy(90,42);
  Color(3);
    cout<<"CREATE ACCOUNT";
  Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
void Login::OptionsBox()
{
  Color(2);
  MakeBox(60,23,23,76);
  Color(2);
  Username();
  Password();
  LoginButton(false);
  RegisterButton(false);
}
////////////////////////////////////////////////////////////////////////////////////////////
  ///Misc
void Login::Message(string message,int color, bool talk)//Printa em um local fixo da tela
{
  gotoxy(61,25);
      cout<<"                                                                          ";
        gotoxy(87,25);
          Color(color);
          if (talk == true)Talk(message);
            else cout<<message;
          Color(7);
}
void Login::Message(string message,int color, int variation, bool talk)//Agora com variacao
{
    gotoxy(61,25);
        cout<<"                                                                          ";
          gotoxy(87-variation,25);
            Color(color);
            if (talk == true)Talk(message);
              else cout<<message;
            Color(7);
}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
void Login::Inputs()
{
  Message("Tell your username",3,false  );
  gets_username = SafeCin("Username:",3,gets_username,62,28);
    select->Play("wait from 0",500);
    Message("Now your password",3,false);
      gets_password = SafeCin("Password:",3,gets_password,62,32);
        select->Play("wait from 0",500);
}
////////////////////////////////////////////////////////////////////////////////////////////
  pair<bool,bool> Login::SelectOption()//Pair first é para verificar se clicou em login ou register
                                       //Pair second é para ver se deu certo a checagem de login
  {
    bool loginbutao = true; //Get users choice, starts in login screen
    bool registerbutao = false;//Get users choice
    LoginButton(true);//Ja starta o LoginButton como primeira opcao
      while(true)//para o usuario clicar algo
      {
        if(_kbhit())//Se clicar algo
          {
            int c=0;//Variavel pra pegar o butao
            c = _getch();//Pega o botao q o usuario clicou
              if(c==ENTER)//Se usuario der enter
              {
                if (loginbutao==true)//Se estiver no botao login
                {
                  select->Play("from 0",500);
                  Message("Ok, ok, you want to login",3,0,false);
                  Wait(500);
                  Inputs(); //////////////Chama pro usuario iniciar os inputs
                  if(CheckUser()==true)
                    return make_pair(true, true);//Retorna true pro main
                      else return make_pair(true,false);
                }
               else
                {
                  select->Play("from 0",500);
                  Message("Ok, going to Register Menu",3,true);
                  sleep(1);
                  return make_pair(false,true);
                }
              }
            ///
              if(c==KEY_UP)// Deixa Login verde
              {
                option->Play("from 0",500);
                loginbutao = true;
                registerbutao= false;
                LoginButton(true);
                RegisterButton(false);
                gotoxy(99,37);
              }
              if(c==KEY_DOWN)// Deixa Register verde
              {
                option->Play("from 0",500);
                loginbutao = false;
                registerbutao= true;
                LoginButton(false);
                RegisterButton(true);
              }

          }
      }
    return make_pair(false,false);
  }
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
void Login::LoadUsersData()
{
  m_AllPass.erase(m_AllPass.begin(),m_AllPass.end());
  m_AllUsers.erase(m_AllUsers.begin(),m_AllUsers.end());
  Users.erase(Users.begin(),Users.end());
  Users.resize(LoadAccount.GetIDMAX()+1);
  for(size_t i=0;i<=LoadAccount.GetIDMAX();i++)
  {
    Users.at(i).Load(i);
    string temp =  Users.at(i).GetUsername();
    m_AllUsers.push_back(temp);
    string temp2 = Users.at(i).GetPassword();
    m_AllPass.push_back(temp2);
  }
}
////////////////////////////////////////////////////////////////////////////////////////////
bool Login::CheckUser()
{

  for(size_t i=0;i<=LoadAccount.GetIDMAX();i++)
  {
    if(m_AllUsers.at(i)==gets_username && m_AllPass.at(i)==gets_password)
    {
      m_Name = Users.at(i).GetName();
      m_Username = Users.at(i).GetUsername();
      m_password = Users.at(i).GetPassword();
      m_id = Users.at(i).GetID();
      m_premium = Users.at(i).GetPremium();
      m_ownmusics= Users.at(i).Getownmusics();

      Message("Welcome "+m_Name+"!!",2,true);
      LoginMusic->Slowing("down",0);
      delete LoginMusic;
      sucefull->Play("wait from 0",500);
      Wait(200);
      entered->Play("wait from 0",500);
      return true;
    }
      else continue;

  }

  error->Play("from 0",500);
  Message("Username or Password invalid, try again",4,10,false);
  sleep(2);
  return false;
}
////////////////////////////////////////////////////////////////////////////////////////////
void Login::FirstLoginScreen()
{
  system("cls");
  LoginMusic->LoadMusic();
  LoginMusic->Play("from 0",500);
  Logo();//Mostra logo
  Color(11);
  gotoxy(86,22);
    cout<<"Welcome to SpotCfy!! \\o/";
    OptionsBox();

  Message("Press enter to continue",3,3,false);
    _getch();
      select->Play("from 0",800);

  Message("->->Hello! and welcome, today i will teach you how to navigate here<-<-",3,25,true);
  _getch();
    Message("First, you need to know some things",3,6,true);
    _getch();
      Message("Use the arrow up and down to navigate",3,8,true);
      _getch();
}
