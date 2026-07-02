# Palindrome Checker

## Problem Statement
Write a program to find whether a given number is a palindrome or not.

## Solution
A number is a palindrome if it reads the same forwards and backwards, such as 121 or 1331. To check this, the program reverses the number and compares the reversed value with the original number. The reversal is done by repeatedly taking the last digit of the number and building a new number from it, one digit at a time, until no digits remain. If the reversed number is the same as the original number, the number is a palindrome. Negative numbers are treated as not being palindromes, since the negative sign breaks the symmetry.
