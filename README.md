## PicoCTF Utility: Decimal-to-Binary Converter
A custom tool developed to automate base conversions during the 2025 PicoCTF Challenge.

## 0x01: Context
While participating in "PicoCTF" I encountered multiple challenges requiring rapid conversion between decimal to binary. Rather than using 
online converters, I wrote this C utility to handle the logic locally and understand the underlaying data transformation.

## 0x02: Why C
I chose c for this utility to practice manual memory management and to ensure the tool has a near-zero excution time, which is critical when piping output into other security tools.

## 0x03: Features
Speed: Compiled C binary for instat results.                                                                                                                                                                                                   portability: Sigle file, no dependecies.                                                                                                                                                                                                           PicoCTF Ready: Designed to handle the integer ranges typically found in entry-to-intermediate CTF challenges.

## 0x04: Usage
gcc binary.c -o binary                                                                                                                                                                                                                            

./binary
