#ifndef MAINMENU_HPP
#define MAINMENU_HPP

// #include "../Box/Box.cpp"
#include "../Login/Login.cpp"
class Mainmenu : public Box
{
 protected:
   //For box statistics
    // int big_x =1;
    // int big_y=0;
    // int big_tall=41;
    // int big_wdt=166;

  //Get user data from Login
  Login *m_User;

  //Soundtracks
  Music *MainMenuMusic;
  Music *CalmMusic = new Music("soundtracks\\talktome.mp3","mp3","calmMusic");
  Music *CalmDown = new Music("soundtracks\\talk2.mp3","mp3","calmDown");
  Music *Last = new Music("soundtracks\\cry.mp3","mp3","last");
void Message(string message, int color,bool talk);//Dar string na parte de input, Se fala for true fala pausado,
void Message(string message, int color,bool talk, int slow);//slow varia a velocidade da fala

////////////////////////////////////////////////////////////////////////////////////////////
  protected:
    char m_option1; //Pre selecione o numero do usuario
    char m_selected=' ';//Execute quando ele pressionar enter
    //Theses Opens are for check if option got   selected
    bool AnyOpen=false;//If any Open got true
    int WichSelected=0;
////////////////////////////////////////////////////////////////////////////////////////////
public:
  Mainmenu(Login* User): m_User(User){};
  ~Mainmenu(){
    delete m_User;
    delete MainMenuMusic;
  }

  ////////////////////////////////////////////////////////////////////////////////////////////
  ///Mainmenu Parts
  //Header
  void Logos();//CONFIGURAÇÕES DA LOGO SPOCFY
  void Search();//CONFIGURAÇÕES DA PARTE SEARCH
  void PublicPlaylist(); //PUBLIC PLAYLIST CONFIGS, são pra mostrar as pastas com cada gênero
  void User();//CONFIGURAÇÕES DA PARTE USER DO HEADER

  //Bottom:
  void RandomMusic();
  void Creator();
  void Piano();
  void Options();
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
  void CompleteHeader()//Complete Header
  {
    MakeBox(big_x+48,big_y,16,118);//Linha que fecha o Header
    Logos();
    User();
    Search();
    PublicPlaylist();
  }
///////////////////////////
  void CompleteBottom()//Complete bottom
  {
    MakeBox(big_x, big_y+19,22,166);
    RandomMusic();
    Creator();
    Piano();
    Options();

  }
//////////////////////////
  void RandomSoundtrack();


  void StartMain();
  int CompleteMain(bool opened_again)//Complete Menu
  {
    WichSelected =0;
    AnyOpen = false;
    m_option1 = ' ';//Guarda qual tecla foi clicada
    m_selected =' ';
    if(opened_again)
    {
      system("cls");
      RandomSoundtrack();
      BigMenu();
        //Set every Open to false
      CompleteHeader();//Header
      CompleteBottom();//Bottom
      Message("Welcome again my brother, select a 1-7 option ;D",2,true);
    }
    while(true)//Sempre verifica a opcao do usuario
    {
      if(AnyOpen==true)break;//If any file got opened, stop

      WichSelected = 0;

      if(_kbhit())//Se alguma tecla for clicada
      {
      m_option1 =_getch();//Guarda qual tecla foi clicada
      m_selected = '0';//Para quando clicar de novo, voltar para branco
      CompleteHeader();//Header do main
      CompleteBottom();//Bottom do main
      gotoxy(2,18);//Para linha de input ficar no cantinho

        if(_getch()=='\r')
        {//Se o input for enter
          m_selected = m_option1;//Guarde qual foi o primeiro input no selected
          CompleteHeader();//Agora printa com corzinha verde
          CompleteBottom();//Agora printa com corzinha verde
          gotoxy(2,18);
          continue;
        } else
          {
            m_selected=' ';
            CompleteHeader();
            CompleteBottom();
            Message("Heya , Please select a 1-7 option!!",2,false);
            gotoxy(2,18);
            continue;
          }
      }
    }
    // if(m_User->GetStatus()==1)MainMenuMusic->Slowing("down",0);
    if(WichSelected!=3 ) MainMenuMusic->Slowing("down",0);
    return WichSelected;
  }

  //Getter
    int GetWichSelected(){return WichSelected; } ;
//End class
};


#endif
