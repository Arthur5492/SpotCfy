#ifndef CREDITS_HPP
#define CREDITS_HPP

#include "../User/User.cpp"
  class Credits : public Box
  {
  private:

    Login *User = NULL;//dados do jogador


  public:
    Credits(Login* sameusr):User(sameusr) {};//Pega os dados do jogador
    ~Credits(){
      delete User;
    };

    void CreditsLogo();
    void ProducedBy();
    void Starring();
    void Music();
    void ArtDesign();
    void And();
    void You();
    void Thx();
    void Thx2();

    void AllCredits()
    {

      system("cls");
      User->Gambiarra(false);//Pra tocar a musica dos creditos
      if(User->GetStatus()==1)sleep(1);
      CreditsLogo();
      sleep(1);
      ProducedBy();
      sleep(3);
      Starring();
      sleep(3);
      Music();
      sleep(3);
      ArtDesign();
      Wait(4000);
      if(User->GetStatus()==1)
      {
        sleep(3);
        And();
        Wait(500);
        system("cls");
        CreditsLogo();
        Wait(1000);
        And();
        sleep(2);
        You();
        sleep(3);
        Thx();
        sleep(1);
        Thx2();
        sleep(7);
      }
      User->Gambiarra(true);//Pra desligar a musica dos creditos
      system("cls");
    }

  };

#endif
