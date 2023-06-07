#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

void showDeck();
void showCard(int card);
void shuffle();
void sortDeck();
void swapPosition(int firstPosition, int secondPosition);

int deck[NUM_SUITS * NUM_RANKS];

int main()
{
  srand(time(NULL));
  
  shuffle(deck);
  showDeck(deck);
  
  printf("\n\n");
  
  sortDeck(deck);
  showDeck(deck);
  
  return 0;
}

/*******************************************************************************/
/*
  f(showDeck): Display the deck.
  
  Parameters: NONE.
  
  Returns: NONE.
  
  Notes: Call the showCard function to display each card.
*/
/*******************************************************************************/
void showDeck()
{
  int suit, suitPosition;

  for(suit = 0; suit < NUM_SUITS; suit++)
  {
    for(suitPosition = 0; suitPosition < NUM_RANKS; suitPosition++)
    {
      showCard( deck[suit * NUM_RANKS + suitPosition] );
      printf("\n");
    }
    printf("\n");
  }
}

/*******************************************************************************/
/*
  f(showCard): Display each card.
  
  Parameters: int card //the value of card to be displayed.
  
  Return: NONE.
  
  Notes: The suits are the order: Hearts(0-12), Diamonds(13-25), Clubs(26-38) and Spades(39-51).
  The cards are in the order: Ace, 2, 3, ..., Queen, King.
*/
/*******************************************************************************/
void showCard(int card)
{
  if((card % NUM_RANKS) == 0)
    printf("Ace");
  else if ((card % NUM_RANKS) < 10)
    printf("%d", card % NUM_RANKS + 1);
  else
    switch(card % NUM_RANKS)
    {
      case 10:
        printf("Jack");
      break;
        case 11:
        printf("Queen");
        break;
      case 12:
        printf("King");
        break;
    }
  switch(card / NUM_RANKS)
  {
    case 0:
      printf("-Hearts");
      break;
    case 1:
      printf("-Diamonds");
      break;
    case 2:
      printf("-Clubs");
      break;
    case 3:
      printf("-Spades");
      break;
  }
}

/*******************************************************************************/
/*
  f(shuffle): Shuffle the deck of cards.
  
  Parameters: NONE.
  
  Return: NONE.
  
  Notes: Initialize the deck in sorted order, then randomly swap a card.
*/
/*******************************************************************************/
void shuffle()
{
  int card, ranSwapPosition;
  
  for(card = 0; card < (NUM_SUITS * NUM_RANKS); card++)
  {
    deck[card] = card;
  }
  for(card = (NUM_SUITS * NUM_RANKS)-1; card > 1; card--)
  {
    ranSwapPosition = rand() % card;
    swapPosition(card, ranSwapPosition);
  }
}

/*******************************************************************************/
/*
  f(sortDeck): Sort the deck using selection sort.
  
  Parameters: NONE.
  
  Returns: NONE.
  
  Notes: Go through current unsorted deck and swap smallest value with first
  element until deck[] = {0, 1, ...,49, 50, 51} by using a swapPosition function.
*/
/*******************************************************************************/
void sortDeck()
{
  int firstCard, card;

  for(firstCard = 0; firstCard < (NUM_RANKS * NUM_SUITS - 1); firstCard++)
  {
    for(card = firstCard+1; card < (NUM_RANKS * NUM_SUITS); card++)
    {
      if( deck[card] < deck[firstCard] )
      {
        swapPosition(card, firstCard);
      }
    }
  }
}

/*******************************************************************************/
/*
  f(swapPosition): Swap two elements in the array.
  
  Parameters:
  int firstPosition // location of first element.
  int secondPosition // location of second element.
  
  Return: NONE.
  
  Notes:
  Copy the element of deck[firstPosition] to (temp),
  then assign the element of deck[secondPosition] to deck[firstPosition]-position,
  then assigning (temp) into deck[secondPosition]-position.
*/
/*******************************************************************************/
void swapPosition(int firstPosition, int secondPosition)
{
  int temp = deck[firstPosition];
  deck[firstPosition] = deck[secondPosition];
  deck[secondPosition] = temp;
}