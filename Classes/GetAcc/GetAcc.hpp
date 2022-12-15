#ifndef GETACC_HPP
#define GETACC_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "../Box\Box.cpp"
using namespace std;

class GetAcc
{
  private:
    vector<int> m_ownmusics;//Read ownmusics
    string      m_name;//Read name
    string      m_username;//Read Username
    string      m_password;//Read password
    int         m_id=0;//Read id
    int         m_premium=0;//Read if premium
    int         m_status=0;
    int         m_idmax=0;//Read how many id we have currently
  public:
    GetAcc(){};
    ~GetAcc(){};
    void Load(int number);//Load music
    void SelectLine(ifstream& file,int line);//Select wich line i want in ifstream

    void Create(int IDnumber, string name, string username, string password);
    void SelectLine(ofstream& file, int line);
////////////////////////////////////////////////////////////////////////////////////////////
    void IDMAX();//Check how many ids have already created
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
    ///Getters
    vector<int> Getownmusics(){return m_ownmusics;} //Get ownmusics
    string      GetName(){return m_name;}//Get name
    string      GetUsername(){return m_username;}//Get Username
    string      GetPassword(){return m_password;}//Get password
    int         GetID(){return m_id;}//Get id
    int         GetPremium(){return m_premium;}//Get if premium
    int         GetIDMAX(){IDMAX(); return m_idmax; }

};

#endif
