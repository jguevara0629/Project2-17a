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
struct TexasHoldem{
    
    // ARRAY of CARDS
    const int SIZE = 52;
    std::string *deck = new std::string[SIZE];
    void newDeck();
    // These will be cards displayed on the table
    int card1, card2, card3,card4,card5;
    // These will be for my Cards
    int myCard1,myCard2;
    
    // These will be for ROBOT Player (Opponent)
    int roboCard1, roboCard2;
    int myChips;
    int potSize;
    int roboChips;
    void addToPot(int);
    int  getPotSize();
    int BetRaiseOrFold;
    int roboBetRaiseOrFold(int);
    
    int getMyChips();
    void setMyChips(int);
    void betMyChips(int);
    
    void myHand();
    void showMyHand();
    
    void roboHand();
    void showRoboHand();
    
    
    int *sortedHand = new int[7];
    int *roboSortedHand = new int[7];
    void rankHand();
    void rankRoboHand();
    void swapCard(int*,int*);
    
    void showBest();
    void showRoboBest();
    void bestHand();
    void bestRoboHand();
    std::string *suit = new std::string[6];
    std::string *roboSuit = new std::string[6];
    void whatSuit();
    void whatRoboSuit();
    void showSuit();
    void showRoboSuit();
    
    int *cardNumber = new int[6];
    int *roboCardNumber = new int[6];
    void findCardNumber();
    void findRoboCardNumber();
    void showCardNumber();
    void showRoboCardNumber();
    
    int *diff = new int[6];
    int *roboDiff = new int[6];
    void findDiff();
    void findRoboDiff();
    void showDiff();
    void showRoboDiff();
    
    int heartsCount;
    int spadesCount;
    int diamondsCount;
    int clubsCount; 
    void suitCount();
    int roboHeartsCount;
    int roboSpadesCount;
    int roboDiamondsCount;
    int roboClubsCount; 
    void roboSuitCount();
    
    // First Flip
    void firstFlip();
    // Second Flip
    void secondFlip();
    // Third Flip
    void thirdFlip();
    
    int myPoints;
    int roboPoints;
    void declareWinner();
    bool roboForfeit = false;
    
    void writeData(std::ofstream &file,int);
    
};





#endif /* TEXASHOLDEM_H */
