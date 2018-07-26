/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TexasHoldem.h
 * Author: jasonguevara
 *
 * Created on July 24, 2018, 10:54 PM
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <fstream>

#ifndef TEXASHOLDEM_H
#define TEXASHOLDEM_H
class TexasHoldem{
private:
    // ARRAY of CARDS
    const int SIZE = 52;
    std::string *deck = new std::string[SIZE];
    
    // These will be cards displayed on the table
    int card1, card2, card3,card4,card5;
    // These will be for my Cards
    int myCard1,myCard2;
    
    // These will be for ROBOT Player (Opponent)
    int roboCard1, roboCard2;
    int roboCard1_2, roboCard2_2;
    int roboCard1_3, roboCard2_3;
    int myChips;
    int potSize;
    int roboChips;
    int BetRaiseOrFold;
    int *sortedHand = new int[7];
    int *roboSortedHand = new int[7][NumofPlayers];
    std::string *suit = new std::string[6];
    std::string *roboSuit = new std::string[6][NumofPlayers];
    int *cardNumber = new int[6];
    int *roboCardNumber = new int[6][NumofPlayers];
    int *diff = new int[6];
    int *roboDiff = new int[6][NumofPlayers];
    
    int heartsCount;
    int spadesCount;
    int diamondsCount;
    int clubsCount; 
    int roboHeartsCount1,roboHeartsCount2,roboHeartsCount3;
    int roboSpadesCount1,roboSpadesCount2,roboSpadesCount3;
    int roboDiamondsCount1,roboDiamondsCount2,roboDiamondsCount3;
    int roboClubsCount1,roboClubsCount2,roboClubsCount3; 
    int myPoints;
    int roboPoints1,roboPoints2,roboPoints3;
    bool roboForfeit = false;
    int NumofPlayers;
    
    
public:
    void newDeck();
    void addToPot(int);
    int  getPotSize();
    int roboBetRaiseOrFold(int);
    int getMyChips();
    void setMyChips(int);
    void betMyChips(int);
    void myHand();
    void showMyHand();
    void roboHand(int);
    void showRoboHand();
    void rankHand();
    void rankRoboHand();
    void swapCard(int*,int*);
    void showBest();
    void showRoboBest(int);
    void bestHand();
    void bestRoboHand(int);
    void whatSuit();
    void whatRoboSuit();
    void showSuit();
    void showRoboSuit(int);
    void findCardNumber();
    void findRoboCardNumber(int);
    void showCardNumber();
    void showRoboCardNumber(int);
    void findDiff();
    void findRoboDiff(int);
    void showDiff();
    void showRoboDiff();
    void suitCount();
    void roboSuitCount(int);
    // First Flip
    void firstFlip();
    // Second Flip
    void secondFlip(int);
    // Third Flip
    void thirdFlip(int);
    void declareWinner();
    void writeData(std::ofstream &file,int);
    void setRoboChips(int);
    int  getRoboChips();
    void setNumOfPlayers(int);
    int  getNumOfPlayers();
    void generateNumofPlayers();
    void *createArrOfPlayers(int);
    void HandOutcomes(int);
    
    
};





#endif /* TEXASHOLDEM_H */
