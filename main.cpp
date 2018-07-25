/*  Jason Guevara
 *  CIS - 17A - 45434
 *  07/24/2018
 *  Project #2
 * 
 * 
 */
     
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <fstream>
#include "TexasHoldem.h"
using namespace std;
/*****************************************************************************/
/*                              FUNCTION MAIN                                */
/*****************************************************************************/
int main() {

// BOOLEAN for do{}while() -- Should another game be created after this one?
bool playAnother = false;    

//  DO WHILE LOOP is initiated
do{
    // Randomizer
    srand(time(NULL));
    // Variable Declaration
    int betSize,betSize2,betSize3,val,val2,val3;
    int stoppedAt=7;
    char ans;
    // Create a new game of Texas Holdem
    TexasHoldem game;
    cout << "\nYou will be assigned 10000 chips to play with...\n";
    game.myChips = 10000;
    game.roboChips=10000;
    
    // Initialize Poker Deck
    game.newDeck();
    
    // Dealer Flips the first 3 cards
    game.firstFlip();
    
    // Creates my hand of two cards
    game.myHand();
    
    // Creates opponents hand of two cards
    game.roboHand();
    
    // Ask user for bet size
    cout << "How Many Chips do you want to bet?: ";
    cin >> betSize;
    
    // Input Validation
    while(betSize<0 || betSize>game.getMyChips())
    {
        cout << "That amount is not allowed!\n";
        cout << "How Many Chips do you want to bet?: ";
        cin >> betSize;
    }
    // Send my bet to Pot
    game.betMyChips(betSize);
    game.addToPot(betSize);
    
    // Tried to randomize opponents input so it would not be redundant + Fun
    cout << "\nWaiting for Opponent to match bet, raise, or fold: ";
    val = game.roboBetRaiseOrFold(betSize);
    
/*****************************************************************************/
/*                                  SWITCH                                   */
/*****************************************************************************/
    switch(val)
    {
        case 1:
        {
            // Dealer will now flip the next card
            cout << "\nDealer will now display the next card: ";
            game.secondFlip();
            
            // Display my hand of cards so I can bet adequately
            game.showMyHand();
            cout << "How Many Chips do you want to bet?: ";
            cin >> betSize2;
            // input validation
            while(betSize2<0 || betSize2>game.getMyChips())
            {
                cout << "That amount is not allowed!\n";
                cout << "How Many Chips do you want to bet?: ";
                cin >> betSize2;
            }
            // Throw my chips to the pot
            game.betMyChips(betSize2);
            game.addToPot(betSize2);
            
            // Randomize opponents decision
            cout << "\nWaiting for Opponent to match bet, raise, or fold: ";
            val2 = game.roboBetRaiseOrFold(betSize2);
            // DEpending on what the opponent decides , so will the outcome
            switch(val2)
            {
                case 1:
                {
                    // Flip the next card 
                    cout << "\nDealer will now display the next card: ";
                    game.thirdFlip();
                    game.showMyHand();
                    
                    // Ask user to bet & throw to the pot
                    cout << "How Many Chips do you want to bet?: ";
                    cin >> betSize3;
                    while(betSize3<0 || betSize3>game.getMyChips())
                     {
                        cout << "That amount is not allowed!\n";
                        cout << "How Many Chips do you want to bet?: ";
                        cin >> betSize3;
                     }
                    game.betMyChips(betSize3);
                    game.addToPot(betSize3);
                    
                    // To make it more interesting I decided the opponent will 
                    // always match the last bet
                    cout << "\nWaiting for Opponent to match bet, raise, or fold: ";
                    cout << "...Opponent has matched the bet of: " << betSize3 << " chips\n";
                    game.addToPot(betSize3);
                    cout << "Total Pot Size: " << game.getPotSize() << " chips\n";
                    
                    // Rank Cards for user & opponent
                    game.rankHand();
                    game.rankRoboHand();
                    
                    // Show the best outcome
                    game.showBest();
                    
                    // These 'find..' functions gather the card number to easily
                    // find outcomes
                    game.findCardNumber();
                    game.findRoboCardNumber();
                    
                    // find the suits for user & opponent
                    game.whatSuit();
                    game.whatRoboSuit();
                    
                    // Finding the differences out of hands
                    game.findDiff();
                    game.findRoboDiff();
                    
                    // Suit counts will count each suit i.e. How many of each
                    game.suitCount();
                    game.roboSuitCount();
                    
                    // best hand will find the highest possible outcome 
                    // for user & opponent
                    game.bestHand();
                    game.bestRoboHand();
                    
                    // declare the winner of the game
                    game.declareWinner();
                    break;
                }
            }
            
            break;
        }
        case 2:
        {
            // If the opponent decides to Raise, they will raise 100 chips
            cout << "\nYou must Match the bet of " << betSize+100 << endl;
            
            // Ask user if they wish to match opponents bet
            cout << "Enter 'Y' for Yes or 'N' for No: ";
            cin >> ans;
            
            // If the user decides to match bet continue
            if(toupper(ans) == 'Y')
            {               
                // bet my chips and continue
                game.betMyChips(100);
                game.addToPot(100);
                
                // Dealer will flip the next card
                cout << "\nDealer will now display the next card: ";                
                game.secondFlip();
                game.showMyHand();
                cout << "How Many Chips do you want to bet?: ";
                cin >> betSize2;
                while(betSize2<0 || betSize2>game.getMyChips())
                {
                    cout << "That amount is not allowed!\n";
                    cout << "How Many Chips do you want to bet?: ";
                    cin >> betSize2;
                }
                game.betMyChips(betSize2);
                game.addToPot(betSize2);
                cout << "\nWaiting for Opponent to match bet, raise, or fold: ";
                val2 = game.roboBetRaiseOrFold(betSize2);
        switch(val2)
            {
                case 1:
                {
                    // Dealer will flip the next card
                    cout << "\nDealer will now display the next card: ";
                    game.thirdFlip();
                    
                    // THE FOLLOWING CODE REPEATS i.e. SAME AS ABOVE
                    game.showMyHand();
                    cout << "How Many Chips do you want to bet?: ";
                    cin >> betSize3;
                    while(betSize3<0 || betSize3>game.getMyChips())
                     {
                        cout << "That amount is not allowed!\n";
                        cout << "How Many Chips do you want to bet?: ";
                        cin >> betSize3;
                     }
                    game.betMyChips(betSize3);
                    game.addToPot(betSize3);
                    cout << "\nWaiting for Opponent to match bet, raise, or fold: ";
                    cout << "...Opponent has matched the bet of: " << betSize3 << " chips\n";
                    game.addToPot(betSize3);
                    cout << "Total Pot Size: " << game.getPotSize() << " chips\n";
                    game.rankHand();
                    game.rankRoboHand();
                    game.showBest();
            
                    game.findCardNumber();
                    game.findRoboCardNumber();

                    game.whatSuit();
                    game.whatRoboSuit();
    
                    game.findDiff();
                    game.findRoboDiff();
    
                    game.suitCount();
                    game.roboSuitCount();
                    game.bestHand();
                    game.bestRoboHand();
                    game.declareWinner();
                    break;
                }
                case 2:
                {
                    cout << "\nYou must Match the bet of " << betSize+100 << endl;
                    cout << "Enter 'Y' for Yes or 'N' for No: ";
                    cin >> ans;
                    if(toupper(ans) == 'Y')
                    {               
                    game.betMyChips(100);
                    game.addToPot(100);
                    cout << "\nDealer will now display the next card: ";
                    game.thirdFlip();
                    game.showMyHand();
                    cout << "How Many Chips do you want to bet?: ";
                    cin >> betSize3;
                    while(betSize3<0 || betSize3>game.getMyChips())
                     {
                        cout << "That amount is not allowed!\n";
                        cout << "How Many Chips do you want to bet?: ";
                        cin >> betSize3;
                     }
                    game.betMyChips(betSize3);
                    game.addToPot(betSize3);
                    cout << "\nWaiting for Opponent to match bet, raise, or fold: ";
                    cout << "...Opponent has matched the bet of: " << betSize3 << " chips\n";
                    game.addToPot(betSize3);
                    cout << "Total Pot Size: " << game.getPotSize() << " chips\n";
                    game.rankHand();
                    game.rankRoboHand();
                    game.showBest();
            
                    game.findCardNumber();
                    game.findRoboCardNumber();

                    game.whatSuit();
                    game.whatRoboSuit();
    
                    game.findDiff();
                    game.findRoboDiff();
    
                    game.suitCount();
                    game.roboSuitCount();
                    game.bestHand();
                    game.bestRoboHand();
                    game.declareWinner();
                    break;
                    }else{
                        cout << "\nYOU DID NOT WIN!\n";
                        cout << "TOTAL WON BY OPPONENT: " << game.getPotSize() << endl;
                        game.roboChips+=game.getPotSize();
                        game.potSize=0;  
                        break;
                    }
                }
                case 3:
                {
                    // IF the user or opponent forfeits the following code
                    // will base the winner by ranking cards and trying to
                    // find the highest possible outcome
                    stoppedAt = 7;
                    game.rankHand();
                    game.rankRoboHand();
                    game.showBest();
            
                    game.findCardNumber();
                    game.findRoboCardNumber();

                    game.whatSuit();
                    game.whatRoboSuit();
    
                    game.findDiff();
                    game.findRoboDiff();
    
                    game.suitCount();
                    game.roboSuitCount();
                    game.bestHand();
                    game.bestRoboHand();
                cout << "\nYOU WIN!";
                game.myChips += game.getPotSize();
                game.potSize=0;
                break;
                }
        }
            
            }else{
                    // IF the user or opponent forfeits the following code
                    // will base the winner by ranking cards and trying to
                    // find the highest possible outcome
                    stoppedAt = 6;
                    game.rankHand();
                    game.rankRoboHand();
                    game.showBest();
            
                    game.findCardNumber();
                    game.findRoboCardNumber();

                    game.whatSuit();
                    game.whatRoboSuit();
    
                    game.findDiff();
                    game.findRoboDiff();
    
                    game.suitCount();
                    game.roboSuitCount();
                    game.bestHand();
                    game.bestRoboHand();
                   cout << "\nYOU DID NOT WIN!\n";
                   cout << "TOTAL WON BY OPPONENT: " << game.getPotSize() << endl;
                   game.roboChips+=game.getPotSize();
                   game.potSize=0;  
                   break;
            }
            break;
        }
        case 3:
        {
                    // IF the user or opponent forfeits the following code
                    // will base the winner by ranking cards and trying to
                    // find the highest possible outcome
                    stoppedAt = 5;
                    game.rankHand();
                    game.rankRoboHand();
                    game.showBest();
            
                    game.findCardNumber();
                    game.findRoboCardNumber();

                    game.whatSuit();
                    game.whatRoboSuit();
    
                    game.findDiff();
                    game.findRoboDiff();
    
                    game.suitCount();
                    game.roboSuitCount();
                    game.bestHand();
                    game.bestRoboHand();
            cout << "\nYOU WIN!";
            game.myChips += game.getPotSize();
            game.potSize=0;
            break;
        }
    }

    // ASK the user if they wish to see the opponents hand
    cout << "\nDo you want to see the Opponents hand? (Y/N)";
    cin >> ans;
    if(toupper(ans) == 'Y')
    {
        game.showRoboHand();
    }
   
    // WRITE SOME DATA OF THE GAME
    ofstream output;
    output.open("PokerData.txt");
    game.writeData(output,stoppedAt);
    output.close();
    
    // ASK USER IF THEY WANT TO START A NEW GAME
    cout << "Do You wish to play another game?: (Y/N): ";
    cin >> ans;
    if(toupper(ans) == 'Y')
        playAnother=true;
    else if(toupper(ans) == 'N')
        playAnother=false;

       
 }while(playAnother == true);
 
 
    // END
    return 0;
}
