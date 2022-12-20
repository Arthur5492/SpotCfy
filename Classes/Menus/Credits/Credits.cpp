#include "Credits.hpp"

void Credits::CreditsLogo()
{
  Color(3);
  MakeASCII("Mainmenus/Credits/Credits.txt",65,1);
  Color(7);
}

void Credits::ProducedBy()
{
    Color(2);
    MakeASCII("Mainmenus/Credits/Producer.txt",40,10);
    Color(7);
}

void Credits::Starring()
{
  Color(6);
  MakeASCII("Mainmenus/Credits/Starring.txt",39,18);
  Color(7);
}

void Credits::Music()
{
  Color(5);
  MakeASCII("Mainmenus/Credits/Music.txt",39,26);
  Color(7);
}

void Credits::ArtDesign()
{
  Color(9);
  MakeASCII("Mainmenus/Credits/ArtDesign.txt",37,35);
  Color(7);
}

void Credits::And()
{
  system("cls");
  CreditsLogo();
  Color(2);
  MakeASCII("Mainmenus/Credits/And.txt",80,18);
  Color(7);
}

void Credits::You()
{
  system("cls");
  CreditsLogo();
  Color(2);
  MakeASCII("Mainmenus/Credits/You.txt",73,18);
  Color(7);
}

void Credits::Thx()
{
  system("cls");
  CreditsLogo();
  Color(2);
  MakeASCII("Mainmenus/Credits/Thx.txt",70,18);
  Color(7);
}

void Credits::Thx2()
{
  Color(5);
  MakeASCII("Mainmenus/Credits/Thx2.txt",70,25);
  Color(7);
}
