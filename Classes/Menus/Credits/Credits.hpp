#ifndef CREDITS_HPP
#define CREDITS_HPP

#include "../User/User.cpp"

  class Credits : public Box
  {
  private:

    Login *User;
  public:
    Credits(Login* sameusr):User(sameusr) {};
    ~Credits(){};

    void CreditsLogo();
    void ProducedBy();
    void Starring();
    void Music();
    void ArtDesign();
    void And();
    void You();

    void AllCredits()
    {
      // CreditsLogo();
      // sleep(1);
      // ProducedBy();
      // sleep(2);
      // Starring();
      // sleep(2);
      // Music();
      // sleep(2);
      // ArtDesign();
      // sleep(3);
      And();
      Wait(500);
      system("cls");
      CreditsLogo();
      Wait(1000);
      And();
      sleep(2);
      You();
    }
  };

#endif
