# Project Euler - Problem 54

## `Poker Hands`

### Problem Statement

In the card game poker, a hand consists of five cards and are ranked, from lowest to highest, in the following way:

1. High Card: Highest value card.
2. One Pair: Two cards of the same value.
3. Two Pairs: Two different pairs.
4. Three of a Kind: Three cards of the same value.
5. Straight: All five cards in consecutive value order.
6. Flush: All five cards of the same suit.
7. Full House: Three of a kind and a pair.
8. Four of a Kind: Four cards of the same value.
9. Straight Flush: All five cards in consecutive value order, same suit.
10. Royal Flush: Ten, Jack, Queen, King, Ace, in same suit.

The cards are valued in the order:
2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace.

If two players have the same ranked hands then the rank made up of the highest value wins; for example, a pair of eights beats a pair of fives (see example 1 below). But if two ranks tie, for example, both players have a pair of queens, then highest cards in each hand are compared (see example 4 below); if the highest cards tie then the next highest cards are compared, and so on.

Consider the following five hands dealt to two players:

Hand 1:
Player 1: 5H 5C 6S 7S KD (Pair of Fives)
Player 2: 2C 3S 8S 8D TD (Pair of Eights)
Winner: Player 2

Hand 2:
Player 1: 5D 8C 9S JS AC (Highest card Ace)
Player 2: 2C 5C 7D 8S QH (Highest card Queen)
Winner: Player 1

Hand 3:
Player 1: 2D 9C AS AH AC (Three Aces)
Player 2: 3D 6D 7D TD QD (Flush with Diamonds)
Winner: Player 2

Hand 4:
Player 1: 4D 6S 9H QH QC (Pair of Queens, highest card Nine)
Player 2: 3D 6D 7H QD QS (Pair of Queens, highest card Seven)
Winner: Player 1

Hand 5:
Player 1: 2H 2D 4C 4D 4S (Full House with Three Fours)
Player 2: 3C 3D 3S 9S 9D (Full House with Three Threes)
Winner: Player 1

The file, [p054_poker.txt](https://projecteuler.net/project/resources/p054_poker.txt), contains one-thousand random hands dealt to two players. Each line of the file contains ten cards (separated by a single space): the first five are Player 1's cards and the last five are Player 2's cards. You can assume that all hands are valid (no invalid characters or repeated cards), each player's hand is in no specific order, and in each hand there is a clear winner.

How many hands does Player 1 win?

### Instructions

1. Read the file containing the poker hands.
2. Parse each line to extract Player 1's and Player 2's hands.
3. Determine the ranking of each hand.
4. Compare the hands to determine the winner.
5. Count the number of times Player 1 wins.
6. Output the result.

### Example

For the hands:
- Player 1: 5H 5C 6S 7S KD (Pair of Fives)
- Player 2: 2C 3S 8S 8D TD (Pair of Eights)
Winner: Player 2

### Discussion

This problem involves parsing and evaluating poker hands according to the rules of poker. Efficient string manipulation and understanding of poker hand rankings are key to solving this problem.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 54](https://projecteuler.net/problem=54).
