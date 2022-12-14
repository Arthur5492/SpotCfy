#ifndef LOGIN_HPP
#define LOGIN_HPP

// #include "../Box\Box.hpp"//Pra toca musica
#include "../Register/Register.cpp"
class Login : public Box
{
  private:
    Register m_register;//Para usar Algumas funcoes do register class
    string gets_username;//username q o usuario digitar
    string gets_password;//Senha que o usuario digitar

    //Database Data
    vector<GetAcc> Users;//Get user data
    GetAcc LoadAccount;
    vector<string> m_AllUsers;
    vector<string>m_AllPass;

    void Message(string message,int color,bool talk);//Printa em um local fixo da tela, e se for fala ou nao
    void Message(string message,int color, int variation, bool talk);//Agora com variacao em x

  protected:
    //User data
    string m_Name;
    string m_Username;
    string m_password;
    int m_id;
    int m_premium;
    vector<int>m_ownmusics;

    //Soundtracks
    Music *LoginMusic = new Music("soundtracks\\loginzada.mp3","mp3","login");
  public:
    Login(){};
    ~Login(){};
////////////////////////////////////////////////////////////////////////////////////////////
    //Creation menu parts
    void Logo();//CRia logo

    void Username();//CRia parte do nome
    void Password();//Cria parte do password
    void LoginButton(bool selected);//Cria opcao de login
    void RegisterButton(bool selected);//CRia parte de registrar botao
    void OptionsBox();//Cria a caixa com todas as opcoes

    pair<bool,bool> SelectOption();//Para o usuario escolher entre se registrar ou logar
    void Inputs(); // Pede os cin caso o usuario escolha login


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
  ///Database
  void LoadUsersData();
  void SelectAccount();
  bool CheckUser();
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
    //Ful created menu
    void FirstLoginScreen();
    pair<bool,bool> CompleteLogin()
    {
      LoadUsersData();//Take all users data
      system("cls");
      Logo();//Mostra logo
      Color(11);
      gotoxy(86,22);
        cout<<"Welcome to SpotCfy!! \\o/";
        OptionsBox();

              Message("Press enter to Select Login or Register",3,10,true);
              sleep(1);
              select->Play("wait from 0",800);
              pair<bool,bool> option = SelectOption();
              if (option.first==false)//Se clicou em sair
               return make_pair(false,false);

                else if(option.first == true && option.second==true)//Se clicou em Login e deu certo
                  return make_pair(true,true);

                    else if (option.first==true && option.second==false)//Se clicou em login e deu errado
                      return make_pair(true,false);
            return make_pair(false,false);
    }
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
    //Getters
    string GetName(){return m_Name; } ;
    string GetUsername(){return m_Username; } ;
    string GetPassword(){return m_password;} ;
    int GetID(){return m_id; } ;
    int GetPremium(){return m_premium;} ;
    vector<int> Get_OwnMusics(){return m_ownmusics;} ;

};
#endif
