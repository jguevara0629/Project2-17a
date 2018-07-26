/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TexasHoldem.cpp
 * Author: jasonguevara
 * 
 * Created on July 24, 2018, 10:54 PM
 */

#include "TexasHoldem.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <fstream>

void TexasHoldem::newDeck(){
         deck[0]="A\u2665------A\u2665\n| Ace    |\n|   of   |\n| Hearts |\nA\u2665------A\u2665";
         deck[1]="A\u2660------A\u2660\n| Ace    |\n|   of   |\n| Spades |\nA\u2660------A\u2660";
         deck[2]="A\u2666------A\u2666\n| Ace    |\n|   of   |\n|Diamonds|\nA\u2666------A\u2666";
         deck[3]="A\u2663------A\u2663\n| Ace    |\n|   of   |\n| Clubs  |\nA\u2663------A\u2663";
         deck[4]="2\u2665------2\u2665\n| Two    |\n|   of   |\n| Hearts |\n2\u2665------2\u2665";
         deck[5]="2\u2660------2\u2660\n| Two    |\n|   of   |\n| Spades |\n2\u2660------2\u2660";
         deck[6]="2\u2666------2\u2666\n| Two    |\n|   of   |\n|Diamonds|\n2\u2666------2\u2666";
         deck[7]="2\u2663------2\u2663\n| Two    |\n|   of   |\n| Clubs  |\n2\u2663------2\u2663";
         deck[8]="3\u2665------3\u2665\n| Three  |\n|   of   |\n| Hearts |\n3\u2665------3\u2665";
         deck[9]="3\u2660------3\u2660\n| Three  |\n|   of   |\n| Spades |\n3\u2660------3\u2660";
        deck[10]="3\u2666------3\u2666\n| Three  |\n|   of   |\n|Diamonds|\n3\u2666------3\u2666";
        deck[11]="3\u2663------3\u2663\n| Three  |\n|   of   |\n| Clubs  |\n3\u2663------3\u2663";
        deck[12]="4\u2665------4\u2665\n| Four   |\n|   of   |\n| Hearts |\n4\u2665------4\u2665";
        deck[13]="4\u2660------4\u2660\n| Four   |\n|   of   |\n| Spades |\n4\u2660------4\u2660";
        deck[14]="4\u2666------4\u2666\n| Four   |\n|   of   |\n|Diamonds|\n4\u2666------4\u2666";
        deck[15]="4\u2663------4\u2663\n| Four   |\n|   of   |\n| Clubs  |\n4\u2663------4\u2663";
        deck[16]="5\u2665------5\u2665\n| Five   |\n|   of   |\n| Hearts |\n5\u2665------5\u2665";
        deck[17]="5\u2660------5\u2660\n| Five   |\n|   of   |\n| Spades |\n5\u2660------5\u2660";
        deck[18]="5\u2666------5\u2666\n| Five   |\n|   of   |\n|Diamonds|\n5\u2666------5\u2666";
        deck[19]="5\u2663------5\u2663\n| Five   |\n|   of   |\n| Clubs  |\n5\u2663------5\u2663";
        deck[20]="6\u2665------6\u2665\n| Six    |\n|   of   |\n| Hearts |\n6\u2665------6\u2665";
        deck[21]="6\u2660------6\u2660\n| Six    |\n|   of   |\n| Spades |\n6\u2660------6\u2660";
        deck[22]="6\u2666------6\u2666\n| Six    |\n|   of   |\n|Diamonds|\n6\u2666------6\u2666";
        deck[23]="6\u2663------6\u2663\n| Six    |\n|   of   |\n| Clubs  |\n6\u2663------6\u2663";
        deck[24]="7\u2665------7\u2665\n| Seven  |\n|   of   |\n| Hearts |\n7\u2665------7\u2665";
        deck[25]="7\u2660------7\u2660\n| Seven  |\n|   of   |\n| Spades |\n7\u2660------7\u2660";
        deck[26]="7\u2666------7\u2666\n| Seven  |\n|   of   |\n|Diamonds|\n7\u2666------7\u2666";
        deck[27]="7\u2663------7\u2663\n| Seven  |\n|   of   |\n| Clubs  |\n7\u2663------7\u2663";
        deck[28]="8\u2665------8\u2665\n| Eight  |\n|   of   |\n| Hearts |\n8\u2665------8\u2665";
        deck[29]="8\u2660------8\u2660\n| Eight  |\n|   of   |\n| Spades |\n8\u2660------8\u2660";
        deck[30]="8\u2666------8\u2666\n| Eight  |\n|   of   |\n|Diamonds|\n8\u2666------8\u2666";
        deck[31]="8\u2663------8\u2663\n| Eight  |\n|   of   |\n| Clubs  |\n8\u2663------8\u2663";
        deck[32]="9\u2665------9\u2665\n| Nine   |\n|   of   |\n| Hearts |\n9\u2665------9\u2665";
        deck[33]="9\u2660------9\u2660\n| Nine   |\n|   of   |\n| Spades |\n9\u2660------9\u2660";
        deck[34]="9\u2666------9\u2666\n| Nine   |\n|   of   |\n|Diamonds|\n9\u2666------9\u2666";
        deck[35]="9\u2663------9\u2663\n| Nine   |\n|   of   |\n| Clubs  |\n9\u2663------9\u2663";
        deck[36]="10\u2665----10\u2665\n| Ten    |\n|   of   |\n| Hearts |\n10\u2665----10\u2665";
        deck[37]="10\u2660----10\u2660\n| Ten    |\n|   of   |\n| Spades |\n10\u2660----10\u2660";
        deck[38]="10\u2666----10\u2666\n| Ten    |\n|   of   |\n|Diamonds|\n10\u2666----10\u2666";
        deck[39]="10\u2663----10\u2663\n| Ten    |\n|   of   |\n| Clubs  |\n10\u2663----10\u2663";
        deck[40]="J\u2665------J\u2665\n| Jack   |\n|   of   |\n| Hearts |\nJ\u2665------J\u2665";
        deck[41]="J\u2660------J\u2660\n| Jack   |\n|   of   |\n| Spades |\nJ\u2660------J\u2660";
        deck[42]="J\u2666------J\u2666\n| Jack   |\n|   of   |\n|Diamonds|\nJ\u2666------J\u2666";
        deck[43]="J\u2663------J\u2663\n| Jack   |\n|   of   |\n| Clubs  |\nJ\u2663------J\u2663";
        deck[44]="Q\u2665------Q\u2665\n| Queen  |\n|   of   |\n| Hearts |\nQ\u2665------Q\u2665";
        deck[45]="Q\u2660------Q\u2660\n| Queen  |\n|   of   |\n| Spades |\nQ\u2660------Q\u2660";
        deck[46]="Q\u2666------Q\u2666\n| Queen  |\n|   of   |\n|Diamonds|\nQ\u2666------Q\u2666";
        deck[47]="Q\u2663------Q\u2663\n| Queen  |\n|   of   |\n| Clubs  |\nQ\u2663------Q\u2663";
        deck[48]="K\u2665------K\u2665\n| King   |\n|   of   |\n| Hearts |\nK\u2665------K\u2665";
        deck[49]="K\u2660------K\u2660\n| King   |\n|   of   |\n| Spades |\nK\u2660------K\u2660";
        deck[50]="K\u2666------K\u2666\n| King   |\n|   of   |\n|Diamonds|\nK\u2666------K\u2666";
        deck[51]="K\u2663------K\u2663\n| King   |\n|   of   |\n| Clubs  |\nK\u2663------K\u2663";
}
// sort the cards Highest to lowest to see If we have a good hand
void TexasHoldem::rankHand()
{
    int minIndex;
    int minValue;
    
    
    for(int i=0;i<6;i++)
    {
        minIndex=i;
        minValue = this->sortedHand[i];
    
    for(int index=i+1; index<7;index++)
        {
            if(this->sortedHand[index] > minValue)
            {
                minValue = this->sortedHand[index];
                minIndex = index;
            }
        }
        swapCard(&this->sortedHand[minIndex],&this->sortedHand[i]);
    }
}
void TexasHoldem::rankRoboHand()
{
    int minIndex;
    int minValue;
    
    
    for(int i=0;i<6;i++)
    {
        minIndex=i;
        minValue = this->roboSortedHand[i];
    
    for(int index=i+1; index<7;index++)
        {
            if(this->roboSortedHand[index] > minValue)
            {
                minValue = this->roboSortedHand[index];
                minIndex = index;
            }
        }
        swapCard(&this->roboSortedHand[minIndex],&this->roboSortedHand[i]);
    }
}
void TexasHoldem::swapCard(int* one, int* two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}
void TexasHoldem::firstFlip()
{
    this->card1 = ((rand() % 51) + 0);
    this->card2 = ((rand() % 51) + 0);
    
    while(this->card1 == this->card2)
    {
     this->card2 = ((rand() % 51) + 0); 
    }
    
    this->card3 = ((rand() % 51) + 0);
    
    while(this->card1 == this->card3 || this->card2==this->card3)
    {
     this->card3 = ((rand() % 51) + 0); 
    }
    std::cout << "\n**************************************************\n";
    std::cout << "\n\tFirst 3 Cards on the Table:\n";
    std::cout << "\n**************************************************\n";
    std::cout << this->deck[this->card1] << "\n\t\n\t\n\t\n\t\n";
    std::cout << this->deck[this->card2] << "\n\t\n\t\n\t\n\t\n";
    std::cout << this->deck[this->card3] << "\n\t\n\t\n\t\n\t\n";
    
    for(int i=0;i<this->getNumOfPlayers();i++){
            this->roboSortedHand[0][i] = this->card1;
            this->roboSortedHand[1][i] = this->card2;
            this->roboSortedHand[2][i] = this->card3;
    }
    this->sortedHand[0] = this->card1;
    this->sortedHand[1] = this->card2;
    this->sortedHand[2] = this->card3;

}
void TexasHoldem::myHand()
{
    this->myCard1 = ((rand() % 51) + 0);
    while(this->card1 == this->myCard1 || this->card2==this->myCard1 || 
            this->card3==this->myCard1)
    {
     this->myCard1 = ((rand() % 51) + 0); 
    }
    
    this->myCard2 = ((rand() % 51) + 0);
    while(this->myCard1 == this->myCard2 || this->card1 == this->myCard2 || 
            this->card2==this->myCard2 || this->card3==this->myCard2)
    {
     this->myCard2 = ((rand() % 51) + 0); 
    }
    std::cout << "\n**************************************************\n";
    std::cout << "\tMy Hand:\t\n";
    std::cout << "**************************************************\n";
    std::cout << "**************************************************" << std::endl;
    std::cout << this->deck[this->myCard1] << "\n\t\n\t\n\t\n\t\n";
    std::cout << this->deck[this->myCard2] << "\n\t\n\t\n\t\n\t\n";
    std::cout << "**************************************************" << std::endl;
    this->sortedHand[5] = this->myCard1;
    this->sortedHand[6] = this->myCard2;
}
void TexasHoldem::roboHand(int SIZE)
{
    switch(SIZE)
    {
        case 1:
        {
            this->roboCard1 = ((rand() % 51) + 0);
    
            while(this->card1 == this->roboCard1 || this->card2==this->roboCard1 || 
                  this->card3==this->roboCard1 || this->myCard1==this->roboCard1 ||
                  this->myCard2==this->roboCard1)
            {
             this->roboCard1 = ((rand() % 51) + 0); 
            }

            this->roboCard2 = ((rand() % 51) + 0);

            while(this->card1 == this->roboCard2 || this->card2==this->roboCard2 || 
                  this->card3==this->roboCard2 || this->myCard1==this->roboCard2 ||
                  this->myCard2==this->roboCard2 || this->roboCard1 == this->roboCard2)
            {
             this->roboCard2 = ((rand() % 51) + 0); 
            }

            this->roboSortedHand[5][0] = this->roboCard1;
            this->roboSortedHand[6][0] = this->roboCard2;
            break;
        }
        case 2:
        {
            this->roboCard1 = ((rand() % 51) + 0);

            while(this->card1 == this->roboCard1 || this->card2==this->roboCard1 || 
                  this->card3==this->roboCard1 || this->myCard1==this->roboCard1 ||
                  this->myCard2==this->roboCard1)
            {
             this->roboCard1 = ((rand() % 51) + 0); 
            }

            this->roboCard2 = ((rand() % 51) + 0);

            while(this->card1 == this->roboCard2 || this->card2==this->roboCard2 || 
                  this->card3==this->roboCard2 || this->myCard1==this->roboCard2 ||
                  this->myCard2==this->roboCard2 || this->roboCard1 == this->roboCard2)
            {
             this->roboCard2 = ((rand() % 51) + 0); 
            }

            this->roboSortedHand[5][0] = this->roboCard1;
            this->roboSortedHand[6][0] = this->roboCard2;
            
            
            this->roboCard1_2 = ((rand() % 51) + 0);
            while(this->card1 == this->roboCard1_2 || this->card2==this->roboCard1_2 || 
                  this->card3==this->roboCard1_2 || this->myCard1==this->roboCard1_2 ||
                  this->myCard2==this->roboCard1_2 || this->roboCard1 ==this->roboCard1_2||
                  this->roboCard2==this->roboCard1_2)
            {
             this->roboCard1_2 = ((rand() % 51) + 0); 
            }
            
            this->roboCard2_2 = ((rand() % 51) + 0);

            while(this->card1 == this->roboCard2_2 || this->card2==this->roboCard2_2 || 
                  this->card3==this->roboCard2_2 || this->myCard1==this->roboCard2_2 ||
                  this->myCard2==this->roboCard2_2 || this->roboCard1 == this->roboCard2_2 ||
                  this->roboCard2 == this->roboCard2_2 || this->roboCard1_2 == this->roboCard2_2)
            {
             this->roboCard2_2 = ((rand() % 51) + 0); 
            }

            this-> roboSortedHand[5][1] = this->roboCard1_2;
            this-> roboSortedHand[6][1] = this->roboCard2_2;       
            break;
        }
        case 3:
        {
            this->roboCard1 = ((rand() % 51) + 0);

            while(this->card1 == this->roboCard1 || this->card2==this->roboCard1 || 
                  this->card3==this->roboCard1 || this->myCard1==this->roboCard1 ||
                  this->myCard2==this->roboCard1)
            {
             this->roboCard1 = ((rand() % 51) + 0); 
            }

            this->roboCard2 = ((rand() % 51) + 0);

            while(this->card1 == this->roboCard2 || this->card2==this->roboCard2 || 
                  this->card3==this->roboCard2 || this->myCard1==this->roboCard2 ||
                  this->myCard2==this->roboCard2 || this->roboCard1 == this->roboCard2)
            {
             this->roboCard2 = ((rand() % 51) + 0); 
            }

            this->roboSortedHand[5][0] = this->roboCard1;
            this->roboSortedHand[6][0] = this->roboCard2;
            
            
            this->roboCard1_2 = ((rand() % 51) + 0);
            while(this->card1 == this->roboCard1_2 || this->card2==this->roboCard1_2 || 
                  this->card3==this->roboCard1_2 || this->myCard1==this->roboCard1_2 ||
                  this->myCard2==this->roboCard1_2 || this->roboCard1 ==this->roboCard1_2||
                  this->roboCard2==this->roboCard1_2)
            {
             this->roboCard1_2 = ((rand() % 51) + 0); 
            }
            
            this->roboCard2_2 = ((rand() % 51) + 0);

            while(this->card1 == this->roboCard2_2 || this->card2==this->roboCard2_2 || 
                  this->card3==this->roboCard2_2 || this->myCard1==this->roboCard2_2 ||
                  this->myCard2==this->roboCard2_2 || this->roboCard1 == this->roboCard2_2 ||
                  this->roboCard2 == this->roboCard2_2 || this->roboCard1_2 == this->roboCard2_2)
            {
             this->roboCard2_2 = ((rand() % 51) + 0); 
            }

            this-> roboSortedHand[5][1] = this->roboCard1_2;
            this-> roboSortedHand[6][1] = this->roboCard2_2;       
            
            
            this->roboCard1_3 = ((rand() % 51) + 0); 
            while(this->card1 == this->roboCard1_3 || this->card2==this->roboCard1_3 || 
                  this->card3==this->roboCard1_3 || this->myCard1==this->roboCard1_3 ||
                  this->myCard2==this->roboCard1_3 || this->roboCard1 == this->roboCard1_3 ||
                  this->roboCard2 == this->roboCard1_3 || this->roboCard1_2 == this->roboCard1_3||
                  this->roboCard2_2 == this->roboCard1_3)
            {
             this->roboCard2_2 = ((rand() % 51) + 0); 
            }
            
            this->roboCard2_3 = ((rand() % 51) + 0); 
            while(this->card1 == this->roboCard2_3 || this->card2==this->roboCard2_3 || 
                  this->card3==this->roboCard2_3 || this->myCard1==this->roboCard2_3 ||
                  this->myCard2==this->roboCard2_3 || this->roboCard1 == this->roboCard2_3 ||
                  this->roboCard2 == this->roboCard2_3 || this->roboCard1_2 == this->roboCard2_3||
                  this->roboCard2_2 == this->roboCard2_3 || this->roboCard1_3 == this->roboCard2_3)
            {
             this->roboCard2_3 = ((rand() % 51) + 0); 
            }
            
            this-> roboSortedHand[5][2] = this->roboCard1_3;
            this-> roboSortedHand[6][2] = this->roboCard2_3;  
            
            
            
            break;
        }
        
    }
    
}
void TexasHoldem::secondFlip(int SIZE)
{
    switch(SIZE)
    {
        case 1:
        {
            this->card4 = ((rand() % 51) + 0);
            while(this->card4 == this->card1 || this->card4==this->card2 || 
                  this->card4==this->card3 || this->card4==this->myCard1 || 
                  this->card4 == this->myCard2 || this->card4==this->roboCard1 ||
                  this->card4 == this->roboCard2)

            {
             this->card4 = ((rand() % 51) + 0); 
            }
            std::cout << "\n**************************************************\n";
            std::cout << "\n\t4th Card on the Table:\n";
            std::cout << "\n**************************************************\n";
            std::cout << this->deck[this->card1] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card2] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card3] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card4] << "\n\t\n\t\n\t\n\t\n";
            this->sortedHand[3] = this->card4;
            this->roboSortedHand[3][0] = this->card4;
            break;
        }
        case 2:
        {
            this->card4 = ((rand() % 51) + 0);
            while(this->card4 == this->card1 || this->card4==this->card2 || 
                  this->card4==this->card3 || this->card4==this->myCard1 || 
                  this->card4 == this->myCard2 || this->card4==this->roboCard1 ||
                  this->card4 == this->roboCard2|| this->roboCard1_2 || 
                  this->card4 == this->roboCard2_2)

            {
             this->card4 = ((rand() % 51) + 0); 
            }
            std::cout << "\n**************************************************\n";
            std::cout << "\n\t4th Card on the Table:\n";
            std::cout << "\n**************************************************\n";
            std::cout << this->deck[this->card1] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card2] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card3] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card4] << "\n\t\n\t\n\t\n\t\n";
            this->sortedHand[3] = this->card4;
            this->roboSortedHand[3][0] = this->card4;
            this->roboSortedHand[3][1] = this->card4;
            break;
        }
        case 3: 
        {
            this->card4 = ((rand() % 51) + 0);
            while(this->card4 == this->card1 || this->card4==this->card2 || 
                  this->card4==this->card3 || this->card4==this->myCard1 || 
                  this->card4 == this->myCard2 || this->card4==this->roboCard1 ||
                  this->card4 == this->roboCard2|| this->roboCard1_2 || 
                  this->card4 == this->roboCard2_2 || this->card4 == this->roboCard1_3 ||
                  this->card4 == this->roboCard2_3)

            {
             this->card4 = ((rand() % 51) + 0); 
            }
            std::cout << "\n**************************************************\n";
            std::cout << "\n\t4th Card on the Table:\n";
            std::cout << "\n**************************************************\n";
            std::cout << this->deck[this->card1] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card2] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card3] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card4] << "\n\t\n\t\n\t\n\t\n";
            this->sortedHand[3] = this->card4;
            this->roboSortedHand[3][0] = this->card4;
            this->roboSortedHand[3][1] = this->card4;
            this->roboSortedHand[3][2] = this->card4;
            break;
        }
    }
}
void TexasHoldem::thirdFlip(int SIZE)
{
    switch(SIZE)
    {     
        case 1:
        {
            this->card5 = ((rand() % 51) + 0);
            while(this->card5 == this->card1 || this->card5==this->card2 || 
                    this->card5==this->card3 || this->card5==this->card4 ||
                    this->card5==this->myCard1 || this->card5 == myCard2 ||
                    this->card5==this->roboCard1 || this->card5==this->roboCard2)
            {
             this->card5 = ((rand() % 51) + 0); 
            }
            std::cout << "\n**************************************************\n";
            std::cout << "\n\t5th Card on the Table:\n";
            std::cout << "\n**************************************************\n";
            std::cout << this->deck[this->card1] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card2] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card3] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card4] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card5] << "\n\t\n\t\n\t\n\t\n";

            this->sortedHand[4] = this->card5;
            this->roboSortedHand[4][0] = this->card5;
            break;
        }
        case 2:
        {
            this->card5 = ((rand() % 51) + 0);
            while(this->card5 == this->card1 || this->card5==this->card2 || 
                    this->card5==this->card3 || this->card5==this->card4 ||
                    this->card5==this->myCard1 || this->card5 == myCard2 ||
                    this->card5==this->roboCard1 || this->card5==this->roboCard2||
                    this->card5==this->roboCard1_2 || this->card5 ==this->roboCard2_2)
            {
             this->card5 = ((rand() % 51) + 0); 
            }
            std::cout << "\n**************************************************\n";
            std::cout << "\n\t5th Card on the Table:\n";
            std::cout << "\n**************************************************\n";
            std::cout << this->deck[this->card1] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card2] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card3] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card4] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card5] << "\n\t\n\t\n\t\n\t\n";

            this->sortedHand[4] = this->card5;
            this->roboSortedHand[4][0] = this->card5;            
            this->roboSortedHand[4][1] = this->card5;
            break;
        }
        case 3:
        {
            this->card5 = ((rand() % 51) + 0);
            while(this->card5 == this->card1 || this->card5==this->card2 || 
                    this->card5==this->card3 || this->card5==this->card4 ||
                    this->card5==this->myCard1 || this->card5 == myCard2 ||
                    this->card5==this->roboCard1 || this->card5==this->roboCard2||
                    this->card5==this->roboCard1_2 || this->card5 ==this->roboCard2_2 ||
                    this->card5==this->roboCard1_3 || this->card5 ==this->roboCard2_3)
            {
             this->card5 = ((rand() % 51) + 0); 
            }
            std::cout << "\n**************************************************\n";
            std::cout << "\n\t5th Card on the Table:\n";
            std::cout << "\n**************************************************\n";
            std::cout << this->deck[this->card1] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card2] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card3] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card4] << "\n\t\n\t\n\t\n\t\n";
            std::cout << this->deck[this->card5] << "\n\t\n\t\n\t\n\t\n";

            this->sortedHand[4] = this->card5;
            this->roboSortedHand[4][0] = this->card5;            
            this->roboSortedHand[4][1] = this->card5;            
            this->roboSortedHand[4][2] = this->card5;
            break;
        }
    
    }
}
void TexasHoldem::showMyHand()
{
    std::cout << "\n**************************************************\n";
    std::cout << "\tMy Hand:\t\n";
    std::cout << "**************************************************\n";
    std::cout << this->deck[this->myCard1] << "\n\t\n\t\n\t\n\t\n";
    std::cout << this->deck[this->myCard2] << "\n\t\n\t\n\t\n\t\n";
    std::cout << "**************************************************\n";
}
void TexasHoldem::showRoboHand()
{
    std::cout << "\n**************************************************\n";
    std::cout << "\tOpponent's Hand:\t\n";
    std::cout << "**************************************************\n";
    std::cout << this->deck[this->roboCard1] << "\n\t\n\t\n\t\n\t\n";
    std::cout << this->deck[this->roboCard2] << "\n\t\n\t\n\t\n\t\n";
    std::cout << "**************************************************\n";
}
void TexasHoldem::showBest()
{
    std::cout << "\n**************************************************\n";
    std::cout << "\n\tCards Highest to Lowest:\n";
    std::cout << "\n**************************************************\n";
    for(int i=0;i<7;i++)
        std::cout << this->deck[this->sortedHand[i]] << "\n\t\n\t\n\t\n\t\n";
    
}
void TexasHoldem::showRoboBest(int SIZE)
{
    switch(SIZE)
    {
        case 1:
        {
            std::cout << "\n**************************************************\n";
            std::cout << "\n\tCards Highest to Lowest:\n";
            std::cout << "\n**************************************************\n";
            for(int i=0;i<7;i++)
                std::cout << this->deck[this->roboSortedHand[i][0]] << "\n\t\n\t\n\t\n\t\n";
            break;
        }
        case 2:
        {
            std::cout << "\n**************************************************\n";
            std::cout << "\n\tCards Highest to Lowest for Opponent #1:\n";
            std::cout << "\n**************************************************\n";
            for(int i=0;i<7;i++)
                std::cout << this->deck[this->roboSortedHand[i][0]] << "\n\t\n\t\n\t\n\t\n";  
            std::cout << "\n**************************************************\n";
            std::cout << "\n\tCards Highest to Lowest for Opponent #2:\n";
            std::cout << "\n**************************************************\n";
            for(int i=0;i<7;i++)
                std::cout << this->deck[this->roboSortedHand[i][1]] << "\n\t\n\t\n\t\n\t\n";            
            
            break;
        }
        case 3:
        {
            std::cout << "\n**************************************************\n";
            std::cout << "\n\tCards Highest to Lowest for Opponent #1:\n";
            std::cout << "\n**************************************************\n";
            for(int i=0;i<7;i++)
                std::cout << this->deck[this->roboSortedHand[i][0]] << "\n\t\n\t\n\t\n\t\n";  
            std::cout << "\n**************************************************\n";
            std::cout << "\n\tCards Highest to Lowest for Opponent #2:\n";
            std::cout << "\n**************************************************\n";
            for(int i=0;i<7;i++)
                std::cout << this->deck[this->roboSortedHand[i][1]] << "\n\t\n\t\n\t\n\t\n";            
            std::cout << "\n**************************************************\n";
            std::cout << "\n\tCards Highest to Lowest for Opponent #3:\n";
            std::cout << "\n**************************************************\n";
            for(int i=0;i<7;i++)
                std::cout << this->deck[this->roboSortedHand[i][2]] << "\n\t\n\t\n\t\n\t\n";  
            break;
        }
    }
    
}
void TexasHoldem::findCardNumber()
{
 int temp;

    for(int i =0; i<7;i++)
    {
        temp = this->sortedHand[i];
        
        switch(temp)
        {
            case 0:
            {
                this->cardNumber[i] = 1;
                break;
            }
            case 1:
            {
                this->cardNumber[i] = 1;
                break;
            }
            case 2:
            {
                this->cardNumber[i] = 1;
                break;
            }
            case 3:
            {
                this->cardNumber[i] = 1;
                break;
            }
            case 4:
            {
                this->cardNumber[i] = 2;
                break;
            }
            case 5:
            {
                this->cardNumber[i] = 2;
                break;
            }
            case 6:
            {
                this->cardNumber[i] = 2;
                break;
            }
            case 7:
            {
                this->cardNumber[i] = 2;
                break;
            }
            case 8:
            {
                this->cardNumber[i] = 3;
                break;
            }
            case 9:
            {
                this->cardNumber[i] = 3;
                break;
            }
            case 10:
            {
                this->cardNumber[i] = 3;
                break;
            }
            case 11:
            {
                this->cardNumber[i] = 3;
                break;
            }            
            case 12:
            {
                this->cardNumber[i] = 4;
                break;
            }
            case 13:
            {
                this->cardNumber[i] = 4;
                break;
            }
            case 14:
            {
                this->cardNumber[i] = 4;
                break;
            }
            case 15:
            {
                this->cardNumber[i] = 4;
                break;
            }            
            case 16:
            {
                this->cardNumber[i] = 5;
                break;
            }
            case 17:
            {
                this->cardNumber[i] = 5;
                break;
            }
            case 18:
            {
                this->cardNumber[i] = 5;
                break;
            }
            case 19:
            {
                this->cardNumber[i] = 5;
                break;
            }            
            case 20:
            {
                this->cardNumber[i] = 6;
                break;
            }
            case 21:
            {
                this->cardNumber[i] = 6;
                break;
            }
            case 22:
            {
                this->cardNumber[i] = 6;
                break;
            }
            case 23:
            {
                this->cardNumber[i] = 6;
                break;
            }            
            case 24:
            {
                this->cardNumber[i] = 7;
                break;
            }
            case 25:
            {
                this->cardNumber[i] = 7;
                break;
            }
            case 26:
            {
                this->cardNumber[i] = 7;
                break;
            }
            case 27:
            {
                this->cardNumber[i] = 7;
                break;
            }
            case 28:
            {
                this->cardNumber[i] = 8;
                break;
            }
            case 29:
            {
                this->cardNumber[i] = 8;
                break;
            }
            case 30:
            {
                this->cardNumber[i] = 8;
                break;
            }
            case 31:
            {
                this->cardNumber[i] = 8;
                break;
            }
            case 32:
            {
                this->cardNumber[i] = 9;
                break;
            }
            case 33:
            {
                this->cardNumber[i] = 9;
                break;
            }
            case 34:
            {
                this->cardNumber[i] = 9;
                break;
            }
            case 35:
            {
                this->cardNumber[i] = 9;
                break;
            }            
            case 36:
            {
                this->cardNumber[i] = 10;
                break;
            }
            case 37:
            {
                this->cardNumber[i] = 10;
                break;
            }
            case 38:
            {
                this->cardNumber[i] = 10;
                break;
            }
            case 39:
            {
                this->cardNumber[i] = 10;
                break;
            }
            case 40:
            {
                this->cardNumber[i] = 11;
                break;
            }
            case 41:
            {
                this->cardNumber[i] = 11;
                break;
            }
            case 42:
            {
                this->cardNumber[i] = 11;
                break;
            }
            case 43:
            {
                this->cardNumber[i] = 11;
                break;
            }
            case 44:
            {
                this->cardNumber[i] = 12;
                break;
            }
            case 45:
            {
                this->cardNumber[i] = 12;
                break;
            }
            case 46:
            {
                this->cardNumber[i] = 12;
                break;
            }
            case 47:
            {
                this->cardNumber[i] = 12;
                break;
            }
            case 48:
            {
                this->cardNumber[i] = 13;
                break;
            }
            case 49:
            {
                this->cardNumber[i] = 13;
                break;
            }
            case 50:
            {
                this->cardNumber[i] = 13;
                break;
            }
            case 51:
            {
                this->cardNumber[i] = 13;
                break;
            }

            
        }
        
    }
    
}
void TexasHoldem::findRoboCardNumber(int OPPONENT)
{
 int temp;

    for(int i =0; i<7;i++)
    {
        temp = this->roboSortedHand[i][OPPONENT];
        
        switch(temp)
        {
            case 0:
            {
                this->roboCardNumber[i][OPPONENT] = 1;
                break;
            }
            case 1:
            {
                this->roboCardNumber[i][OPPONENT] = 1;
                break;
            }
            case 2:
            {
                this->roboCardNumber[i][OPPONENT] = 1;
                break;
            }
            case 3:
            {
                this->roboCardNumber[i][OPPONENT] = 1;
                break;
            }
            case 4:
            {
                this->roboCardNumber[i][OPPONENT] = 2;
                break;
            }
            case 5:
            {
                this->roboCardNumber[i][OPPONENT] = 2;
                break;
            }
            case 6:
            {
                this->roboCardNumber[i][OPPONENT] = 2;
                break;
            }
            case 7:
            {
                this->roboCardNumber[i][OPPONENT] = 2;
                break;
            }
            case 8:
            {
                this->roboCardNumber[i][OPPONENT] = 3;
                break;
            }
            case 9:
            {
                this->roboCardNumber[i][OPPONENT] = 3;
                break;
            }
            case 10:
            {
                this->roboCardNumber[i][OPPONENT] = 3;
                break;
            }
            case 11:
            {
                this->roboCardNumber[i][OPPONENT] = 3;
                break;
            }            
            case 12:
            {
                this->roboCardNumber[i][OPPONENT] = 4;
                break;
            }
            case 13:
            {
                this->roboCardNumber[i][OPPONENT] = 4;
                break;
            }
            case 14:
            {
                this->roboCardNumber[i][OPPONENT] = 4;
                break;
            }
            case 15:
            {
                this->roboCardNumber[i][OPPONENT] = 4;
                break;
            }            
            case 16:
            {
                this->roboCardNumber[i][OPPONENT] = 5;
                break;
            }
            case 17:
            {
                this->roboCardNumber[i][OPPONENT] = 5;
                break;
            }
            case 18:
            {
                this->roboCardNumber[i][OPPONENT] = 5;
                break;
            }
            case 19:
            {
                this->roboCardNumber[i][OPPONENT] = 5;
                break;
            }            
            case 20:
            {
                this->roboCardNumber[i][OPPONENT] = 6;
                break;
            }
            case 21:
            {
                this->roboCardNumber[i][OPPONENT] = 6;
                break;
            }
            case 22:
            {
                this->roboCardNumber[i][OPPONENT] = 6;
                break;
            }
            case 23:
            {
                this->roboCardNumber[i][OPPONENT] = 6;
                break;
            }            
            case 24:
            {
                this->roboCardNumber[i][OPPONENT] = 7;
                break;
            }
            case 25:
            {
                this->roboCardNumber[i][OPPONENT] = 7;
                break;
            }
            case 26:
            {
                this->roboCardNumber[i][OPPONENT] = 7;
                break;
            }
            case 27:
            {
                this->roboCardNumber[i][OPPONENT] = 7;
                break;
            }
            case 28:
            {
                this->roboCardNumber[i][OPPONENT] = 8;
                break;
            }
            case 29:
            {
                this->roboCardNumber[i][OPPONENT] = 8;
                break;
            }
            case 30:
            {
                this->roboCardNumber[i][OPPONENT] = 8;
                break;
            }
            case 31:
            {
                this->roboCardNumber[i][OPPONENT] = 8;
                break;
            }
            case 32:
            {
                this->roboCardNumber[i][OPPONENT] = 9;
                break;
            }
            case 33:
            {
                this->roboCardNumber[i][OPPONENT] = 9;
                break;
            }
            case 34:
            {
                this->roboCardNumber[i][OPPONENT] = 9;
                break;
            }
            case 35:
            {
                this->roboCardNumber[i][OPPONENT] = 9;
                break;
            }            
            case 36:
            {
                this->roboCardNumber[i][OPPONENT] = 10;
                break;
            }
            case 37:
            {
                this->roboCardNumber[i][OPPONENT] = 10;
                break;
            }
            case 38:
            {
                this->roboCardNumber[i][OPPONENT] = 10;
                break;
            }
            case 39:
            {
                this->roboCardNumber[i][OPPONENT] = 10;
                break;
            }
            case 40:
            {
                this->roboCardNumber[i][OPPONENT] = 11;
                break;
            }
            case 41:
            {
                this->roboCardNumber[i][OPPONENT] = 11;
                break;
            }
            case 42:
            {
                this->roboCardNumber[i][OPPONENT] = 11;
                break;
            }
            case 43:
            {
                this->roboCardNumber[i][OPPONENT] = 11;
                break;
            }
            case 44:
            {
                this->roboCardNumber[i][OPPONENT] = 12;
                break;
            }
            case 45:
            {
                this->roboCardNumber[i][OPPONENT] = 12;
                break;
            }
            case 46:
            {
                this->roboCardNumber[i][OPPONENT] = 12;
                break;
            }
            case 47:
            {
                this->roboCardNumber[i][OPPONENT] = 12;
                break;
            }
            case 48:
            {
                this->roboCardNumber[i][OPPONENT] = 13;
                break;
            }
            case 49:
            {
                this->roboCardNumber[i][OPPONENT] = 13;
                break;
            }
            case 50:
            {
                this->roboCardNumber[i][OPPONENT] = 13;
                break;
            }
            case 51:
            {
                this->roboCardNumber[i][OPPONENT] = 13;
                break;
            }

            
        }
        
    }
    
}
void TexasHoldem::showCardNumber()
{
    for(int i=0;i<7;i++)
        std::cout << this->cardNumber[i] << std::endl;
}
void TexasHoldem::showRoboCardNumber(int SIZE)
{
    switch(SIZE)
    {
        case 1:
        {
            for(int i=0;i<7;i++)
                std::cout << this->roboCardNumber[i][0] << std::endl; 
            break;
        }
        case 2:
        {
            for(int i=0;i<7;i++)
                std::cout << this->roboCardNumber[i][0] << std::endl;
            for(int i=0;i<7;i++)
                std::cout << this->roboCardNumber[i][1] << std::endl;
            break;
        }
        case 3:
        {
            for(int i=0;i<7;i++)
                std::cout << this->roboCardNumber[i][0] << std::endl;
            for(int i=0;i<7;i++)
                std::cout << this->roboCardNumber[i][1] << std::endl;
            for(int i=0;i<7;i++)
                std::cout << this->roboCardNumber[i][2] << std::endl;
            break;
        }
    }

}
void TexasHoldem::whatSuit()
{
    int temp;
    
    for(int i =0; i<7;i++)
    {
        temp = this->sortedHand[i];
        
        switch(temp)
        {
            case 0:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 1:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 2:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 3:
            {
                this->suit[i] = "Clubs";
                break;
            }
            case 4:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 5:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 6:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 7:
            {
                this->suit[i] = "Clubs";
                break;
            }
            case 8:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 9:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 10:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 11:
            {
                this->suit[i] = "Clubs";
                break;
            }            
            case 12:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 13:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 14:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 15:
            {
                this->suit[i] = "Clubs";
                break;
            }            
            case 16:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 17:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 18:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 19:
            {
                this->suit[i] = "Clubs";
                break;
            }            
            case 20:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 21:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 22:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 23:
            {
                this->suit[i] = "Clubs";
                break;
            }            
            case 24:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 25:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 26:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 27:
            {
                this->suit[i] = "Clubs";
                break;
            }
            case 28:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 29:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 30:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 31:
            {
                this->suit[i] = "Clubs";
                break;
            }
            case 32:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 33:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 34:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 35:
            {
                this->suit[i] = "Clubs";
                break;
            }            
            case 36:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 37:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 38:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 39:
            {
                this->suit[i] = "Clubs";
                break;
            }
            case 40:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 41:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 42:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 43:
            {
                this->suit[i] = "Clubs";
                break;
            }
            case 44:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 45:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 46:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 47:
            {
                this->suit[i] = "Clubs";
                break;
            }
            case 48:
            {
                this->suit[i] = "Hearts";
                break;
            }
            case 49:
            {
                this->suit[i] = "Spades";
                break;
            }
            case 50:
            {
                this->suit[i] = "Diamonds";
                break;
            }
            case 51:
            {
                this->suit[i] = "Clubs";
                break;
            }

            
        }
        
    }
    
}
void TexasHoldem::whatRoboSuit(int OPPONENT)
{
    int temp;
    
    for(int i =0; i<7;i++)
    {
        temp = this->roboSortedHand[i][OPPONENT];
        
        switch(temp)
        {
            case 0:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 1:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 2:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 3:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }
            case 4:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 5:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 6:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 7:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }
            case 8:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 9:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 10:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 11:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }            
            case 12:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 13:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 14:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 15:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }            
            case 16:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 17:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 18:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 19:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }            
            case 20:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 21:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 22:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 23:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }            
            case 24:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 25:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 26:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 27:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }
            case 28:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 29:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 30:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 31:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }
            case 32:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 33:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 34:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 35:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }            
            case 36:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 37:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 38:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 39:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }
            case 40:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 41:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 42:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 43:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }
            case 44:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 45:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 46:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 47:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }
            case 48:
            {
                this->roboSuit[i][OPPONENT] = "Hearts";
                break;
            }
            case 49:
            {
                this->roboSuit[i][OPPONENT] = "Spades";
                break;
            }
            case 50:
            {
                this->roboSuit[i][OPPONENT] = "Diamonds";
                break;
            }
            case 51:
            {
                this->roboSuit[i][OPPONENT] = "Clubs";
                break;
            }

            
        }
        
    }
    
}
void TexasHoldem::showSuit()
{
    for(int i=0;i<7;i++)
        std::cout << this->suit[i] << std::endl;
}
void TexasHoldem::showRoboSuit(int OPPONENT)
{
    switch(OPPONENT)
    {
        case 1:
        {
            std::cout<<"Player #1 Suit: " << std::endl; 
            for(int i=0;i<7;i++)
                std::cout << this->roboSuit[i][0] << std::endl;
            break;
        }
        case 2:
        {
           std::cout<<"Player #1 Suit: " << std::endl;  
           for(int i=0;i<7;i++)
                std::cout << this->roboSuit[i][0] << std::endl;
           std::cout<<"Player #2 Suit: " << std::endl; 
           for(int i=0;i<7;i++)
                std::cout << this->roboSuit[i][1] << std::endl;
            break;
        }
        case 3:
        {
            std::cout<<"Player #1 Suit: " << std::endl; 
            for(int i=0;i<7;i++)
                std::cout << this->roboSuit[i][0] << std::endl;
            std::cout<<"Player #2 Suit: " << std::endl; 
            for(int i=0;i<7;i++)
                std::cout << this->roboSuit[i][1] << std::endl;
            std::cout<<"Player #3 Suit: " << std::endl; 
            for(int i=0;i<7;i++)
                std::cout << this->roboSuit[i][2] << std::endl;
            break;
        }
    }
}
void TexasHoldem::findDiff()
{
    for(int i=0;i<6;i++)
        this->diff[i] = (this->cardNumber[i] - this->cardNumber[i+1]);
}
void TexasHoldem::findRoboDiff(int SIZE)
{
    switch(SIZE)
    {
        case 1:
        {
            for(int i=0;i<6;i++)
                this->roboDiff[i][0] = (this->roboCardNumber[i][0] - this->roboCardNumber[i+1][0]);
            break;
        }
        case 2:
        {
            for(int i=0;i<6;i++)
                this->roboDiff[i][0] = (this->roboCardNumber[i][0] - this->roboCardNumber[i+1][0]);
            for(int i=0;i<6;i++)
                this->roboDiff[i][1] = (this->roboCardNumber[i][1] - this->roboCardNumber[i+1][1]);
            break;                        
        }
        case 3:
        {
            for(int i=0;i<6;i++)
                this->roboDiff[i][0] = (this->roboCardNumber[i][0] - this->roboCardNumber[i+1][0]);
            for(int i=0;i<6;i++)
                this->roboDiff[i][1] = (this->roboCardNumber[i][1] - this->roboCardNumber[i+1][1]);
            for(int i=0;i<6;i++)
                this->roboDiff[i][2] = (this->roboCardNumber[i][2] - this->roboCardNumber[i+1][2]);
            break;
            
            
        }
}
}
void TexasHoldem::showDiff()
{
    for(int i=0;i<6;i++)
        std::cout << this->diff[i] << std::endl;
}
void TexasHoldem::showRoboDiff()
{
    switch(SIZE)
    {
        case 1:
        {
            for(int i=0;i<6;i++)
                std::cout << this->roboDiff[i][0] << std::endl;
        break;
        }
        case 2:
        {
            for(int i=0;i<6;i++)
                std::cout << this->roboDiff[i][0] << std::endl;
            for(int i=0;i<6;i++)
                std::cout << this->roboDiff[i][1] << std::endl;
       
            break;
        }
        case 3:
        {
            for(int i=0;i<6;i++)
                std::cout << this->roboDiff[i][0] << std::endl;
            for(int i=0;i<6;i++)
                std::cout << this->roboDiff[i][1] << std::endl;
            for(int i=0;i<6;i++)
                std::cout << this->roboDiff[i][2] << std::endl;         
            break;
        }
    }
}
void TexasHoldem::suitCount()
{
    this->heartsCount =0;
    this->diamondsCount =0;
    this->clubsCount = 0;
    this->spadesCount =0;
    
    for(int i=0;i<7;i++)
    {
        if(this->suit[i] == "Hearts")
            this->heartsCount = this->heartsCount + 1;
        if(this->suit[i]== "Diamonds")
            this->diamondsCount = this->diamondsCount + 1;
        if(this->suit[i] == "Clubs")
            this->clubsCount = this->clubsCount + 1;
        if(this->suit[i] == "Spades")
            this->spadesCount = this->spadesCount + 1;
    }
    
    std::cout << "Hearts: " << this->heartsCount << std::endl;
    std::cout << "Diamonds: " << this->diamondsCount << std::endl;
    std::cout << "Clubs: " << this->clubsCount << std::endl;
    std::cout << "Spades: " << this->spadesCount << std::endl;
}
void TexasHoldem::roboSuitCount(int PLAYERS)
{
    switch(PLAYERS)
    {
        case 1:
        {
            this->roboHeartsCount1 =0;
            this->roboDiamondsCount1 =0;
            this->roboClubsCount1 = 0;
            this->roboSpadesCount1 =0;

            for(int i=0;i<7;i++)
            {
                if(this->roboSuit[i][0] == "Hearts")
                    this->roboHeartsCount1 = this->roboHeartsCount1 + 1;
                if(this->roboSuit[i][0]== "Diamonds")
                    this->roboDiamondsCount1 = this->roboDiamondsCount1 + 1;
                if(this->roboSuit[i][0] == "Clubs")
                    this->roboClubsCount1 = this->roboClubsCount1 + 1;
                if(this->roboSuit[i][0] == "Spades")
                    this->roboSpadesCount1 = this->roboSpadesCount1 + 1;
            }

            std::cout << "Player #1 Hearts  : " << this->roboHeartsCount1 << std::endl;
            std::cout << "Player #1 Diamonds: " << this->roboDiamondsCount1 << std::endl;
            std::cout << "Player #1 Clubs   : " << this->roboClubsCount1 << std::endl;
            std::cout << "Player #1 Spades  : " << this->roboSpadesCount1 << std::endl;
            break;
        }
        case 2:
        {
            this->roboHeartsCount1 =0;
            this->roboDiamondsCount1 =0;
            this->roboClubsCount1 = 0;
            this->roboSpadesCount1 =0;
            
            this->roboHeartsCount2 =0;
            this->roboDiamondsCount2 =0;
            this->roboClubsCount2 = 0;
            this->roboSpadesCount2 =0;
            
            for(int i=0;i<7;i++)
            {
                if(this->roboSuit[i][0] == "Hearts")
                    this->roboHeartsCount1 = this->roboHeartsCount1 + 1;
                if(this->roboSuit[i][0]== "Diamonds")
                    this->roboDiamondsCount1 = this->roboDiamondsCount1 + 1;
                if(this->roboSuit[i][0] == "Clubs")
                    this->roboClubsCount1 = this->roboClubsCount1 + 1;
                if(this->roboSuit[i][0] == "Spades")
                    this->roboSpadesCount1 = this->roboSpadesCount1 + 1;
            }
            for(int i=0;i<7;i++)
            {
                if(this->roboSuit[i][1] == "Hearts")
                    this->roboHeartsCount2 = this->roboHeartsCount2 + 1;
                if(this->roboSuit[i][1]== "Diamonds")
                    this->roboDiamondsCount2 = this->roboDiamondsCount2 + 1;
                if(this->roboSuit[i][1] == "Clubs")
                    this->roboClubsCount2 = this->roboClubsCount2 + 1;
                if(this->roboSuit[i][1] == "Spades")
                    this->roboSpadesCount2 = this->roboSpadesCount2 + 1;
            }
            std::cout << "Player #1 Hearts  : " << this->roboHeartsCount1 << std::endl;
            std::cout << "Player #1 Diamonds: " << this->roboDiamondsCount1 << std::endl;
            std::cout << "Player #1 Clubs   : " << this->roboClubsCount1 << std::endl;
            std::cout << "Player #1 Spades  : " << this->roboSpadesCount1 << std::endl;
            std::cout << "Player #2 Hearts  : " << this->roboHeartsCount2 << std::endl;
            std::cout << "Player #2 Diamonds: " << this->roboDiamondsCount2 << std::endl;
            std::cout << "Player #2 Clubs   : " << this->roboClubsCount2 << std::endl;
            std::cout << "Player #2 Spades  : " << this->roboSpadesCount2 << std::endl;
            break;
        }
        case 3:
        {
            this->roboHeartsCount1 =0;
            this->roboDiamondsCount1 =0;
            this->roboClubsCount1 = 0;
            this->roboSpadesCount1 =0;
            
            this->roboHeartsCount2 =0;
            this->roboDiamondsCount2 =0;
            this->roboClubsCount2 = 0;
            this->roboSpadesCount2 =0;
            
            this->roboHeartsCount3 =0;
            this->roboDiamondsCount3 =0;
            this->roboClubsCount3 = 0;
            this->roboSpadesCount3 =0;
            
            for(int i=0;i<7;i++)
            {
                if(this->roboSuit[i][0] == "Hearts")
                    this->roboHeartsCount1 = this->roboHeartsCount1 + 1;
                if(this->roboSuit[i][0]== "Diamonds")
                    this->roboDiamondsCount1 = this->roboDiamondsCount1 + 1;
                if(this->roboSuit[i][0] == "Clubs")
                    this->roboClubsCount1 = this->roboClubsCount1 + 1;
                if(this->roboSuit[i][0] == "Spades")
                    this->roboSpadesCount1 = this->roboSpadesCount1 + 1;
            }
            for(int i=0;i<7;i++)
            {
                if(this->roboSuit[i][1] == "Hearts")
                    this->roboHeartsCount2 = this->roboHeartsCount2 + 1;
                if(this->roboSuit[i][1]== "Diamonds")
                    this->roboDiamondsCount2 = this->roboDiamondsCount2 + 1;
                if(this->roboSuit[i][1] == "Clubs")
                    this->roboClubsCount2 = this->roboClubsCount2 + 1;
                if(this->roboSuit[i][1] == "Spades")
                    this->roboSpadesCount2 = this->roboSpadesCount2 + 1;
            }
            for(int i=0;i<7;i++)
            {
                if(this->roboSuit[i][2] == "Hearts")
                    this->roboHeartsCount3 = this->roboHeartsCount3 + 1;
                if(this->roboSuit[i][2]== "Diamonds")
                    this->roboDiamondsCount3 = this->roboDiamondsCount3 + 1;
                if(this->roboSuit[i][2] == "Clubs")
                    this->roboClubsCount3 = this->roboClubsCount3 + 1;
                if(this->roboSuit[i][2] == "Spades")
                    this->roboSpadesCount3 = this->roboSpadesCount3 + 1;
            }
            std::cout << "Player #1 Hearts  : " << this->roboHeartsCount1 << std::endl;
            std::cout << "Player #1 Diamonds: " << this->roboDiamondsCount1 << std::endl;
            std::cout << "Player #1 Clubs   : " << this->roboClubsCount1 << std::endl;
            std::cout << "Player #1 Spades  : " << this->roboSpadesCount1 << std::endl;
            std::cout << "Player #2 Hearts  : " << this->roboHeartsCount2 << std::endl;
            std::cout << "Player #2 Diamonds: " << this->roboDiamondsCount2 << std::endl;
            std::cout << "Player #2 Clubs   : " << this->roboClubsCount2 << std::endl;
            std::cout << "Player #2 Spades  : " << this->roboSpadesCount2 << std::endl;
            std::cout << "Player #3 Hearts  : " << this->roboHeartsCount3 << std::endl;
            std::cout << "Player #3 Diamonds: " << this->roboDiamondsCount3 << std::endl;
            std::cout << "Player #3 Clubs   : " << this->roboClubsCount3 << std::endl;
            std::cout << "Player #3 Spades  : " << this->roboSpadesCount3 << std::endl;           
            break;            
        }
    }
}
void TexasHoldem::bestHand()
{
    this->myPoints=0;
    // ************************************************************************
    // ************************************************************************
    //                      ROYAL FLUSH
    // ************************************************************************
    // ************************************************************************
    // ROYAL FLUSH: 10 through ACE -- HEARTS
    if(this->heartsCount == 5 && this->cardNumber[0] == 13 &&
       this->cardNumber[1] == 12 && this->cardNumber[2] == 11 &&
       this->cardNumber[3] == 10 && this->cardNumber[7] == 1)
    {
        std::cout << "ROYAL FLUSH of HEARTS" << std::endl;
        this->myPoints=10;
    }
    // ROYAL FLUSH: 10 through ACE -- CLUBS
    else if(this->clubsCount == 5 && this->cardNumber[0] == 13 &&
       this->cardNumber[1] == 12 && this->cardNumber[2] == 11 &&
       this->cardNumber[3] == 10 && this->cardNumber[7] == 1)
    {
        std::cout << "ROYAL FLUSH of CLUBS" << std::endl;
        this->myPoints=10;
    }    
    // ROYAL FLUSH: 10 through ACE -- SPADES
    else if(this->spadesCount == 5 && this->cardNumber[0] == 13 &&
       this->cardNumber[1] == 12 && this->cardNumber[2] == 11 &&
       this->cardNumber[3] == 10 && this->cardNumber[7] == 1)
    {
        std::cout << "ROYAL FLUSH of SPADES" << std::endl;
        this->myPoints=10;
    }     
    // ROYAL FLUSH: 10 through ACE -- DIAMONDS
    else if(this->diamondsCount == 5 && this->cardNumber[0] == 13 &&
       this->cardNumber[1] == 12 && this->cardNumber[2] == 11 &&
       this->cardNumber[3] == 10 && this->cardNumber[7] == 1)
    {
        std::cout << "ROYAL FLUSH of DIAMONDS" << std::endl;
        this->myPoints=10;
    }       
    // ************************************************************************
    // ************************************************************************
    //                      STRAIGHT FLUSH
    // ************************************************************************
    // ************************************************************************    
    // STRAIGHT FLUSH: ANY SEQUENCE OF FIVE CARDS + SAME SUITS 
    else if(this->heartsCount == 5 && this->diff[0] == 1 &&
       this->diff[1] == 1 && this->diff[2] == 1 &&
       this->diff[3] == 1 && this->diff[4] == 1)
    {
        std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
        this->myPoints=9;
    }
    
    else if(this->heartsCount == 5 && this->diff[1] == 1 &&
       this->diff[2] == 1 && this->diff[3] == 1 &&
       this->diff[4] == 1 && this->diff[5] == 1)
    {
        std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
        this->myPoints=9;
    }
    else if(this->clubsCount == 5 && this->diff[0] == 1 &&
       this->diff[1] == 1 && this->diff[2] == 1 &&
       this->diff[3] == 1 && this->diff[4] == 1)
    {
        std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
        this->myPoints=9;
    }
    
    else if(this->clubsCount == 5 && this->diff[1] == 1 &&
       this->diff[2] == 1 && this->diff[3] == 1 &&
       this->diff[4] == 1 && this->diff[5] == 1)
    {
        std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
        this->myPoints=9;
    }
    else if(this->spadesCount == 5 && this->diff[0] == 1 &&
       this->diff[1] == 1 && this->diff[2] == 1 &&
       this->diff[3] == 1 && this->diff[4] == 1)
    {
        std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
        this->myPoints=9;
    }
    
    else if(this->spadesCount == 5 && this->diff[1] == 1 &&
       this->diff[2] == 1 && this->diff[3] == 1 &&
       this->diff[4] == 1 && this->diff[5] == 1)
    {
        std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
        this->myPoints=9;
    }
    else if(this->diamondsCount == 5 && this->diff[0] == 1 &&
       this->diff[1] == 1 && this->diff[2] == 1 &&
       this->diff[3] == 1 && this->diff[4] == 1)
    {
        std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
        this->myPoints=9;
    }
    
    else if(this->diamondsCount == 5 && this->diff[1] == 1 &&
       this->diff[2] == 1 && this->diff[3] == 1 &&
       this->diff[4] == 1 && this->diff[5] == 1)
    {
        std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
        this->myPoints=9;
    }       
    // ************************************************************************
    // ************************************************************************
    //                      FOUR OF A KIND
    // ************************************************************************
    // ************************************************************************    
    else if(this->diff[0] == 0 && this->diff[1] ==0 && 
            this->diff[2] ==0 && this->diff[3] == 0)
    {
        std::cout << "FOUR OF A KIND!" << std::endl;
        this->myPoints=8;
    }
    else if(this->diff[1] == 0 && this->diff[2] ==0 && 
            this->diff[3] ==0 && this->diff[4] == 0)
    {
        std::cout << "FOUR OF A KIND!" << std::endl;
        this->myPoints=8;
    }
    else if(this->diff[2] == 0 && this->diff[3] ==0 && 
            this->diff[4] ==0 && this->diff[5] == 0)
    {
        std::cout << "FOUR OF A KIND!" << std::endl;
        this->myPoints=8;
    }
    // ************************************************************************
    // ************************************************************************
    //                      FULL HOUSE
    // ************************************************************************
    // ************************************************************************  
     else if(this->diff[0] == 0 && this->diff[2] ==0 && this->diff[3] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[0] == 0 && this->diff[3] ==0 && this->diff[4] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[0] == 0 && this->diff[4] ==0 && this->diff[5] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[1] == 0 && this->diff[3] ==0 && this->diff[4] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[1] == 0 && this->diff[4] ==0 && this->diff[5] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[2] == 0 && this->diff[4] ==0 && this->diff[5] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[3] == 0 && this->diff[0] ==0 && this->diff[1] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[4] == 0 && this->diff[0] ==0 && this->diff[1] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[4] == 0 && this->diff[1] ==0 && this->diff[2] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[5] == 0 && this->diff[0] ==0 && this->diff[1] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[5] == 0 && this->diff[1] ==0 && this->diff[2] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    else if(this->diff[5] == 0 && this->diff[2] ==0 && this->diff[3] ==0)
    {
        std::cout << "FULL HOUSE!" << std::endl;
        this->myPoints=7;
    }
    // ************************************************************************
    // ************************************************************************
    //                      FLUSH
    // ************************************************************************
    // ************************************************************************  
    else if(this->heartsCount == 5)
    {
        std::cout << "FLUSH OF HEARTS" <<std::endl;
        this->myPoints=6;
    }
    else if(this->spadesCount == 5)
    {
        std::cout << "FLUSH OF SPADES" << std::endl;
        this->myPoints=6;
    }
    else if(this->diamondsCount == 5)
    {
        std::cout << "FLUSH OF DIAMONDS" << std::endl;
        this->myPoints=6;
    }
    else if(this->clubsCount == 5)
    {
        std::cout << "FLUSH OF CLUBS" << std::endl;
        this->myPoints=6;
    }
   // ************************************************************************
   // ************************************************************************
   //                      STRAIGHT
   // ************************************************************************
   // ************************************************************************   
    else if(this->diff[0] == 1 && this->diff[1] == 1 && this->diff[2] == 1 &&
            this->diff[3] == 1 && this->diff[4] == 1)
    {
        std::cout << "STRAIGHT" << std::endl;
        this->myPoints=5;
    }
    else if(this->diff[1] == 1 && this->diff[2] == 1 && this->diff[3] == 1 &&
            this->diff[4] == 1 && this->diff[5] == 1)
    {
        std::cout << "STRAIGHT" << std::endl;
        this->myPoints=5;
    }
   // ************************************************************************
   // ************************************************************************
   //                      3 of a KIND
   // ************************************************************************
   // ************************************************************************
    else if(this->diff[0] == 0 && this->diff[1] == 0)
    {
        std::cout << "THREE OF A KIND" << std::endl;
        this->myPoints=4;
    }
    else if(this->diff[1] == 0 && this->diff[2] == 0)
    {
        std::cout << "THREE OF A KIND" << std::endl;
        this->myPoints=4;
    }
    else if(this->diff[2] == 0 && this->diff[3] == 0)
    {
        std::cout << "THREE OF A KIND" << std::endl;
        this->myPoints=4;
    } 
    else if(this->diff[3] == 0 && this->diff[4] == 0)
    {
        std::cout << "THREE OF A KIND" << std::endl;
        this->myPoints=4;
    } 
    else if(this->diff[4] == 0 && this->diff[5] == 0)
    {
        std::cout << "THREE OF A KIND" << std::endl;
        this->myPoints=4;
    } 
   // ************************************************************************
   // ************************************************************************
   //                      2 PAIRS
   // ************************************************************************
   // ************************************************************************ 
    else if(this->diff[0] == 0 && this->diff[2]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[0] == 0 && this->diff[3]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[0] == 0 && this->diff[4]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[0] == 0 && this->diff[5]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[1] == 0 && this->diff[3]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[1] == 0 && this->diff[4]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[1] == 0 && this->diff[5]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[2] == 0 && this->diff[0]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[2] == 0 && this->diff[4]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[2] == 0 && this->diff[5]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[3] == 0 && this->diff[0]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[3] == 0 && this->diff[1]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[3] == 0 && this->diff[5]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[4] == 0 && this->diff[0]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[4] == 0 && this->diff[1]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[4] == 0 && this->diff[2]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[5] == 0 && this->diff[0]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[5] == 0 && this->diff[1]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[5] == 0 && this->diff[2]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
    else if(this->diff[5] == 0 && this->diff[3]==0)
    {
        std::cout << "TWO PAIRS" << std::endl;
        this->myPoints =3;
    }
   // ************************************************************************
   // ************************************************************************
   //                      1 PAIR
   // ************************************************************************
   // ************************************************************************ 
    else if(this->diff[0] == 0)
    {
        std::cout << "ONE PAIR!" << std::endl;
        this->myPoints = 2;
    }
    else if(this->diff[1] == 0)
    {
        std::cout << "ONE PAIR!" << std::endl;
        this->myPoints = 2;
    }
    else if(this->diff[2] == 0)
    {
        std::cout << "ONE PAIR!" << std::endl;
        this->myPoints = 2;
    }
    else if(this->diff[3] == 0)
    {
        std::cout << "ONE PAIR!" << std::endl;
        this->myPoints = 2;
    }
    else if(this->diff[4] == 0)
    {
        std::cout << "ONE PAIR!" << std::endl;
        this->myPoints = 2;
    }
    else if(this->diff[5] == 0)
    {
        std::cout << "ONE PAIR!" << std::endl;
        this->myPoints = 2;
    }
    // ************************************************************************
   // ************************************************************************
   //                      ELSE HIGHEST CARD
   // ************************************************************************
   // ************************************************************************ 
    else
    {
     std::cout << "HIGHEST CARD: " << this->cardNumber[0] << std::endl;
     this->myPoints = 1;
    }
   
}
void TexasHoldem::bestRoboHand(int PLAYERS)
{
    switch(PLAYERS)
    {
            case 1:
            {
                // ************************************************************************
                // ************************************************************************
                //                      ROYAL FLUSH
                // ************************************************************************
                // ************************************************************************
                // ROYAL FLUSH: 10 through ACE -- HEARTS
                if(this->roboHeartsCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=10;
                }
                // ROYAL FLUSH: 10 through ACE -- CLUBS
                else if(this->roboClubsCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=10;
                }    
                // ROYAL FLUSH: 10 through ACE -- SPADES
                else if(this->roboSpadesCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of SPADES" << std::endl;
                    this->roboPoints1=10;
                }     
                // ROYAL FLUSH: 10 through ACE -- DIAMONDS
                else if(this->roboDiamondsCount1 == 5 && this->cardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=10;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      STRAIGHT FLUSH
                // ************************************************************************
                // ************************************************************************    
                // STRAIGHT FLUSH: ANY SEQUENCE OF FIVE CARDS + SAME SUITS 
                else if(this->roboHeartsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboHeartsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboClubsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboClubsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboSpadesCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboSpadesCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboDiamondsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboDiamondsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=9;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      FOUR OF A KIND
                // ************************************************************************
                // ************************************************************************    
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[1][0] ==0 && 
                        this->roboDiff[2][0] ==0 && this->roboDiff[3][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[2][0] ==0 && 
                        this->roboDiff[3][0] ==0 && this->roboDiff[4][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[3][0] ==0 && 
                        this->roboDiff[4][0] ==0 && this->roboDiff[5][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FULL HOUSE
                // ************************************************************************
                // ************************************************************************  
                 else if(this->roboDiff[0][0] == 0 && this->roboDiff[2][0] ==0 && this->roboDiff[3][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[3][0] ==0 && this->roboDiff[4][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[3][0] ==0 && this->roboDiff[4][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[1][0] ==0 && this->roboDiff[2][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[1][0] ==0 && this->roboDiff[2][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[2][0] ==0 && this->roboDiff[3][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FLUSH
                // ************************************************************************
                // ************************************************************************  
                else if(this->roboHeartsCount1 == 5)
                {
                    std::cout << "FLUSH OF HEARTS" <<std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboSpadesCount1 == 5)
                {
                    std::cout << "FLUSH OF SPADES" << std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboDiamondsCount1 == 5)
                {
                    std::cout << "FLUSH OF DIAMONDS" << std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboClubsCount1 == 5)
                {
                    std::cout << "FLUSH OF CLUBS" << std::endl;
                    this->roboPoints1=6;
                }
               // ************************************************************************
               // ************************************************************************
               //                      STRAIGHT
               // ************************************************************************
               // ************************************************************************   
                else if(this->roboDiff[0][0] == 1 && this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                        this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints1=5;
                }
                else if(this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                        this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints1=5;
                }
               // ************************************************************************
               // ************************************************************************
               //                      3 of a KIND
               // ************************************************************************
               // ************************************************************************
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[1][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[2][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[3][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[4][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[5][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
               // ************************************************************************
               // ************************************************************************
               //                      2 PAIRS
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
               // ************************************************************************
               // ************************************************************************
               //                      1 PAIR
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[1][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[2][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[3][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[4][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[5][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                // ************************************************************************
               // ************************************************************************
               //                      ELSE HIGHEST CARD
               // ************************************************************************
               // ************************************************************************ 
                else
                {
                 std::cout << "HIGHEST CARD: " << this->roboCardNumber[0][0] << std::endl;
                 this->roboPoints1=1;
                }
                break;
            }
        case 2:
        {
                // ************************************************************************
                // ************************************************************************
                //                      ROYAL FLUSH
                // ************************************************************************
                // ************************************************************************
                // ROYAL FLUSH: 10 through ACE -- HEARTS
                if(this->roboHeartsCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=10;
                }
                // ROYAL FLUSH: 10 through ACE -- CLUBS
                else if(this->roboClubsCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=10;
                }    
                // ROYAL FLUSH: 10 through ACE -- SPADES
                else if(this->roboSpadesCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of SPADES" << std::endl;
                    this->roboPoints1=10;
                }     
                // ROYAL FLUSH: 10 through ACE -- DIAMONDS
                else if(this->roboDiamondsCount1 == 5 && this->cardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=10;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      STRAIGHT FLUSH
                // ************************************************************************
                // ************************************************************************    
                // STRAIGHT FLUSH: ANY SEQUENCE OF FIVE CARDS + SAME SUITS 
                else if(this->roboHeartsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboHeartsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboClubsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboClubsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboSpadesCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboSpadesCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboDiamondsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboDiamondsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=9;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      FOUR OF A KIND
                // ************************************************************************
                // ************************************************************************    
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[1][0] ==0 && 
                        this->roboDiff[2][0] ==0 && this->roboDiff[3][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[2][0] ==0 && 
                        this->roboDiff[3][0] ==0 && this->roboDiff[4][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[3][0] ==0 && 
                        this->roboDiff[4][0] ==0 && this->roboDiff[5][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FULL HOUSE
                // ************************************************************************
                // ************************************************************************  
                 else if(this->roboDiff[0][0] == 0 && this->roboDiff[2][0] ==0 && this->roboDiff[3][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[3][0] ==0 && this->roboDiff[4][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[3][0] ==0 && this->roboDiff[4][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[1][0] ==0 && this->roboDiff[2][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[1][0] ==0 && this->roboDiff[2][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[2][0] ==0 && this->roboDiff[3][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FLUSH
                // ************************************************************************
                // ************************************************************************  
                else if(this->roboHeartsCount1 == 5)
                {
                    std::cout << "FLUSH OF HEARTS" <<std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboSpadesCount1 == 5)
                {
                    std::cout << "FLUSH OF SPADES" << std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboDiamondsCount1 == 5)
                {
                    std::cout << "FLUSH OF DIAMONDS" << std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboClubsCount1 == 5)
                {
                    std::cout << "FLUSH OF CLUBS" << std::endl;
                    this->roboPoints1=6;
                }
               // ************************************************************************
               // ************************************************************************
               //                      STRAIGHT
               // ************************************************************************
               // ************************************************************************   
                else if(this->roboDiff[0][0] == 1 && this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                        this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints1=5;
                }
                else if(this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                        this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints1=5;
                }
               // ************************************************************************
               // ************************************************************************
               //                      3 of a KIND
               // ************************************************************************
               // ************************************************************************
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[1][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[2][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[3][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[4][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[5][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
               // ************************************************************************
               // ************************************************************************
               //                      2 PAIRS
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
               // ************************************************************************
               // ************************************************************************
               //                      1 PAIR
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[1][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[2][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[3][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[4][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[5][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                // ************************************************************************
               // ************************************************************************
               //                      ELSE HIGHEST CARD
               // ************************************************************************
               // ************************************************************************ 
                else
                {
                 std::cout << "HIGHEST CARD: " << this->roboCardNumber[0][0] << std::endl;
                 this->roboPoints1=1;
                }
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************                
                
                // ************************************************************************
                // ************************************************************************
                //                      ROYAL FLUSH
                // ************************************************************************
                // ************************************************************************
                // ROYAL FLUSH: 10 through ACE -- HEARTS
                if(this->roboHeartsCount2== 5 && this->roboCardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of HEARTS" << std::endl;
                    this->roboPoints2=10;
                }
                // ROYAL FLUSH: 10 through ACE -- CLUBS
                else if(this->roboClubsCount2== 5 && this->roboCardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of CLUBS" << std::endl;
                    this->roboPoints2=10;
                }    
                // ROYAL FLUSH: 10 through ACE -- SPADES
                else if(this->roboSpadesCount2== 5 && this->roboCardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of SPADES" << std::endl;
                    this->roboPoints2=10;
                }     
                // ROYAL FLUSH: 10 through ACE -- DIAMONDS
                else if(this->roboDiamondsCount2== 5 && this->cardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints2=10;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      STRAIGHT FLUSH
                // ************************************************************************
                // ************************************************************************    
                // STRAIGHT FLUSH: ANY SEQUENCE OF FIVE CARDS + SAME SUITS 
                else if(this->roboHeartsCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboHeartsCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints2=9;
                }
                else if(this->roboClubsCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboClubsCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints2=9;
                }
                else if(this->roboSpadesCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboSpadesCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints2=9;
                }
                else if(this->roboDiamondsCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboDiamondsCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints2=9;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      FOUR OF A KIND
                // ************************************************************************
                // ************************************************************************    
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[1][1] ==0 && 
                        this->roboDiff[2][1] ==0 && this->roboDiff[3][1] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints2=8;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[2][1] ==0 && 
                        this->roboDiff[3][1] ==0 && this->roboDiff[4][1] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints2=8;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[3][1] ==0 && 
                        this->roboDiff[4][1] ==0 && this->roboDiff[5][1] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints2=8;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FULL HOUSE
                // ************************************************************************
                // ************************************************************************  
                 else if(this->roboDiff[0][1] == 0 && this->roboDiff[2][1] ==0 && this->roboDiff[3][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[3][1] ==0 && this->roboDiff[4][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[4][1] ==0 && this->roboDiff[5][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[3][1] ==0 && this->roboDiff[4][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[4][1] ==0 && this->roboDiff[5][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[4][1] ==0 && this->roboDiff[5][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[0][1] ==0 && this->roboDiff[1][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[0][1] ==0 && this->roboDiff[1][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[1][1] ==0 && this->roboDiff[2][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[0][1] ==0 && this->roboDiff[1][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[1][1] ==0 && this->roboDiff[2][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[2][1] ==0 && this->roboDiff[3][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FLUSH
                // ************************************************************************
                // ************************************************************************  
                else if(this->roboHeartsCount2== 5)
                {
                    std::cout << "FLUSH OF HEARTS" <<std::endl;
                    this->roboPoints2=6;
                }
                else if(this->roboSpadesCount2== 5)
                {
                    std::cout << "FLUSH OF SPADES" << std::endl;
                    this->roboPoints2=6;
                }
                else if(this->roboDiamondsCount2== 5)
                {
                    std::cout << "FLUSH OF DIAMONDS" << std::endl;
                    this->roboPoints2=6;
                }
                else if(this->roboClubsCount2== 5)
                {
                    std::cout << "FLUSH OF CLUBS" << std::endl;
                    this->roboPoints2=6;
                }
               // ************************************************************************
               // ************************************************************************
               //                      STRAIGHT
               // ************************************************************************
               // ************************************************************************   
                else if(this->roboDiff[0][1] == 1 && this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                        this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints2=5;
                }
                else if(this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                        this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints2=5;
                }
               // ************************************************************************
               // ************************************************************************
               //                      3 of a KIND
               // ************************************************************************
               // ************************************************************************
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[1][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[2][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[3][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                } 
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[4][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                } 
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[5][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                } 
               // ************************************************************************
               // ************************************************************************
               //                      2 PAIRS
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
               // ************************************************************************
               // ************************************************************************
               //                      1 PAIR
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[1][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[2][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[3][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[4][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[5][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                // ************************************************************************
               // ************************************************************************
               //                      ELSE HIGHEST CARD
               // ************************************************************************
               // ************************************************************************ 
                else
                {
                 std::cout << "HIGHEST CARD: " << this->roboCardNumber[0][2] << std::endl;
                 this->roboPoints2=1;
                }
                break;                
        }
        case 3:
        {
                // ************************************************************************
                // ************************************************************************
                //                      ROYAL FLUSH
                // ************************************************************************
                // ************************************************************************
                // ROYAL FLUSH: 10 through ACE -- HEARTS
                if(this->roboHeartsCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=10;
                }
                // ROYAL FLUSH: 10 through ACE -- CLUBS
                else if(this->roboClubsCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=10;
                }    
                // ROYAL FLUSH: 10 through ACE -- SPADES
                else if(this->roboSpadesCount1 == 5 && this->roboCardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of SPADES" << std::endl;
                    this->roboPoints1=10;
                }     
                // ROYAL FLUSH: 10 through ACE -- DIAMONDS
                else if(this->roboDiamondsCount1 == 5 && this->cardNumber[0][0] == 13 &&
                   this->roboCardNumber[1][0] == 12 && this->roboCardNumber[2][0] == 11 &&
                   this->roboCardNumber[3][0] == 10 && this->roboCardNumber[7][0] == 1)
                {
                    std::cout << "ROYAL FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=10;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      STRAIGHT FLUSH
                // ************************************************************************
                // ************************************************************************    
                // STRAIGHT FLUSH: ANY SEQUENCE OF FIVE CARDS + SAME SUITS 
                else if(this->roboHeartsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboHeartsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboClubsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboClubsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboSpadesCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboSpadesCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints1=9;
                }
                else if(this->roboDiamondsCount1 == 5 && this->roboDiff[0][0] == 1 &&
                   this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                   this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=9;
                }

                else if(this->roboDiamondsCount1 == 5 && this->roboDiff[1][0] == 1 &&
                   this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                   this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints1=9;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      FOUR OF A KIND
                // ************************************************************************
                // ************************************************************************    
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[1][0] ==0 && 
                        this->roboDiff[2][0] ==0 && this->roboDiff[3][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[2][0] ==0 && 
                        this->roboDiff[3][0] ==0 && this->roboDiff[4][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[3][0] ==0 && 
                        this->roboDiff[4][0] ==0 && this->roboDiff[5][0] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints1=8;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FULL HOUSE
                // ************************************************************************
                // ************************************************************************  
                 else if(this->roboDiff[0][0] == 0 && this->roboDiff[2][0] ==0 && this->roboDiff[3][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[3][0] ==0 && this->roboDiff[4][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[3][0] ==0 && this->roboDiff[4][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[4][0] ==0 && this->roboDiff[5][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[1][0] ==0 && this->roboDiff[2][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[0][0] ==0 && this->roboDiff[1][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[1][0] ==0 && this->roboDiff[2][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[2][0] ==0 && this->roboDiff[3][0] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints1=7;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FLUSH
                // ************************************************************************
                // ************************************************************************  
                else if(this->roboHeartsCount1 == 5)
                {
                    std::cout << "FLUSH OF HEARTS" <<std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboSpadesCount1 == 5)
                {
                    std::cout << "FLUSH OF SPADES" << std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboDiamondsCount1 == 5)
                {
                    std::cout << "FLUSH OF DIAMONDS" << std::endl;
                    this->roboPoints1=6;
                }
                else if(this->roboClubsCount1 == 5)
                {
                    std::cout << "FLUSH OF CLUBS" << std::endl;
                    this->roboPoints1=6;
                }
               // ************************************************************************
               // ************************************************************************
               //                      STRAIGHT
               // ************************************************************************
               // ************************************************************************   
                else if(this->roboDiff[0][0] == 1 && this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 &&
                        this->roboDiff[3][0] == 1 && this->roboDiff[4][0] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints1=5;
                }
                else if(this->roboDiff[1][0] == 1 && this->roboDiff[2][0] == 1 && this->roboDiff[3][0] == 1 &&
                        this->roboDiff[4][0] == 1 && this->roboDiff[5][0] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints1=5;
                }
               // ************************************************************************
               // ************************************************************************
               //                      3 of a KIND
               // ************************************************************************
               // ************************************************************************
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[1][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[2][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[3][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[4][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[5][0] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints1=4;
                } 
               // ************************************************************************
               // ************************************************************************
               //                      2 PAIRS
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[0][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[1][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[4][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[2][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[3][0] == 0 && this->roboDiff[5][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[4][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[0][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[1][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[2][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
                else if(this->roboDiff[5][0] == 0 && this->roboDiff[3][0]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints1=3;
                }
               // ************************************************************************
               // ************************************************************************
               //                      1 PAIR
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[1][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[2][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[3][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[4][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                else if(this->roboDiff[5][0] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints1=2;
                }
                // ************************************************************************
               // ************************************************************************
               //                      ELSE HIGHEST CARD
               // ************************************************************************
               // ************************************************************************ 
                else
                {
                 std::cout << "HIGHEST CARD: " << this->roboCardNumber[0][0] << std::endl;
                 this->roboPoints1=1;
                }
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************                
                
                // ************************************************************************
                // ************************************************************************
                //                      ROYAL FLUSH
                // ************************************************************************
                // ************************************************************************
                // ROYAL FLUSH: 10 through ACE -- HEARTS
                if(this->roboHeartsCount2== 5 && this->roboCardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of HEARTS" << std::endl;
                    this->roboPoints2=10;
                }
                // ROYAL FLUSH: 10 through ACE -- CLUBS
                else if(this->roboClubsCount2== 5 && this->roboCardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of CLUBS" << std::endl;
                    this->roboPoints2=10;
                }    
                // ROYAL FLUSH: 10 through ACE -- SPADES
                else if(this->roboSpadesCount2== 5 && this->roboCardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of SPADES" << std::endl;
                    this->roboPoints2=10;
                }     
                // ROYAL FLUSH: 10 through ACE -- DIAMONDS
                else if(this->roboDiamondsCount2== 5 && this->cardNumber[0][1] == 13 &&
                   this->roboCardNumber[1][1] == 12 && this->roboCardNumber[2][1] == 11 &&
                   this->roboCardNumber[3][1] == 10 && this->roboCardNumber[7][1] == 1)
                {
                    std::cout << "ROYAL FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints2=10;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      STRAIGHT FLUSH
                // ************************************************************************
                // ************************************************************************    
                // STRAIGHT FLUSH: ANY SEQUENCE OF FIVE CARDS + SAME SUITS 
                else if(this->roboHeartsCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboHeartsCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints2=9;
                }
                else if(this->roboClubsCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboClubsCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints2=9;
                }
                else if(this->roboSpadesCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboSpadesCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints2=9;
                }
                else if(this->roboDiamondsCount2== 5 && this->roboDiff[0][1] == 1 &&
                   this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                   this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints2=9;
                }

                else if(this->roboDiamondsCount2== 5 && this->roboDiff[1][1] == 1 &&
                   this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                   this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints2=9;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      FOUR OF A KIND
                // ************************************************************************
                // ************************************************************************    
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[1][1] ==0 && 
                        this->roboDiff[2][1] ==0 && this->roboDiff[3][1] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints2=8;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[2][1] ==0 && 
                        this->roboDiff[3][1] ==0 && this->roboDiff[4][1] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints2=8;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[3][1] ==0 && 
                        this->roboDiff[4][1] ==0 && this->roboDiff[5][1] == 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints2=8;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FULL HOUSE
                // ************************************************************************
                // ************************************************************************  
                 else if(this->roboDiff[0][1] == 0 && this->roboDiff[2][1] ==0 && this->roboDiff[3][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[3][1] ==0 && this->roboDiff[4][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[4][1] ==0 && this->roboDiff[5][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[3][1] ==0 && this->roboDiff[4][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[4][1] ==0 && this->roboDiff[5][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[4][1] ==0 && this->roboDiff[5][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[0][1] ==0 && this->roboDiff[1][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[0][1] ==0 && this->roboDiff[1][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[1][1] ==0 && this->roboDiff[2][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[0][1] ==0 && this->roboDiff[1][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[1][1] ==0 && this->roboDiff[2][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[2][1] ==0 && this->roboDiff[3][1] ==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints2=7;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FLUSH
                // ************************************************************************
                // ************************************************************************  
                else if(this->roboHeartsCount2== 5)
                {
                    std::cout << "FLUSH OF HEARTS" <<std::endl;
                    this->roboPoints2=6;
                }
                else if(this->roboSpadesCount2== 5)
                {
                    std::cout << "FLUSH OF SPADES" << std::endl;
                    this->roboPoints2=6;
                }
                else if(this->roboDiamondsCount2== 5)
                {
                    std::cout << "FLUSH OF DIAMONDS" << std::endl;
                    this->roboPoints2=6;
                }
                else if(this->roboClubsCount2== 5)
                {
                    std::cout << "FLUSH OF CLUBS" << std::endl;
                    this->roboPoints2=6;
                }
               // ************************************************************************
               // ************************************************************************
               //                      STRAIGHT
               // ************************************************************************
               // ************************************************************************   
                else if(this->roboDiff[0][1] == 1 && this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 &&
                        this->roboDiff[3][1] == 1 && this->roboDiff[4][1] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints2=5;
                }
                else if(this->roboDiff[1][1] == 1 && this->roboDiff[2][1] == 1 && this->roboDiff[3][1] == 1 &&
                        this->roboDiff[4][1] == 1 && this->roboDiff[5][1] == 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints2=5;
                }
               // ************************************************************************
               // ************************************************************************
               //                      3 of a KIND
               // ************************************************************************
               // ************************************************************************
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[1][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[2][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[3][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                } 
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[4][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                } 
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[5][1] == 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints2=4;
                } 
               // ************************************************************************
               // ************************************************************************
               //                      2 PAIRS
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[0][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[1][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[2][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[3][1] == 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[4][1] == 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
                else if(this->roboDiff[5][1] == 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints2=3;
                }
               // ************************************************************************
               // ************************************************************************
               //                      1 PAIR
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[1][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[2][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[3][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[4][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                else if(this->roboDiff[5][1] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints2=2;
                }
                // ************************************************************************
               // ************************************************************************
               //                      ELSE HIGHEST CARD
               // ************************************************************************
               // ************************************************************************ 
                else
                {
                 std::cout << "HIGHEST CARD: " << this->roboCardNumber[0][1] << std::endl;
                 this->roboPoints2=1;
                }
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************
// ****************************************************************************************                
                
                // ************************************************************************
                // ************************************************************************
                //                      ROYAL FLUSH
                // ************************************************************************
                // ************************************************************************
                // ROYAL FLUSH: 10 through ACE -- HEARTS
                if(this->roboHeartsCount3== 5 && this->roboCardNumber[0][2]== 13 &&
                   this->roboCardNumber[1][2]== 12 && this->roboCardNumber[2][2]== 11 &&
                   this->roboCardNumber[3][2]== 10 && this->roboCardNumber[7][2]== 1)
                {
                    std::cout << "ROYAL FLUSH of HEARTS" << std::endl;
                    this->roboPoints3=10;
                }
                // ROYAL FLUSH: 10 through ACE -- CLUBS
                else if(this->roboClubsCount3== 5 && this->roboCardNumber[0][2]== 13 &&
                   this->roboCardNumber[1][2]== 12 && this->roboCardNumber[2][2]== 11 &&
                   this->roboCardNumber[3][2]== 10 && this->roboCardNumber[7][2]== 1)
                {
                    std::cout << "ROYAL FLUSH of CLUBS" << std::endl;
                    this->roboPoints3=10;
                }    
                // ROYAL FLUSH: 10 through ACE -- SPADES
                else if(this->roboSpadesCount3== 5 && this->roboCardNumber[0][2]== 13 &&
                   this->roboCardNumber[1][2]== 12 && this->roboCardNumber[2][2]== 11 &&
                   this->roboCardNumber[3][2]== 10 && this->roboCardNumber[7][2]== 1)
                {
                    std::cout << "ROYAL FLUSH of SPADES" << std::endl;
                    this->roboPoints3=10;
                }     
                // ROYAL FLUSH: 10 through ACE -- DIAMONDS
                else if(this->roboDiamondsCount3== 5 && this->cardNumber[0][2]== 13 &&
                   this->roboCardNumber[1][2]== 12 && this->roboCardNumber[2][2]== 11 &&
                   this->roboCardNumber[3][2]== 10 && this->roboCardNumber[7][2]== 1)
                {
                    std::cout << "ROYAL FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints3=10;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      STRAIGHT FLUSH
                // ************************************************************************
                // ************************************************************************    
                // STRAIGHT FLUSH: ANY SEQUENCE OF FIVE CARDS + SAME SUITS 
                else if(this->roboHeartsCount3== 5 && this->roboDiff[0][2]== 1 &&
                   this->roboDiff[1][2]== 1 && this->roboDiff[2][2]== 1 &&
                   this->roboDiff[3][2]== 1 && this->roboDiff[4][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints3=9;
                }

                else if(this->roboHeartsCount3== 5 && this->roboDiff[1][2]== 1 &&
                   this->roboDiff[2][2]== 1 && this->roboDiff[3][2]== 1 &&
                   this->roboDiff[4][2]== 1 && this->roboDiff[5][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of HEARTS" << std::endl;
                    this->roboPoints3=9;
                }
                else if(this->roboClubsCount3== 5 && this->roboDiff[0][2]== 1 &&
                   this->roboDiff[1][2]== 1 && this->roboDiff[2][2]== 1 &&
                   this->roboDiff[3][2]== 1 && this->roboDiff[4][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints3=9;
                }

                else if(this->roboClubsCount3== 5 && this->roboDiff[1][2]== 1 &&
                   this->roboDiff[2][2]== 1 && this->roboDiff[3][2]== 1 &&
                   this->roboDiff[4][2]== 1 && this->roboDiff[5][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of CLUBS" << std::endl;
                    this->roboPoints3=9;
                }
                else if(this->roboSpadesCount3== 5 && this->roboDiff[0][2]== 1 &&
                   this->roboDiff[1][2]== 1 && this->roboDiff[2][2]== 1 &&
                   this->roboDiff[3][2]== 1 && this->roboDiff[4][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints3=9;
                }

                else if(this->roboSpadesCount3== 5 && this->roboDiff[1][2]== 1 &&
                   this->roboDiff[2][2]== 1 && this->roboDiff[3][2]== 1 &&
                   this->roboDiff[4][2]== 1 && this->roboDiff[5][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of SPADES" << std::endl;
                    this->roboPoints3=9;
                }
                else if(this->roboDiamondsCount3== 5 && this->roboDiff[0][2]== 1 &&
                   this->roboDiff[1][2]== 1 && this->roboDiff[2][2]== 1 &&
                   this->roboDiff[3][2]== 1 && this->roboDiff[4][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints3=9;
                }

                else if(this->roboDiamondsCount3== 5 && this->roboDiff[1][2]== 1 &&
                   this->roboDiff[2][2]== 1 && this->roboDiff[3][2]== 1 &&
                   this->roboDiff[4][2]== 1 && this->roboDiff[5][2]== 1)
                {
                    std::cout << "STRAIGHT FLUSH of DIAMONDS" << std::endl;
                    this->roboPoints3=9;
                }       
                // ************************************************************************
                // ************************************************************************
                //                      FOUR OF A KIND
                // ************************************************************************
                // ************************************************************************    
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[1][2]==0 && 
                        this->roboDiff[2][2]==0 && this->roboDiff[3][2]== 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints3=8;
                }
                else if(this->roboDiff[1][2]== 0 && this->roboDiff[2][2]==0 && 
                        this->roboDiff[3][2]==0 && this->roboDiff[4][2]== 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints3=8;
                }
                else if(this->roboDiff[2][2]== 0 && this->roboDiff[3][2]==0 && 
                        this->roboDiff[4][2]==0 && this->roboDiff[5][2]== 0)
                {
                    std::cout << "FOUR OF A KIND!" << std::endl;
                    this->roboPoints3=8;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FULL HOUSE
                // ************************************************************************
                // ************************************************************************  
                 else if(this->roboDiff[0][2]== 0 && this->roboDiff[2][2]==0 && this->roboDiff[3][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[3][2]==0 && this->roboDiff[4][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[4][2]==0 && this->roboDiff[5][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[1][2]== 0 && this->roboDiff[3][2]==0 && this->roboDiff[4][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[1][2]== 0 && this->roboDiff[4][2]==0 && this->roboDiff[5][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[2][2]== 0 && this->roboDiff[4][2]==0 && this->roboDiff[5][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[3][2]== 0 && this->roboDiff[0][2]==0 && this->roboDiff[1][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[4][2]== 0 && this->roboDiff[0][2]==0 && this->roboDiff[1][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[4][2]== 0 && this->roboDiff[1][2]==0 && this->roboDiff[2][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[5][2]== 0 && this->roboDiff[0][2]==0 && this->roboDiff[1][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[5][2]== 0 && this->roboDiff[1][2]==0 && this->roboDiff[2][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                else if(this->roboDiff[5][2]== 0 && this->roboDiff[2][2]==0 && this->roboDiff[3][2]==0)
                {
                    std::cout << "FULL HOUSE!" << std::endl;
                    this->roboPoints3=7;
                }
                // ************************************************************************
                // ************************************************************************
                //                      FLUSH
                // ************************************************************************
                // ************************************************************************  
                else if(this->roboHeartsCount3== 5)
                {
                    std::cout << "FLUSH OF HEARTS" <<std::endl;
                    this->roboPoints3=6;
                }
                else if(this->roboSpadesCount3== 5)
                {
                    std::cout << "FLUSH OF SPADES" << std::endl;
                    this->roboPoints3=6;
                }
                else if(this->roboDiamondsCount3== 5)
                {
                    std::cout << "FLUSH OF DIAMONDS" << std::endl;
                    this->roboPoints3=6;
                }
                else if(this->roboClubsCount3== 5)
                {
                    std::cout << "FLUSH OF CLUBS" << std::endl;
                    this->roboPoints3=6;
                }
               // ************************************************************************
               // ************************************************************************
               //                      STRAIGHT
               // ************************************************************************
               // ************************************************************************   
                else if(this->roboDiff[0][2]== 1 && this->roboDiff[1][2]== 1 && this->roboDiff[2][2]== 1 &&
                        this->roboDiff[3][2]== 1 && this->roboDiff[4][2]== 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints3=5;
                }
                else if(this->roboDiff[1][2]== 1 && this->roboDiff[2][2]== 1 && this->roboDiff[3][2]== 1 &&
                        this->roboDiff[4][2]== 1 && this->roboDiff[5][2]== 1)
                {
                    std::cout << "STRAIGHT" << std::endl;
                    this->roboPoints3=5;
                }
               // ************************************************************************
               // ************************************************************************
               //                      3 of a KIND
               // ************************************************************************
               // ************************************************************************
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[1][2]== 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints3=4;
                }
                else if(this->roboDiff[1][2]== 0 && this->roboDiff[2][2]== 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints3=4;
                }
                else if(this->roboDiff[2][2]== 0 && this->roboDiff[3][2]== 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints3=4;
                } 
                else if(this->roboDiff[3][2]== 0 && this->roboDiff[4][2]== 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints3=4;
                } 
                else if(this->roboDiff[4][2]== 0 && this->roboDiff[5][2]== 0)
                {
                    std::cout << "THREE OF A KIND" << std::endl;
                    this->roboPoints3=4;
                } 
               // ************************************************************************
               // ************************************************************************
               //                      2 PAIRS
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[0][2]== 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[1][2]== 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[1][2]== 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[1][2]== 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[2][2]== 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[2][2]== 0 && this->roboDiff[4][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[2][2]== 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[3][2]== 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[3][2]== 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[3][2]== 0 && this->roboDiff[5][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[4][2]== 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[4][2]== 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[4][2]== 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[5][2]== 0 && this->roboDiff[0][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[5][2]== 0 && this->roboDiff[1][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[5][2]== 0 && this->roboDiff[2][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
                else if(this->roboDiff[5][2]== 0 && this->roboDiff[3][1]==0)
                {
                    std::cout << "TWO PAIRS" << std::endl;
                    this->roboPoints3=3;
                }
               // ************************************************************************
               // ************************************************************************
               //                      1 PAIR
               // ************************************************************************
               // ************************************************************************ 
                else if(this->roboDiff[0][2]== 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints3=2;
                }
                else if(this->roboDiff[1][2]== 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints3=2;
                }
                else if(this->roboDiff[2][2]== 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints3=2;
                }
                else if(this->roboDiff[3][2]== 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints3=2;
                }
                else if(this->roboDiff[4][2]== 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints3=2;
                }
                else if(this->roboDiff[5][2] == 0)
                {
                    std::cout << "ONE PAIR!" << std::endl;
                    this->roboPoints3=2;
                }
                // ************************************************************************
               // ************************************************************************
               //                      ELSE HIGHEST CARD
               // ************************************************************************
               // ************************************************************************ 
                else
                {
                 std::cout << "HIGHEST CARD: " << this->roboCardNumber[0][2] << std::endl;
                 this->roboPoints3=1;
                }
                break;                                
        }
    }
}

void TexasHoldem::declareWinner()
{
    int temp;
    if(this->myPoints >this->roboPoints)
    {
        std::cout << "\nYOU ARE THE WINNER!\n";
        std::cout << "TOTAL WON: " << this->getPotSize() << std::endl;
        temp = this->getPotSize();
        this->setMyChips(temp);
                
        this->potSize=0;
    }
    else
    {
       std::cout << "\nYOU DID NOT WIN!\n";
       std::cout << "TOTAL WON BY OPPONENT: " << this->getPotSize() << std::endl;
       this->roboChips+=this->getPotSize();
       this->potSize=0;
    }
    

}

void TexasHoldem::betMyChips(int p)
{
    this->myChips = (this->myChips - p);
}
void TexasHoldem::setMyChips(int p)
{
    this->myChips +=p;
}

int TexasHoldem::getMyChips()
{
    return this->myChips;
}

void TexasHoldem::addToPot(int p)
{
    this->potSize += p;
}
int TexasHoldem::getPotSize()
{
    return this->potSize;
}


int TexasHoldem::roboBetRaiseOrFold(int p)
{
    this->BetRaiseOrFold = ((rand() % 3) + 1);
    
    switch(this->BetRaiseOrFold)
    {
        case 1:
        {
            std::cout << "...Opponent has matched the bet of: " << p << " chips\n";
            this->addToPot(p);
            std::cout << "Total Pot Size: " << this->getPotSize() << " chips\n";
            return 1;
            break;
        }
        case 2:
        {
            std::cout << "...Opponent has raised the bet size to: " << p+100 << " chips";
            return 2;
            break;
        }
        case 3:
        {
            std::cout << "...Opponent will fold! You are the winner!";
            return 3;
            break;            
        }
    }
    
    
}

void TexasHoldem::writeData(std::ofstream &file,int num)
{
    this->heartsCount =0;
    this->diamondsCount =0;
    this->clubsCount = 0;
    this->spadesCount =0;
    
    for(int i=0;i<num;i++)
    {
        if(this->suit[i] == "Hearts")
            this->heartsCount = this->heartsCount + 1;
        if(this->suit[i]== "Diamonds")
            this->diamondsCount = this->diamondsCount + 1;
        if(this->suit[i] == "Clubs")
            this->clubsCount = this->clubsCount + 1;
        if(this->suit[i] == "Spades")
            this->spadesCount = this->spadesCount + 1;
    }
    this->roboHeartsCount =0;
    this->roboDiamondsCount =0;
    this->roboClubsCount = 0;
    this->roboSpadesCount =0;
    
    for(int i=0;i<num;i++)
    {
        if(this->roboSuit[i] == "Hearts")
            this->roboHeartsCount = this->roboHeartsCount + 1;
        if(this->roboSuit[i]== "Diamonds")
            this->roboDiamondsCount = this->roboDiamondsCount + 1;
        if(this->roboSuit[i] == "Clubs")
            this->roboClubsCount = this->roboClubsCount + 1;
        if(this->roboSuit[i] == "Spades")
            this->roboSpadesCount = this->roboSpadesCount + 1;
    }
    
    file <<"\n*****************************************************\n";
    file << "\tThese were my cards:\n";
    file <<"\n*****************************************************\n";
    file << this->deck[this->myCard1] << "\n\t\n\t\n\t\n\t\n";
    file << this->deck[this->myCard2] << "\n\t\n\t\n\t\n\t\n";
    file <<"\n*****************************************************\n";
    file << "\n\tCards Highest to Lowest:\n";
    file << "\n*****************************************************\n";
    for(int i=0;i<num;i++)
        file << this->deck[this->sortedHand[i]] << "\n\t\n\t\n\t\n\t\n";
    file <<"\n*****************************************************\n";
    file << "\tTotal Suit Count for Myself: \n";
    file <<"\n*****************************************************\n";
    file << "Hearts: " << this->heartsCount << std::endl;
    file << "Diamonds: " << this->diamondsCount << std::endl;
    file << "Clubs: " << this->clubsCount << std::endl;
    file << "Spades: " << this->spadesCount << std::endl;
    file <<"\n*****************************************************\n";
    file << "\n\t Total Chips at the end of the game: \n";
    file <<"\n*****************************************************\n";
    file << "Total: " << this->getMyChips();
    file <<"\n*****************************************************\n";
    file <<"\n*****************************************************\n";
    file <<"\n*****************************************************\n";
    file << "\tThese were my opponents cards:\n";
    file <<"\n*****************************************************\n";
    file << this->deck[this->roboCard1] << "\n\t\n\t\n\t\n\t\n";
    file << this->deck[this->roboCard2] << "\n\t\n\t\n\t\n\t\n";
    file <<"\n*****************************************************\n";
    file << "\n\tOpponents cards Highest to Lowest:\n";
    file << "\n*****************************************************\n";
    for(int i=0;i<num;i++)
        file << this->deck[this->roboSortedHand[i]] << "\n\t\n\t\n\t\n\t\n";
    file <<"\n*****************************************************\n";
    file << "\tTotal Suit Count for Opponent: \n";
    file <<"\n*****************************************************\n";
    file << "Hearts: " << this->roboHeartsCount << std::endl;
    file << "Diamonds: " << this->roboDiamondsCount << std::endl;
    file << "Clubs: " << this->roboClubsCount << std::endl;
    file << "Spades: " << this->roboSpadesCount << std::endl;
    file <<"\n*****************************************************\n";
    file << "\n\t Total Chips at the end of the game for opponent: \n"; 
    file <<"\n*****************************************************\n";
    file << "\nTotal: "<<this->roboChips;
}



    void TexasHoldem::setRoboChips(int chips)
    {
        this->roboChips = chips;
    }
    int  TexasHoldem::getRoboChips()
    {
        return this->roboChips;
    }
    void TexasHoldem::setNumOfPlayers(int SIZE)
    {
        this->NumofPlayers = SIZE;
    }
    int  TexasHoldem::getNumOfPlayers()
    {
        return this->NumofPlayers;
    }
    
    void TexasHoldem::generateNumofPlayers()
    {
        int temp;
         temp = ((rand() % 1) + 3);
         std::endl;
         std::cout << temp << " players have joined the table! ";
         this->setNumOfPlayers(temp);
    }
    
    int* TexasHoldem::createArrOfPlayers(int SIZE)
    {
        // Multi-dimensional Array that holds 7 cards per player
        int* temp = new int[SIZE][7];
        
        return temp;
    }