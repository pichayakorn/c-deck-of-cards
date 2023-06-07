# Deck of Cards

Simple C Project: Deck of Cards

## Documentation

### `showDeck()`

Display the deck.

#### Return

- **void** `NONE`

> **Note**: Call the [showCard](#showcardint-card) function to display each card.

### `showCard(int card)`

Display each card.

#### Parameters

- **int** `card`: the value of card to be displayed.

#### Return

- **void** `NONE`

> **Note**: The suits are the order: Hearts(0-12), Diamonds(13-25), Clubs(26-38) and Spades(39-51).
>
> The cards are in the order: Ace, 2, 3, ..., Queen, King.

### `shuffle()`

Shuffle the deck of cards.

#### Return

- **void** `NONE`

> **Note**: Initialize the deck in sorted order, then randomly swap a card.

### `sortDeck()`

Sort the deck using selection sort.

#### Return

- **void** `NONE`

> **Note**: Go through current unsorted deck and swap smallest value with first element until deck[] = {0, 1, ..., 49, 50, 51} by using a [swapPosition](#swappositionint-firstposition-int-secondposition) function.

### `swapPosition(int firstPosition, int secondPosition)`

Swap two elements in the array.

#### Parameters

- **int** `firstPosition`: location of first element.
- **int** `secondPosition`: location of second element.

#### Return

- **void** `NONE`

> **Note**: Copy element of deck[`firstPosition`] to (temp), then assign the element of deck[`secondPosition`] to deck[`firstPosition`]-position, then assigning (temp) into deck[`secondPosition`]-position.

## Sample

**Shuffle full deck and showing the output**

```
5-Clubs
9-Hearts
Queen-Spades
King-Diamonds
King-Hearts
King-Clubs
Ace-Diamonds
5-Hearts
Jack-Spades
Queen-Diamonds
2-Hearts
4-Clubs
3-Hearts

3-Clubs
7-Spades
8-Clubs
4-Spades
2-Diamonds
10-Hearts
9-Clubs
King-Spades
Ace-Clubs
3-Spades
5-Diamonds
6-Hearts
6-Spades

7-Hearts
9-Diamonds
Queen-Clubs
Jack-Diamonds
10-Clubs
7-Diamonds
2-Clubs
9-Spades
10-Diamonds
7-Clubs
Ace-Hearts
4-Hearts
8-Spades

3-Diamonds
6-Diamonds
Ace-Spades
Queen-Hearts
8-Diamonds
5-Spades
2-Spades
Jack-Hearts
8-Hearts
6-Clubs
10-Spades
4-Diamonds
Jack-Clubs
```

**Sorting deck and showing the output**

```
Ace-Hearts
2-Hearts
3-Hearts
4-Hearts
5-Hearts
6-Hearts
7-Hearts
8-Hearts
9-Hearts
10-Hearts
Jack-Hearts
Queen-Hearts
King-Hearts

Ace-Diamonds
2-Diamonds
3-Diamonds
4-Diamonds
5-Diamonds
6-Diamonds
7-Diamonds
8-Diamonds
9-Diamonds
10-Diamonds
Jack-Diamonds
Queen-Diamonds
King-Diamonds

Ace-Clubs
2-Clubs
3-Clubs
4-Clubs
5-Clubs
6-Clubs
7-Clubs
8-Clubs
9-Clubs
10-Clubs
Jack-Clubs
Queen-Clubs
King-Clubs

Ace-Spades
2-Spades
3-Spades
4-Spades
5-Spades
6-Spades
7-Spades
8-Spades
9-Spades
10-Spades
Jack-Spades
Queen-Spades
King-Spades
```

## License

MIT license

Check out [LICENSE](/LICENSE) for more detail.
